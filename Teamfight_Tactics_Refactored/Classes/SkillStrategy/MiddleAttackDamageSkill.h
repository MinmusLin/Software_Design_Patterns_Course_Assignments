/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     MiddleAttackDamageSkill.h
 * File Function: MiddleAttackDamageSkill类的定义
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
#ifndef _MIDDLE_ATTACK_DAMAGE_SKILL_H_
#define _MIDDLE_ATTACK_DAMAGE_SKILL_H_

#include "SkillStrategy.h"

class MiddleAttackDamageSkill : public SkillStrategy {
public:
    void execute(ChampionAttributes& attributes) override {
        attributes.attackDamage *= ATTACK_DAMAGE_MAGNIFICATION_MIDDLE;
    }
};

#endif // !_MIDDLE_ATTACK_DAMAGE_SKILL_H_