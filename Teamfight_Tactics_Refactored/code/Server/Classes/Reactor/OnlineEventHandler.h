/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     OnlineEventHandler.h
 * File Function: OnlineEventHandler类的定义
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
#ifndef _ONLINE_ENENT_HANDLER_H_
#define _ONLINE_ENENT_HANDLER_H_

#include "EventHandler.h"
#include "Reactor.h"
#include <string>
#include <WinSock2.h>

class OnlineEventHandler : public EventHandler {
public:
    OnlineEventHandler(Handle handle, Reactor* reactor) 
        : handle(handle), reactor(reactor) {}

    void handleEvent(Handle handle) override {
        char buffer[BUFFER_SIZE];
        int recvSize = recv(handle, buffer, BUFFER_SIZE, 0);
        if (recvSize > 0) {
            buffer[recvSize] = '\0';
            handleMessage(buffer);
        }
    }

    Handle getHandle() const override {
        return handle;
    }

private:
    void handleMessage(const std::string& message) {
        if (!strncmp(message.c_str(), HEALTH_POINTS_IDENTIFIER, MESSAGE_IDENTIFIER_LENGTH)) {
            int healthPoints;
            SOCKET socket;
            sscanf(message.c_str(), HEALTH_POINTS_FORMAT, &healthPoints, &socket);
            updatePlayerHealthPoints(healthPoints, socket);
        }
    }

    Handle handle;
    Reactor* reactor;
};

#endif // !_ONLINE_ENENT_HANDLER_H_