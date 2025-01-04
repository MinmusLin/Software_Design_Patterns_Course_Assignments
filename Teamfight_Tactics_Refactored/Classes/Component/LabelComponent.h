/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     LabelComponent.h
 * File Function: LabelComponent类的定义
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
#ifndef _LABEL_COMPONENT_H_
#define _LABEL_COMPONENT_H_

#include "Component.h"

/*
 * Class Name:     LabelComponent
 * Class Function: 标签组件叶子节点类
 */
class LabelComponent : public Component {
public:
    static LabelComponent* create(const std::string& text, int fontSize, cocos2d::Color4B color);
    virtual void display(float x, float y) override;

private:
    LabelComponent(const std::string& text, int fontSize, cocos2d::Color4B color);
    cocos2d::Label* label;
};

#endif // !_LABEL_COMPONENT_H_