/****************************************************************
 * Project Name:  Server
 * File Name:     MessageHandler.cpp
 * File Function: MessageHandler类的实现
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用观察者模式重构 - 重构后代码
 *
 ********************************************************************************/

#include "MessageHandler.h"
#include <iostream>
#include <sstream>
#include <chrono>
#include <iomanip>
#include <cstring>

void MessageHandler::update(const SOCKET clientSocket, const std::string& message) {
    char buffer[BUFFER_SIZE];
    strncpy(buffer, message.c_str(), BUFFER_SIZE);

    std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::cout << std::put_time(std::localtime(&now), "[%H:%M:%S]");

    std::cout << " [Client: " << clientSocket << "] Message: " << buffer << std::endl;

    if (!strncmp(buffer, BATTLE_MAP_IDENTIFIER, MESSAGE_IDENTIFIER_LENGTH)) {
        char battleMap[BUFFER_SIZE];
        sscanf(buffer, BATTLE_MAP_FORMAT, battleMap);
        for (auto& map : server.battleMaps) {
            if (map.find(clientSocket) != map.end()) {
                map[clientSocket] = static_cast<std::string>(battleMap);
                break;
            }
        }
    }

    if (!strncmp(buffer, PLAYER_NAME_IDENTIFIER, MESSAGE_IDENTIFIER_LENGTH)) {
        char playerName[BUFFER_SIZE];
        sscanf(buffer, PLAYER_NAME_FORMAT, playerName);
        for (auto& map : server.playerNames) {
            if (map.find(clientSocket) != map.end()) {
                map[clientSocket] = static_cast<std::string>(playerName);
                break;
            }
        }
    }

    if (!strncmp(buffer, HEALTH_POINTS_IDENTIFIER, MESSAGE_IDENTIFIER_LENGTH)) {
        for (const SOCKET& sock : server.clients) {
            send(sock, buffer, strlen(buffer), 0);
        }
    }

    if (server.currentConnections % 2 == 0) {
        if (server.areAllReady(server.playerNames)) {
            strcpy(buffer, server.serializePlayerNames().c_str());
            std::cout << "Broadcast: " << buffer << std::endl;
            for (const SOCKET& sock : server.clients) {
                send(sock, buffer, strlen(buffer), 0);
            }
        }
    }

    if (server.areAllReady(server.battleMaps)) {
        for (size_t i = 0; i < server.clients.size(); i++) {
            sprintf(buffer, BATTLE_MAP_FORMAT, server.getPairedData(server.battleMaps, i).c_str());
            std::cout << "Send Client " << server.clients[i ^ 1] << "[" << (i ^ 1) << "]'s BattleMap to Client " << server.clients[i] << "[" << i << "]: " << buffer << std::endl;
            send(server.clients[i], buffer, strlen(buffer), 0);
        }
        server.clearStrings(server.battleMaps);
    }
}