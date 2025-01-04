/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     SkillStrategy.h
 * File Function: SkillStrategy类的定义
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
#ifndef _SKILL_STRATEGY_H_
#define _SKILL_STRATEGY_H_

#include "Constant.h"

class SkillStrategy {
public:
    virtual void execute(ChampionAttributes& attributes) = 0;
    virtual ~SkillStrategy() = default;
};

#endif // !_SKILL_STRATEGY_H_