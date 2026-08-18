#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CSyncCommandState {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSyncCommandState@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSyncCommandState@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSyncState@CSyncCommandState@@AEAAJPEAUIUnknown@@PEAK@Z
    long _GetSyncState(IUnknown *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSyncStateOfMultiLocations@CSyncCommandState@@AEAAJPEAUIShellItemArray@@KPEAK@Z
    long _GetSyncStateOfMultiLocations(IShellItemArray *, unsigned long, unsigned long *);
};
