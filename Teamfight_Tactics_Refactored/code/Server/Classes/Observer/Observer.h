/****************************************************************
 * Project Name:  Server
 * File Name:     Observer.h
 * File Function: Observer类的定义
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
#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <string>
#include <WinSock2.h>

/*
 * Class Name:     Observer
 * Class Function: 观察者接口
 */
class Observer {
public:
    virtual ~Observer() = default;
    virtual void update(const SOCKET clientSocket, const std::string& message) = 0;
};

#endif // !_OBSERVER_H_