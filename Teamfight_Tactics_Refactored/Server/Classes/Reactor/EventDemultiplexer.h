/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     EventDemultiplexer.h
 * File Function: EventDemultiplexer类的定义
 * Author:        林继申
 * Update Date:   2025/1/5
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用反应器模式重构 - 重构后代码
 *
 ********************************************************************************/

#pragma once
#ifndef _EVENT_DEMULTIPLEXER_H_
#define _EVENT_DEMULTIPLEXER_H_

#include <vector>
#include <WinSock2.h>

enum class EventType {
    READ_EVENT,
    WRITE_EVENT
};

using Handle = SOCKET;

class EventDemultiplexer {
public:
    virtual ~EventDemultiplexer() = default;
    virtual void registerEvent(Handle handle, EventType eventType) = 0;
    virtual void removeEvent(Handle handle) = 0;
    virtual std::vector<Handle> waitForEvents(int timeoutMs) = 0;
};

class SelectDemultiplexer : public EventDemultiplexer {
public:
    SelectDemultiplexer() {
        FD_ZERO(&readfds);
    }

    void registerEvent(Handle handle, EventType eventType) override {
        FD_SET(handle, &readfds);
    }

    void removeEvent(Handle handle) override {
        FD_CLR(handle, &readfds);
    }

    std::vector<Handle> waitForEvents(int timeoutMs) override {
        fd_set tmpfds = readfds;
        struct timeval timeout = {0, timeoutMs * 1000};

        int selectResult = select(0, &tmpfds, nullptr, nullptr, &timeout);
        if (selectResult > 0) {
            std::vector<Handle> activeHandles;
            for (int i = 0; i < FD_SETSIZE; ++i) {
                if (FD_ISSET(i, &tmpfds)) {
                    activeHandles.push_back(i);
                }
            }
            return activeHandles;
        }
        return {};
    }

private:
    fd_set readfds;
};

#endif // !_EVENT_DEMULTIPLEXER_H_