#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CPerfTrackProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPerfTrackProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPerfTrackProvider@@QEAA@PEAUIBrowserTrackEventsCallback@@@Z
    CPerfTrackProvider(IBrowserTrackEventsCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationEvent@CPerfTrackProvider@@UEAAJPEBGW4TRACKOPERATIONTYPE@@W4TRACKOPERATIONEVENT@@@Z
    virtual long OperationEvent(unsigned short const *, int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPerfTrackProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPerfTrackProvider@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExplorerReadyCallback@CPerfTrackProvider@@QEAAXPEAUHWND__@@I@Z
    void SetExplorerReadyCallback(HWND__*, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemCount@CPerfTrackProvider@@UEAAJI@Z
    virtual long SetItemCount(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetProviderAttributes@CPerfTrackProvider@@UEAAJW4PROVIDER_ATTRIBUTES@@@Z
    virtual long SetProviderAttributes(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendPerfInfo@CPerfTrackProvider@@EEAAXXZ
    virtual void _SendPerfInfo();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPerfTrackProvider@@EEAA@XZ
    virtual ~CPerfTrackProvider();
};
