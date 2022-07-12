#pragma once

#include <Forms/TESWeather.h>

struct Sky
{
    static Sky* GetInstance();

    uint8_t pad0[0x48];

    TESWeather* currentWeather;
};

static_assert(offsetof(Sky, currentWeather) == 0x48);
