/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     BrotherhoodBond.h
 * File Function: BrotherhoodBond类的定义
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
#ifndef _BROTHERHOOD_BOND_H_
#define _BROTHERHOOD_BOND_H_

#include "BondState.h"

class BrotherhoodBond : public BondState {
public:
    void applyEffect(ChampionAttributes& attributes) override {
        attributes.movementSpeed *= BROTHERHOOD_MOVEMENT_SPEED_MULTIPLIER;
        attributes.attackSpeed *= BROTHERHOOD_ATTACK_SPEED_MULTIPLIER;
    }
};

#endif // !_BROTHERHOOD_BOND_H_