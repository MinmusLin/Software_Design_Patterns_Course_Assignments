/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     LoutBond.h
 * File Function: LoutBond类的定义
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用状态模式重构 - 重构后代码
 *
 ********************************************************************************/

#pragma once
#ifndef _LOUT_BOND_H_
#define _LOUT_BOND_H_

#include "BondState.h"

class LoutBond : public BondState {
public:
    void applyEffect(ChampionAttributes& attributes) override {
        attributes.healthPoints = static_cast<int>(attributes.healthPoints * LOUT_HEALTH_POINTS_MULTIPLIER);
        attributes.movementSpeed *= LOUT_MOVEMENT_SPEED_MULTIPLIER;
        attributes.attackDamage *= LOUT_ATTACK_DAMAGE_MULTIPLIER;
    }
};

#endif // !_LOUT_BOND_H_