/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     Reactor.h
 * File Function: Reactor类的定义
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
#ifndef _REACTOR_H_
#define _REACTOR_H_

#include "EventDemultiplexer.h"
#include "EventHandler.h"
#include <unordered_map>
#include <functional>

class Reactor {
public:
    Reactor() : demultiplexer(new SelectDemultiplexer()) {}

    ~Reactor() {
        delete demultiplexer;
    }

    void registerHandler(EventHandler* handler) {
        handlers[handler->getHandle()] = handler;
        demultiplexer->registerEvent(handler->getHandle(), EventType::READ_EVENT);
    }

    void removeHandler(Handle handle) {
        demultiplexer->removeEvent(handle);
        handlers.erase(handle);
    }

    void handleEvents() {
        auto activeHandles = demultiplexer->waitForEvents(100);
        for (auto handle : activeHandles) {
            if (handlers.find(handle) != handlers.end()) {
                handlers[handle]->handleEvent(handle);
            }
        }
    }

private:
    EventDemultiplexer* demultiplexer;
    std::unordered_map<Handle, EventHandler*> handlers;
};

#endif // !_REACTOR_H_