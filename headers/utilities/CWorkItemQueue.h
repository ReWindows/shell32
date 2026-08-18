#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CWorkItemQueue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Queue@CWorkItemQueue@@QEAAXPEAU_tagWORKITEMCALLBACKPARAM@@@Z
    void Queue(_tagWORKITEMCALLBACKPARAM *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWorkItemQueue@@QEAAKXZ
    unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueuedWorkItemCallback@CWorkItemQueue@@AEAAJXZ
    long _QueuedWorkItemCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_QueuedWorkItemCallback@CWorkItemQueue@@CAKPEAX@Z
    static unsigned long s_QueuedWorkItemCallback(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWorkItemQueue@@AEAA@XZ
    ~CWorkItemQueue();
};
