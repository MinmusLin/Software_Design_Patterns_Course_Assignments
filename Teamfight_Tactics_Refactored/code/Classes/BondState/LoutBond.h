/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     LoutBond.h
 * File Function: LoutBond类的定义
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
#ifndef _LOUT_BOND_H_
#define _LOUT_BOND_H_

#include "BondState.h"

class LoutBond : public BondState {
public:
    void applyEffect() override {
        this->getAttributes().healthPoints = static_cast<int>(this->getAttributes().healthPoints * LOUT_HEALTH_POINTS_MULTIPLIER);
        this->getAttributes().movementSpeed *= LOUT_MOVEMENT_SPEED_MULTIPLIER;
        this->getAttributes().attackDamage *= LOUT_ATTACK_DAMAGE_MULTIPLIER;
    }

    void setContent(Champion* content) override {
        this->content = content;
    }

private:
    Champion* content;
};

#endif // !_LOUT_BOND_H_