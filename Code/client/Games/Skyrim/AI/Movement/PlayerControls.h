#pragma once

// Bethesda didn't put it into a namespace

#include "Games/Primitives.h"

struct PlayerControlsData
{
    // members
    NiPoint2 MoveInputVec; // 00
    NiPoint2 LookInputVec; // 08
    NiPoint2 PrevMoveVec;  // 10
    NiPoint2 PrevLookVec;  // 18
    float unk20;           // 20
    bool bAutoMove;        // 24
    bool bRunning;         // 25
    std::uint8_t unk26;    // 26
    bool fovSlideMode;     // 27
    bool povScriptMode;    // 28
    bool povBeastMode;     // 29
    std::uint8_t unk2A;    // 2A
    std::uint8_t unk2B;    // 2B
    bool remapMode;        // 2C
    std::uint8_t unk2D;    // 2D
    std::uint16_t unk2E;   // 2E
};

class PlayerControls
{
  public:
    PlayerControls* GetInstance();

    void SetBlockPlayerInput(bool abFlag)
    {
        bBlockPlayerInput = abFlag;
    }

  public:
    char pad0[0x20];
    PlayerControlsData Data;
    std::uint32_t pad054;                   // 054
    GameArray<void*> handlers;              // 058
    GameArray<void*> unk070;                // 070
    GameArray<void*> unk088;                // 088
    std::uint8_t unk0A0[8];                 // 0A0
    std::uint64_t unk0A8;                   // 0A8
    float unk0B0[8];                        // 0B0
    std::uint32_t unk0D0[10];               // 0D0
    std::uint8_t unk0F8[8];                 // 0F8
    float unk100[20];                       // 100
    GameArray<void*> actionInterestedActor; // 150
    char actorArrayLock[8];                 // 168
    void* pMovementHandler;                 // 170
    void* pLookHandler;                     // 178
    void* pSprintHandler;                   // 180
    void* pReadyWeaponHandler;              // 188
    void* pAutoMoveHandler;                 // 190
    void* pToggleRunHandler;                // 198
    void* pActivateHandler;                 // 1A0
    void* pJumpHandler;                     // 1A8
    void* shoutHandler;                     // 1B0
    void* attackBlockHandler;               // 1B8
    void* runHandler;                       // 1C0
    void* sneakHandler;                     // 1C8
    void* togglePOVHandler;                 // 1D0
    bool bNotifyingHandlers;                // 1D8
    bool bBlockPlayerInput;                 // 1D9
    std::uint16_t unk1DA;                   // 1DA
    std::uint32_t unk1DC;                   // 1DC
};

static_assert(offsetof(PlayerControls, PlayerControls::bBlockPlayerInput) == 0x1D9);
