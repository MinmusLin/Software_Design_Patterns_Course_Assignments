/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     Reactor.h
 * File Function: Reactor类的定义
 * Author:        林继申
 * Update Date:   2025/1/4
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

#include <unordered_map>
#include <functional>
#include <WinSock2.h>

/*
 * Class Name:     Reactor
 * Class Function: Reactor事件处理器
 */
class Reactor {
public:
    // 注册事件处理器
    void registerHandler(SOCKET socket, std::function<void(SOCKET)> handler);

    // 处理事件
    void handleEvents();

private:
    std::unordered_map<SOCKET, std::function<void(SOCKET)>> handlers; // 事件处理器映射
};

#endif // !_REACTOR_H_