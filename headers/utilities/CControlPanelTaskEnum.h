#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CControlPanelTaskEnum {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CControlPanelTaskEnum@@QEAAXXZ
    void Destroy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelTaskEnum@@QEAA@XZ
    ~CControlPanelTaskEnum();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyTaskCB@CControlPanelTaskEnum@@CAHPEAUCONTROLPANELTASK@@PEAX@Z
    static int _DestroyTaskCB(CONTROLPANELTASK *, void *);
};
