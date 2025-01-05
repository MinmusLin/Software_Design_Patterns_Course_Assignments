/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     ChampionAttributesLayer.h
 * File Function: ChampionAttributesLayer类的定义
 * Author:        刘淑仪、林继申
 * Update Date:   2023/12/30
 * License:       MIT License
 ****************************************************************/

#pragma once
#ifndef _CHAMPION_ATTRIBUTES_LAYER_H_
#define _CHAMPION_ATTRIBUTES_LAYER_H_

/********************************************************************************
 *
 *   使用组合模式重构 - 重构前代码
 *
 ********************************************************************************/

// #include "cocos2d.h"
// #include "proj.win32/Constant.h"

/*
 * Class Name:     ChampionAttributesLayer
 * Class Function: 战斗英雄属性层类
 */
// class ChampionAttributesLayer : public cocos2d::Layer {
// public:
//     // 初始化战斗英雄属性层
//     virtual bool init();

//     // 显示战斗英雄属性
//     void showAttributes(const ChampionCategory championCategory);

//     // 实现 ChampionAttributesLayer 类的 create 方法
//     CREATE_FUNC(ChampionAttributesLayer);

// private:
//     // 创建属性标签
//     void createLabel(const std::string& text, const float x, const float y, const int fontSize = CHAMPION_ATTRIBUTES_FONT_SIZE, cocos2d::Color4B const color = cocos2d::Color4B::WHITE);

//     // 浮点数格式化输出
//     std::string formatFloat(const float value, const int precision = 2);
// };

/********************************************************************************
 *
 *   使用组合模式重构 - 重构后代码
 *
 ********************************************************************************/

#include "cocos2d.h"
#include "proj.win32/Constant.h"
#include "Component/Component.h"

/*
 * Class Name:     ChampionAttributesLayer
 * Class Function: 战斗英雄属性层类
 */
class ChampionAttributesLayer : public cocos2d::Layer {
public:
    virtual bool init();
    void showAttributes(const ChampionCategory championCategory);
    CREATE_FUNC(ChampionAttributesLayer);

private:
    void createLabel(const std::string& text, float x, float y, int fontSize = CHAMPION_ATTRIBUTES_FONT_SIZE, cocos2d::Color4B color = cocos2d::Color4B::WHITE);
    std::string formatFloat(float value, int precision = 2);
    CompositeComponent* rootComponent;
};

#endif // !_CHAMPION_ATTRIBUTES_LAYER_H_