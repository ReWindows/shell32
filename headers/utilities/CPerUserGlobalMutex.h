#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CPerUserGlobalMutex {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPerUserGlobalMutex@@QEAAJPEBG0@Z
    long Initialize(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAndLock@CPerUserGlobalMutex@@UEAAJPEBG0K@Z
    virtual long InitializeAndLock(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAndLock@CPerUserGlobalMutex@@UEAAJPEBG0@Z
    virtual long InitializeAndLock(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPerUserGlobalMutex@@QEAA@XZ
    ~CPerUserGlobalMutex();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUserSid@CPerUserGlobalMutex@@AEAAJPEAPEAG@Z
    long _GetUserSid(unsigned short * *);
};
