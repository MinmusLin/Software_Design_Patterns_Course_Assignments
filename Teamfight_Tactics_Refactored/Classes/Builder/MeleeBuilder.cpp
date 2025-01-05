/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     MeleeBuilder.cpp
 * File Function: MeleeBuilder类的实现
 * Author:        林继申
 * Update Date:   2025/1/5
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用生成器模式重构 - 重构后代码
 *
 ********************************************************************************/

#include "MeleeBuilder.h"

void MeleeBuilder::buildBasicAttributes() override {
    attributes.attackRange = 1;
    attributes.defenseCoefficient = 1.2f;
}

void MeleeBuilder::buildSpecialAttributes() override {
    attributes.healthPoints = 600;
    attributes.attackDamage = 70;
    attributes.attackSpeed = 0.8f;
}

Champion MeleeBuilder::getResult() override {
    return Champion(attributes);
}