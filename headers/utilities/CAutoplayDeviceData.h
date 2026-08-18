#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CAutoplayDeviceData {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoplayDeviceData@@QEAA@XZ
    CAutoplayDeviceData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUI@CAutoplayDeviceData@@QEAAJPEAPEAUIAutoPlayUI@@@Z
    long GetUI(IAutoPlayUI * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutoplayDeviceData@@QEAAKXZ
    unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUI@CAutoplayDeviceData@@QEAAJPEAUIAutoPlayUI@@@Z
    long SetUI(IAutoPlayUI *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoplayDeviceData@@EEAA@XZ
    virtual ~CAutoplayDeviceData();
};
