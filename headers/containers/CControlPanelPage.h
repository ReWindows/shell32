#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CControlPanelPage {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelPage@@QEAA@XZ
    CControlPanelPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CControlPanelPage@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PE Export
    // Symbol: ?LogCPLPerfTrackStopEvent@CControlPanelPage@@UEAAXXZ
    virtual void LogCPLPerfTrackStopEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CControlPanelPage@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CControlPanelPage@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAway@CControlPanelPage@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelPage@@UEAA@XZ
    virtual ~CControlPanelPage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetSearchTargetServices@CControlPanelPage@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetSearchTargetServices(_GUID const &, void * *);
};
