#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CTaskLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchQueueItem@CTaskLock@@QEAA_NXZ
    bool DispatchQueueItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostItem@CTaskLock@@UEAAJPEAUIQueueItem2@@@Z
    virtual long PostItem(IQueueItem2*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskLock@@QEAAJXZ
    long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPostHwnd@CTaskLock@@QEAAXPEAUHWND__@@@Z
    void SetPostHwnd(HWND__*);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskLock@@MEAA@XZ
    virtual ~CTaskLock();
};
