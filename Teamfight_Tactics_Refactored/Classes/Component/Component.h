/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     Component.h
 * File Function: Component类的定义
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用组合模式重构 - 重构后代码
 *
 ********************************************************************************/

#pragma once
#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include "cocos2d.h"

/*
 * Class Name:     Component
 * Class Function: 组件接口
 */
class Component {
public:
    virtual ~Component() {}
    virtual void add(Component* component) {}
    virtual void remove(Component* component) {}
    virtual void display(float x, float y) = 0;
};

#endif // !_COMPONENT_H_