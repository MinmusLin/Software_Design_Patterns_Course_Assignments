/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     MeleeBuilder.h
 * File Function: MeleeBuilder类的定义
 * Author:        林继申
 * Update Date:   2025/1/5
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用生成器模式重构 - 重构后代码
 *
 ********************************************************************************/

#include "Builder.h"

class MeleeBuilder : public Builder {
private:
    ChampionAttributes attributes;

public:
    void buildBasicAttributes() override {}
    void buildSpecialAttributes() override {}
    Champion getResult() override {}
};