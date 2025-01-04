/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     PopStarBond.h
 * File Function: PopStarBond类的定义
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
#ifndef _POP_STAR_BOND_H_
#define _POP_STAR_BOND_H_

#include "BondState.h"

class PopStarBond : public BondState {
public:
    void applyEffect(ChampionAttributes& attributes) override {
        attributes.attackSpeed *= POPSTAR_ATTACK_SPEED_MULTIPLIER;
        attributes.movementSpeed *= POPSTAR_MOVEMENT_SPEED_MULTIPLIER;
    }
};

#endif // !_POP_STAR_BOND_H_