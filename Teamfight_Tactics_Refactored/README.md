# Teamfight Tactics (Refactored)

## 项目名称

Teamfight_Tactics_Refactored

## 项目简介

A project of Teamfight Tactics based on [Cocos2d-x 3.17.2](https://docs.cocos.com/cocos2d-x/manual/) (refactored version).

基于 [Cocos2d-x 3.17.2](https://docs.cocos.com/cocos2d-x/manual/) 开发的金铲铲之战游戏项目（重构版本）。

This project is a Teamfight Tactics game developed based on [Cocos2d-x 3.17.2](https://docs.cocos.com/cocos2d-x/manual/), inspired by games such as "Dota Auto Chess". It boasts a wealth of basic features, including captivating initial and settings interfaces, background music, a variety of cards and their upgrade systems, movement for tiny heroes, and in-game cards with red and blue health bars that can unleash abilities when the blue bar is full. Moreover, the game supports room creation and joining, offers practice mode and online gameplay, allowing players to compete against AI or other human players. The project also expands on multiple synergy enhancement functions and a strengthened rune system, along with sound effects during combat, providing a more rich and immersive gaming experience.

该项目是一个基于 [Cocos2d-x 3.17.2](https://docs.cocos.com/cocos2d-x/manual/) 开发的金铲铲之战游戏，灵感来自于《Dota 自走棋》《云顶之弈》《金铲铲之战》等游戏。游戏拥有丰富的基础功能，如具有引人入胜的初始和设置界面、背景音效、多种卡牌及其升级系统、小小英雄的移动以及带有红蓝血条的场上卡牌，卡牌蓝条满时还能释放技能。此外，游戏支持创建和加入房间，提供练习模式和联机对弈，允许玩家与AI或其他人类玩家进行游戏。项目还扩展了多种羁绊的加强功能和强化符文系统，以及战斗中的音效，为玩家带来更加丰富和沉浸式的游戏体验。

## 成员分工

| 姓名 | 学号 |
| :---: | :---: |
| 林继申 | 2250758 |
| 刘淑仪 | 2251730 |
| 杨宇琨 | 2252843 |
| 中谷天音 | 2256225 |

```
git log --format='%aN' | sort -u | while read name; do echo -en "$name\t"; git log --author="$name" --pretty=tformat: --numstat | awk '{ add += $1; subs += $2; loc += $1 - $2 } END { printf "added lines: %s, removed lines: %s, total lines: %s\n", add, subs, loc }' -; done
```

## 项目组成

* `/Classes`
类定义与类实现

* `/drawio`
项目源代码

* `/proj.win32`
游戏程序

* `/Server`
服务器程序

* `Documentation_En.pdf`
金铲铲之战项目文档（英文版）

* `Documentation_Zh.pdf`
金铲铲之战项目文档（中文版）

* `Presentation.pptx`
项目汇报 PPT

## 相关仓库

* [Teamfight Tactics](https://github.com/MinmusLin/Teamfight_Tactics)
基于 Cocos2d-x 3.17.2 开发的金铲铲之战游戏项目

## 文档更新日期

2025年1月11日