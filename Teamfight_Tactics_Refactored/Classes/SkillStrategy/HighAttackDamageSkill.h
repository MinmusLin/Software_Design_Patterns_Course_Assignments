/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     HighAttackDamageSkill.h
 * File Function: HighAttackDamageSkill类的定义
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
#ifndef _HIGH_ATTACK_DAMAGE_SKILL_H_
#define _HIGH_ATTACK_DAMAGE_SKILL_H_

#include "SkillStrategy.h"

class HighAttackDamageSkill : public SkillStrategy {
public:
    void execute(ChampionAttributes& attributes) override {
        attributes.attackDamage *= ATTACK_DAMAGE_MAGNIFICATION_HIGH;
    }
};

#endif // !_HIGH_ATTACK_DAMAGE_SKILL_H_