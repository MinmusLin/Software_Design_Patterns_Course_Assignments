/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     AttackSpeedAndDefenseSkill.h
 * File Function: AttackSpeedAndDefenseSkill类的定义
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用策略模式重构 - 重构后代码
 *
 ********************************************************************************/

#pragma once
#ifndef _ATTACK_SPEED_AND_DEFENSE_SKILL_H_
#define _ATTACK_SPEED_AND_DEFENSE_SKILL_H_

#include "SkillStrategy.h"

class AttackSpeedAndDefenseSkill : public SkillStrategy {
public:
    void execute(ChampionAttributes& attributes) override {
        attributes.attackSpeed += SKILL_ATTACK_SPEED_UP;
        attributes.defenseCoefficient += SKILL_DEFENSE_COEFFICIENT_UP;
    }
};

#endif // !_ATTACK_SPEED_AND_DEFENSE_SKILL_H_