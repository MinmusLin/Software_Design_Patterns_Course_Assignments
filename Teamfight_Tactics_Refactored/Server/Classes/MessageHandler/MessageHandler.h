/****************************************************************
 * Project Name:  Server
 * File Name:     MessageHandler.h
 * File Function: MessageHandler类的定义
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用观察者模式重构 - 重构后代码
 *
 ********************************************************************************/

#pragma once
#ifndef _MESSAGE_HANDLER_H_
#define _MESSAGE_HANDLER_H_

#include "../Observer/Observer.h"
#include "../Server/Server.h"

/*
 * Class Name:     MessageHandler
 * Class Function: 消息处理观察者
 */
class MessageHandler : public Observer {
public:
    MessageHandler(Server& server) : server(server) {}
    void update(const SOCKET clientSocket, const std::string& message) override;

private:
    Server& server;
};

#endif // !_MESSAGE_HANDLER_H_