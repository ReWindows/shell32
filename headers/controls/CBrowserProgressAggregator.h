#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 35 member(s).
class CBrowserProgressAggregator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSession@CBrowserProgressAggregator@@UEAAJK@Z
    virtual long ActivateSession(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBrowserProgressAggregator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSession@CBrowserProgressAggregator@@UEAAJPEAK@Z
    virtual long BeginSession(unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrowserProgressAggregator@@QEAA@XZ
    CBrowserProgressAggregator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelInform@CBrowserProgressAggregator@@QEAAJAEBU_GUID@@@Z
    long CancelInform(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelProgressUI@CBrowserProgressAggregator@@QEAAJXZ
    long CancelProgressUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndSession@CBrowserProgressAggregator@@UEAAJK@Z
    virtual long EndSession(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentSession@CBrowserProgressAggregator@@UEAAJPEAK@Z
    virtual long GetCurrentSession(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Inform@CBrowserProgressAggregator@@QEAAJPEAUIInfoBarMessage@@@Z
    long Inform(IInfoBarMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBrowserProgressAggregator@@UEAAJPEAUHWND__@@IPEAUIUnknown@@@Z
    virtual long Initialize(HWND__*, unsigned int, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentSession@CBrowserProgressAggregator@@QEAAJKPEAH@Z
    long IsCurrentSession(unsigned long, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBrowserProgressAggregator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CBrowserProgressAggregator@@QEAAJAEBU_GUID@@PEAK@Z
    long Register(_GUID const &, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBrowserProgressAggregator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CBrowserProgressAggregator@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CBrowserProgressAggregator@@QEAAJAEBU_GUID@@K@Z
    long Unregister(_GUID const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProgress@CBrowserProgressAggregator@@QEAAJAEBU_GUID@@KKK@Z
    long UpdateProgress(_GUID const &, unsigned long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateState@CBrowserProgressAggregator@@QEAAJAEBU_GUID@@KW4tagBPASCODE@@@Z
    long UpdateState(_GUID const &, unsigned long, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearProgressData@CBrowserProgressAggregator@@AEAAXXZ
    void _ClearProgressData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInfoBarsPosted@CBrowserProgressAggregator@@AEAAXXZ
    void _EnsureInfoBarsPosted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindIndex@CBrowserProgressAggregator@@AEAAHAEBU_GUID@@K@Z
    int _FindIndex(_GUID const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IncrementOnTimer@CBrowserProgressAggregator@@AEAAXPEAUPROGRESS_DATA@@@Z
    void _IncrementOnTimer(PROGRESS_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetInform@CBrowserProgressAggregator@@AEAAXXZ
    void _ResetInform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetProgress@CBrowserProgressAggregator@@AEAAXXZ
    void _ResetProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetProgressOnSessionChange@CBrowserProgressAggregator@@AEAAXXZ
    void _ResetProgressOnSessionChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartOrStopTimer@CBrowserProgressAggregator@@AEAAXXZ
    void _StartOrStopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInfoBars@CBrowserProgressAggregator@@AEAAXPEAV?$CDSA@U_GUID@@@@PEAV?$CDPA@UIInfoBarMessage@@V?$CTContainer_PolicyUnOwned@UIInfoBarMessage@@@@@@@Z
    void _UpdateInfoBars(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTarget@CBrowserProgressAggregator@@AEAAXPEAV?$CDSA@U_GUID@@@@PEAV?$CDPA@UIInfoBarMessage@@V?$CTContainer_PolicyUnOwned@UIInfoBarMessage@@@@@@@Z
    void _UpdateTarget(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CBrowserProgressAggregator@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBrowserProgressAggregator@@EEAA@XZ
    virtual ~CBrowserProgressAggregator();
};
