/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     Builder.h
 * File Function: Builder类的定义
 * Author:        林继申
 * Update Date:   2025/1/5
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用生成器模式重构 - 重构后代码
 *
 ********************************************************************************/

#include "Constant.h"
#include "Champion/Champion.h"

class Builder {
public:
    virtual ~Builder() = default;
    virtual void buildBasicAttributes() = 0;
    virtual void buildSpecialAttributes() = 0;
    virtual Champion getResult() = 0;
};