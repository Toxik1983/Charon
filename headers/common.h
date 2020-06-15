/**
 * Just some common stuff.
 */
#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#include <windows.h>
#include <vector>
#include <iostream>
#include "headers/diablo2/pointers.h"
#include "headers/hook.h"

struct DllMainArgs {
    HMODULE hModule;
    DWORD  ul_reason_for_call;
    LPVOID lpReserved;
};
