/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     ChampionBuilder.h
 * File Function: ChampionBuilder类的定义
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用生成器模式重构 - 重构后代码
 *
 ********************************************************************************/

#ifndef _CHAMPION_BUILDER_H_
#define _CHAMPION_BUILDER_H_

#include "Champion.h"
#include <string>

class ChampionBuilder {
public:
    // 构造函数
    ChampionBuilder();

    // 析构函数
    ~ChampionBuilder();

    // 设置属性的方法
    ChampionBuilder& setChampionCategory(const std::string& category);
    ChampionBuilder& setChampionName(const std::string& name);
    ChampionBuilder& setChampionImagePath(const std::string& imagePath);
    ChampionBuilder& setPrice(int price);
    ChampionBuilder& setLevel(int level);
    ChampionBuilder& setHealthPoints(int healthPoints);
    ChampionBuilder& setMagicPoints(int magicPoints);
    ChampionBuilder& setAttackDamage(int attackDamage);
    ChampionBuilder& setSkillTriggerThreshold(int skillTriggerThreshold);
    ChampionBuilder& setAttackRange(int attackRange);
    ChampionBuilder& setAttackSpeed(float attackSpeed);
    ChampionBuilder& setMovementSpeed(float movementSpeed);
    ChampionBuilder& setDefenseCoefficient(float defenseCoefficient);
    ChampionBuilder& setBond(const std::string& bond);

    // 构建 Champion 对象
    Champion build();

private:
    ChampionAttributes attributes; // 用于存储构建过程中的属性
};

#endif // !_CHAMPION_BUILDER_H_