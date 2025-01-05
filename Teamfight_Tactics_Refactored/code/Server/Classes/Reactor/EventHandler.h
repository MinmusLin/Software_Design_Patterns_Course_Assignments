/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     EventHandler.h
 * File Function: EventHandler类的定义
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
#ifndef _EVENT_HANDLER_H_
#define _EVENT_HANDLER_H_

#include "EventDemultiplexer.h"

class EventHandler {
public:
    virtual ~EventHandler() = default;
    virtual void handleEvent(Handle handle) = 0;
    virtual Handle getHandle() const = 0;
};

#endif // !_EVENT_HANDLER_H_