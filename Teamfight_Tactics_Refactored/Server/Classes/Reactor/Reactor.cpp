/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     Reactor.cpp
 * File Function: Reactor类的实现
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用反应器模式重构 - 重构后代码
 *
 ********************************************************************************/

#include "Reactor.h"

// 注册事件处理器
void Reactor::registerHandler(SOCKET socket, std::function<void(SOCKET)> handler)
{
    handlers[socket] = handler;
}

// 处理事件
void Reactor::handleEvents() {
    fd_set readfds;
    FD_ZERO(&readfds);

    // 将所有注册的句柄添加到 readfds 集合中
    for (const auto& handler : handlers) {
        FD_SET(handler.first, &readfds);
    }

    // 设置超时时间（100ms）
    struct timeval timeout;
    timeout.tv_sec = 0;
    timeout.tv_usec = 100000;

    // 使用 select 监听事件
    int selectResult = select(0, &readfds, nullptr, nullptr, &timeout);
    if (selectResult > 0) {
        // 遍历所有句柄，检查是否有事件发生
        for (const auto& handler : handlers) {
            if (FD_ISSET(handler.first, &readfds)) {
                // 调用注册的事件处理器
                handler.second(handler.first);
            }
        }
    }
}