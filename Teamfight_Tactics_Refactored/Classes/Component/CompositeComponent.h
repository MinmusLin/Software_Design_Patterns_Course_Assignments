/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     CompositeComponent.h
 * File Function: CompositeComponent类的定义
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
#ifndef _COMPOSITE_COMPONENT_H_
#define _COMPOSITE_COMPONENT_H_

#include "Component.h"

/*
 * Class Name:     CompositeComponent
 * Class Function: 组件复合节点类
 */
class CompositeComponent : public Component {
public:
    virtual void add(Component* component) override;
    virtual void remove(Component* component) override;
    virtual void display(float x, float y) override;

private:
    std::vector<Component*> components;
};

#endif // !_COMPOSITE_COMPONENT_H_