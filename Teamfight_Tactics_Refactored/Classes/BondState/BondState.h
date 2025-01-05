/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     BondState.h
 * File Function: BondState类的定义
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
#ifndef _BOND_STATE_H_
#define _BOND_STATE_H_

#include "Constant.h"
#include "Champion/Champion.h"

class BondState {
public:
    virtual void applyEffect(ChampionAttributes& attributes) = 0;
    virtual void setContent(Champion* content) = 0;
    virtual ~BondState() = default;
};

#endif // !_BOND_STATE_H_