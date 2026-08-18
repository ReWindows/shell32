#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CAce {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CAce@@SAJPEAXKEEPEAPEAV1@@Z
    static long CreateInstance(void *, unsigned long, unsigned char, unsigned char, CAce * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromAce@CAce@@QEAAJPEAU_ACE_HEADER@@@Z
    long InitFromAce(_ACE_HEADER *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAce@@QEAA@XZ
    ~CAce();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CAce@@AEAAJPEAXKEEG0@Z
    long _Init(void *, unsigned long, unsigned char, unsigned char, unsigned short, void *);
};
