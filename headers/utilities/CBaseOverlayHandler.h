#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CBaseOverlayHandler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayInfo@CBaseOverlayHandler@@UEAAJPEAGHPEAHPEAK@Z
    virtual long GetOverlayInfo(unsigned short *, int, int *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriority@CBaseOverlayHandler@@UEAAJPEAH@Z
    virtual long GetPriority(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMemberOf@CBaseOverlayHandler@@UEAAJPEBGK@Z
    virtual long IsMemberOf(unsigned short const *, unsigned long);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBaseOverlayHandler@@MEAA@XZ
    virtual ~CBaseOverlayHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemStatus@CBaseOverlayHandler@@AEAAJPEAUIShellItem@@PEAW4ItemSyncStatus@@@Z
    long _GetItemStatus(IShellItem *, int *);
};
