#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CGetVolumeInformationParams {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Call@CGetVolumeInformationParams@@UEAAJXZ
    virtual long Call();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutParams@CGetVolumeInformationParams@@QEAAJPEAGKPEAK110K@Z
    long GetOutParams(unsigned short *, unsigned long, unsigned long *, unsigned long *, unsigned long *, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeout@CGetVolumeInformationParams@@UEAAKXZ
    virtual unsigned long GetTimeout();
};
