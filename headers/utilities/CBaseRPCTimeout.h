#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CBaseRPCTimeout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Arm@CBaseRPCTimeout@@QEAAXK@Z
    void Arm(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disarm@CBaseRPCTimeout@@QEAAXXZ
    void Disarm();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Callback@CBaseRPCTimeout@@CAXPEAXE@Z
    static void s_Callback(void *, unsigned char);
};
