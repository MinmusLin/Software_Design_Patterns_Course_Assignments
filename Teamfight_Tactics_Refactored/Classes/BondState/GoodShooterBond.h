/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     GoodShooterBond.h
 * File Function: GoodShooterBond类的定义
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
#ifndef _GOOD_SHOOTER_BOND_H_
#define _GOOD_SHOOTER_BOND_H_

#include "BondState.h"

class GoodShooterBond : public BondState {
public:
    void applyEffect(ChampionAttributes& attributes) override {
        attributes.attackSpeed *= GOODSHOOTER_ATTACK_SPEED_MULTIPLIER;
    }

    void setContent(Champion* content) override {
        this->content = content;
    }

private:
    Champion* content;
};

#endif // !_GOOD_SHOOTER_BOND_H_