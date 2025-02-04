#pragma once

#include <chrono>
#include <fstream>
#include <iostream>
#include <map>

#include "FileManip.h"
#include "Network.h"
#include "P2PClient.h"
#include "SettingsConsts.h"
#include "System.h"
#include "crypto.h"
#include "json.hpp"
#include "strops.h"

using json = nlohmann::json;
namespace fs = std::filesystem;


//P2P p2p;


int SyncPending(P2P& p2p, int whichBlock);
int SyncBlock(P2P& p2p, int whichBlock, bool force = false, bool awaitFinish = true);
int Sync(P2P& p2p, json& walletInfo);
int AnnounceToPeers(P2P& p2p);
json ReadProgramConfig();
int WriteProgramConfig();
int GetProgram(P2P& p2p, json& walletInfo);
float GetProgramLifeLeft();
bool IsChainValid(P2P& p2p, json& walletInfo);
std::string CalculateDifficulty(json& walletInfo);
json UpgradeBlock(json& b);
void CreateSuperblock();
int MakeProgram(json& walletInfo, json& walletConfig, std::string& path, bool isQuiet = false);
bool VerifyDeluge(json& delugeJson, std::string& path);
