#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CTrackEvents {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTrackingEvents@CTrackEvents@@UEAAHXZ
    virtual int IsTrackingEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationEvent@CTrackEvents@@UEAAJPEBGW4TRACKOPERATIONTYPE@@W4TRACKOPERATIONEVENT@@@Z
    virtual long OperationEvent(unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetReadyEvent@CTrackEvents@@UEAAJXZ
    virtual long ResetReadyEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTimedOperation@CTrackEvents@@UEAAJXZ
    virtual long StartTimedOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimedOperation@CTrackEvents@@UEAAJPEAI@Z
    virtual long StopTimedOperation(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySuspendReadyEvent@CTrackEvents@@UEAAJXZ
    virtual long TrySuspendReadyEvent();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTrackEvents@@UEAA@XZ
    virtual ~CTrackEvents();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CompareOperationID@CTrackEvents@@CAHPEBUTRACKEDOPERATION@@0_J@Z
    static int s_CompareOperationID(TRACKEDOPERATION const *, TRACKEDOPERATION const *, int64_t);
};
