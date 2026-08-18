#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class NavigateAsyncStateMachine {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@NavigateAsyncStateMachine@@QEAAXXZ
    void Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fail@NavigateAsyncStateMachine@@QEAAXXZ
    void Fail();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPending@NavigateAsyncStateMachine@@QEBA_NXZ
    bool IsPending() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryComplete@NavigateAsyncStateMachine@@QEAA_NXZ
    bool TryComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPost@NavigateAsyncStateMachine@@QEAA_NPEAUHWND__@@I@Z
    bool TryPost(HWND__*, unsigned int);
};
