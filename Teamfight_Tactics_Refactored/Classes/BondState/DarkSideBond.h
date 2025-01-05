/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     DarkSideBond.h
 * File Function: DarkSideBond类的定义
 * Author:        林继申
 * Update Date:   2025/1/5
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用状态模式重构 - 重构后代码
 *
 ********************************************************************************/

#pragma once
#ifndef _DARK_SIDE_BOND_H_
#define _DARK_SIDE_BOND_H_

#include "BondState.h"

class DarkSideBond : public BondState {
public:
    void applyEffect(ChampionAttributes& attributes) override {
        attributes.skillTriggerThreshold = static_cast<int>(attributes.skillTriggerThreshold * DARKSIDE_SKILL_TRIGGER_MULTIPLIER);
        attributes.attackDamage *= DARKSIDE_ATTACK_DAMAGE_MULTIPLIER;
    }

    void setContent(Champion* content) override {
        this->content = content;
    }

private:
    Champion* content;
};

#endif // !_DARK_SIDE_BOND_H_