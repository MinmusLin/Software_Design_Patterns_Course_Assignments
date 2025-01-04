/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     ChampionConfig.h
 * File Function: ChampionConfig类的定义
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用生成器模式重构 - 重构后代码
 *
 ********************************************************************************/

#include <nlohmann/json.hpp>
#include <fstream>

using json = nlohmann::json;

class ChampionConfig {
public:
    static json loadConfig(const std::string& filePath) {
        std::ifstream file(filePath);
        json config;
        file >> config;
        return config;
    }
};