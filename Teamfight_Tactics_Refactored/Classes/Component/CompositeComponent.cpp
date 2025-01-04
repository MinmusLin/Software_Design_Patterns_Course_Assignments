/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     CompositeComponent.cpp
 * File Function: CompositeComponent类的实现
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用组合模式重构 - 重构后代码
 *
 ********************************************************************************/

#include "CompositeComponent.h"

void CompositeComponent::add(Component* component) {
    components.push_back(component);
}

void CompositeComponent::remove(Component* component) {
    components.erase(std::remove(components.begin(), components.end(), component), components.end());
}

void CompositeComponent::display(float x, float y) {
    for (auto& component : components) {
        component->display(x, y);
    }
}