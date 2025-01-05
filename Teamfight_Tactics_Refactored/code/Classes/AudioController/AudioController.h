/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     AudioController.h
 * File Function: AudioController类的定义
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用外观模式重构 - 重构后代码
 *
 ********************************************************************************/

#pragma once
#ifndef _AUDIO_CONTROLLER_H_
#define _AUDIO_CONTROLLER_H_

#include "AudioEngine.h"
#include <string>

class AudioController {
public:
    // 单例模式
    static AudioController* getInstance();

    // 播放音频
    void playBackgroundMusic(const std::string& audioPath, bool isLoop = true);
    void playSoundEffect(const std::string& audioPath);

    // 暂停音频
    void pauseBackgroundMusic();
    void pauseSoundEffect();

    // 恢复音频
    void resumeBackgroundMusic();
    void resumeSoundEffect();

    // 停止音频
    void stopBackgroundMusic();
    void stopSoundEffect();

    // 设置音量
    void setBackgroundMusicVolume(float volume);
    void setSoundEffectVolume(float volume);

    // 获取音量
    float getBackgroundMusicVolume() const;
    float getSoundEffectVolume() const;

private:
    // 私有构造函数（单例模式）
    AudioController();
    ~AudioController();

    // 禁用拷贝构造函数和赋值运算符
    AudioController(const AudioController&) = delete;
    AudioController& operator=(const AudioController&) = delete;

    // 背景音乐和音效的ID
    int _backgroundMusicID;
    int _soundEffectID;

    // 音量
    float _backgroundMusicVolume;
    float _soundEffectVolume;
};

#endif // !_AUDIO_CONTROLLER_H_