/****************************************************************
 * Project Name:  Teamfight_Tactic
 * File Name:     AudioController.cpp
 * File Function: AudioController类的实现
 * Author:        林继申
 * Update Date:   2025/1/4
 * License:       MIT License
 ****************************************************************/

/********************************************************************************
 *
 *   使用外观模式重构 - 重构后代码
 *
 ********************************************************************************/

#include "AudioController.h"

// 单例实例
AudioController* AudioController::_instance = nullptr;

AudioController* AudioController::getInstance() {
    if (!_instance) {
        _instance = new AudioController();
    }
    return _instance;
}

AudioController::AudioController()
    : _backgroundMusicID(-1), _soundEffectID(-1),
      _backgroundMusicVolume(1.0f), _soundEffectVolume(1.0f) {}

AudioController::~AudioController() {
    // 释放资源
    stopBackgroundMusic();
    stopSoundEffect();
    delete _instance;
}

// 播放背景音乐
void AudioController::playBackgroundMusic(const std::string& audioPath, bool isLoop) {
    if (_backgroundMusicID != -1) {
        cocos2d::experimental::AudioEngine::stop(_backgroundMusicID);
    }
    _backgroundMusicID = cocos2d::experimental::AudioEngine::play2d(audioPath, isLoop);
    cocos2d::experimental::AudioEngine::setVolume(_backgroundMusicID, _backgroundMusicVolume);
}

// 播放音效
void AudioController::playSoundEffect(const std::string& audioPath) {
    _soundEffectID = cocos2d::experimental::AudioEngine::play2d(audioPath, false);
    cocos2d::experimental::AudioEngine::setVolume(_soundEffectID, _soundEffectVolume);
}

// 暂停背景音乐
void AudioController::pauseBackgroundMusic() {
    if (_backgroundMusicID != -1) {
        cocos2d::experimental::AudioEngine::pause(_backgroundMusicID);
    }
}

// 暂停音效
void AudioController::pauseSoundEffect() {
    if (_soundEffectID != -1) {
        cocos2d::experimental::AudioEngine::pause(_soundEffectID);
    }
}

// 恢复背景音乐
void AudioController::resumeBackgroundMusic() {
    if (_backgroundMusicID != -1) {
        cocos2d::experimental::AudioEngine::resume(_backgroundMusicID);
    }
}

// 恢复音效
void AudioController::resumeSoundEffect() {
    if (_soundEffectID != -1) {
        cocos2d::experimental::AudioEngine::resume(_soundEffectID);
    }
}

// 停止背景音乐
void AudioController::stopBackgroundMusic() {
    if (_backgroundMusicID != -1) {
        cocos2d::experimental::AudioEngine::stop(_backgroundMusicID);
        _backgroundMusicID = -1;
    }
}

// 停止音效
void AudioController::stopSoundEffect() {
    if (_soundEffectID != -1) {
        cocos2d::experimental::AudioEngine::stop(_soundEffectID);
        _soundEffectID = -1;
    }
}

// 设置背景音乐音量
void AudioController::setBackgroundMusicVolume(float volume) {
    _backgroundMusicVolume = volume;
    if (_backgroundMusicID != -1) {
        cocos2d::experimental::AudioEngine::setVolume(_backgroundMusicID, volume);
    }
}

// 设置音效音量
void AudioController::setSoundEffectVolume(float volume) {
    _soundEffectVolume = volume;
    if (_soundEffectID != -1) {
        cocos2d::experimental::AudioEngine::setVolume(_soundEffectID, volume);
    }
}

// 获取背景音乐音量
float AudioController::getBackgroundMusicVolume() const {
    return _backgroundMusicVolume;
}

// 获取音效音量
float AudioController::getSoundEffectVolume() const {
    return _soundEffectVolume;
}