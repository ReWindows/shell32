#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CGetSupportStatusTask {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGetSupportStatusTask@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UpdateLocationSupportStatus@CGetSupportStatusTask@@SAKPEAX@Z
    static unsigned long s_UpdateLocationSupportStatus(void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InitSupportStatusProperty@CGetSupportStatusTask@@CAJPEAUILocationDescription@@PEAUIShellItem@@HPEAUtagPROPVARIANT@@@Z
    static long s_InitSupportStatusProperty(ILocationDescription *, IShellItem *, int, tagPROPVARIANT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGetSupportStatusTask@@AEAA@XZ
    ~CGetSupportStatusTask();
};
