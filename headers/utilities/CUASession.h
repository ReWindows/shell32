#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CUASession {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLaunches@CUASession@@UEAAXI@Z
    virtual void AddLaunches(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSwitches@CUASession@@UEAAXI@Z
    virtual void AddSwitches(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUserTime@CUASession@@UEAAXK@Z
    virtual void AddUserTime(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNMaxCandidate@CUASession@@UEAAJW4_tagNMAXCOLS@@PEAUSNMaxEntry@@@Z
    virtual long GetNMaxCandidate(int, SNMaxEntry *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionId@CUASession@@UEAAIXZ
    virtual unsigned int GetSessionId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalLaunches@CUASession@@UEAAIXZ
    virtual unsigned int GetTotalLaunches();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalSwitches@CUASession@@UEAAIXZ
    virtual unsigned int GetTotalSwitches();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalUserTime@CUASession@@UEAAKXZ
    virtual unsigned long GetTotalUserTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveValues@CUASession@@UEAAXPEBUSNMaxEntry@@@Z
    virtual void RemoveValues(SNMaxEntry const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNMaxCandidate@CUASession@@UEAAJW4_tagNMAXCOLS@@PEBUSNMaxEntry@@@Z
    virtual long SetNMaxCandidate(int, SNMaxEntry const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSession@CUASession@@UEAAXXZ
    virtual void SetSession();
};
