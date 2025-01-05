/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     RangedBuilder.cpp
 * File Function: RangedBuilder类的实现
 * Author:        林继申
 * Update Date:   2025/1/5
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用生成器模式重构 - 重构后代码
 *
 ********************************************************************************/

#include "RangedBuilder.h"

void RangedBuilder::buildBasicAttributes() override {
    attributes.attackRange = 3;
    attributes.defenseCoefficient = 0.8f;
}

void RangedBuilder::buildSpecialAttributes() override {
    attributes.healthPoints = 400;
    attributes.attackDamage = 50;
    attributes.attackSpeed = 1.2f;
}

Champion RangedBuilder::getResult() override {
    return Champion(attributes);
}