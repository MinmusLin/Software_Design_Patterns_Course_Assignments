/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     ChampionBuilder.h
 * File Function: ChampionBuilder类的实现
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用生成器模式重构 - 重构后代码
 *
 ********************************************************************************/

#include "ChampionBuilder.h"

// 构造函数
ChampionBuilder::ChampionBuilder() {
    attributes.championCategory = "";
    attributes.championName = "";
    attributes.championImagePath = "";
    attributes.price = 0;
    attributes.level = 1;
    attributes.healthPoints = 0;
    attributes.magicPoints = 0;
    attributes.attackDamage = 0;
    attributes.skillTriggerThreshold = 0;
    attributes.attackRange = 0;
    attributes.attackSpeed = 0.0f;
    attributes.movementSpeed = 0.0f;
    attributes.defenseCoefficient = 0.0f;
    attributes.bond = "NoBond";
}

// 析构函数
ChampionBuilder::~ChampionBuilder() {}

// 设置英雄类别
ChampionBuilder& ChampionBuilder::setChampionCategory(const std::string& category) {
    attributes.championCategory = category;
    return *this;
}

// 设置英雄名称
ChampionBuilder& ChampionBuilder::setChampionName(const std::string& name) {
    attributes.championName = name;
    return *this;
}

// 设置英雄图片路径
ChampionBuilder& ChampionBuilder::setChampionImagePath(const std::string& imagePath) {
    attributes.championImagePath = imagePath;
    return *this;
}

// 设置价格
ChampionBuilder& ChampionBuilder::setPrice(int price) {
    attributes.price = price;
    return *this;
}

// 设置等级
ChampionBuilder& ChampionBuilder::setLevel(int level) {
    attributes.level = level;
    return *this;
}

// 设置生命值
ChampionBuilder& ChampionBuilder::setHealthPoints(int healthPoints) {
    attributes.healthPoints = healthPoints;
    return *this;
}

// 设置魔法值
ChampionBuilder& ChampionBuilder::setMagicPoints(int magicPoints) {
    attributes.magicPoints = magicPoints;
    return *this;
}

// 设置攻击伤害
ChampionBuilder& ChampionBuilder::setAttackDamage(int attackDamage) {
    attributes.attackDamage = attackDamage;
    return *this;
}

// 设置技能触发阈值
ChampionBuilder& ChampionBuilder::setSkillTriggerThreshold(int skillTriggerThreshold) {
    attributes.skillTriggerThreshold = skillTriggerThreshold;
    return *this;
}

// 设置攻击范围
ChampionBuilder& ChampionBuilder::setAttackRange(int attackRange) {
    attributes.attackRange = attackRange;
    return *this;
}

// 设置攻击速度
ChampionBuilder& ChampionBuilder::setAttackSpeed(float attackSpeed) {
    attributes.attackSpeed = attackSpeed;
    return *this;
}

// 设置移动速度
ChampionBuilder& ChampionBuilder::setMovementSpeed(float movementSpeed) {
    attributes.movementSpeed = movementSpeed;
    return *this;
}

// 设置防御系数
ChampionBuilder& ChampionBuilder::setDefenseCoefficient(float defenseCoefficient) {
    attributes.defenseCoefficient = defenseCoefficient;
    return *this;
}

// 设置羁绊效果
ChampionBuilder& ChampionBuilder::setBond(const std::string& bond) {
    attributes.bond = bond;
    return *this;
}

// 构建 Champion 对象
Champion ChampionBuilder::build() {
    return Champion(attributes);
}