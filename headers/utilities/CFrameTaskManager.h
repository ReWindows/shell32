#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CFrameTaskManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFrameTaskManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelAllWorkItems@CFrameTaskManager@@UEAAJXZ
    virtual long CancelAllWorkItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchCompletedWorkItems@CFrameTaskManager@@UEAAJXZ
    virtual long DispatchCompletedWorkItems();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFrameTaskManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFrameTaskManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CFrameTaskManager@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWorkItem@CFrameTaskManager@@UEAAJPEAUIFrameWorkItem@@AEBU_GUID@@H@Z
    virtual long StartWorkItem(IFrameWorkItem *, _GUID const &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTaskScheduler@CFrameTaskManager@@AEAAJXZ
    long _EnsureTaskScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DispatchWorkItem@CFrameTaskManager@@CAHPEAUIFrameWorkItem@@PEAX@Z
    static int s_DispatchWorkItem(IFrameWorkItem *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ReleaseWorkItemEntryCB@CFrameTaskManager@@CAHPEAUWORKITEMENTRY@@PEAX@Z
    static int s_ReleaseWorkItemEntryCB(WORKITEMENTRY *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFrameTaskManager@@EEAA@XZ
    virtual ~CFrameTaskManager();
};
