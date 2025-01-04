/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     LabelComponent.cpp
 * File Function: LabelComponent类的实现
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用组合模式重构 - 重构后代码
 *
 ********************************************************************************/

#include "LabelComponent.h"

LabelComponent::LabelComponent(const std::string& text, int fontSize, cocos2d::Color4B color) {
    label = cocos2d::Label::createWithTTF(text, "../Resources/Fonts/DingDingJinBuTi.ttf", fontSize);
    label->setTextColor(color);
}

LabelComponent* LabelComponent::create(const std::string& text, int fontSize, cocos2d::Color4B color) {
    return new LabelComponent(text, fontSize, color);
}

void LabelComponent::display(float x, float y) {
    label->setPosition(x, y);
    label->setAnchorPoint(cocos2d::Vec2(0, 0.5));
    cocos2d::Director::getInstance()->getRunningScene()->addChild(label);
}