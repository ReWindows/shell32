#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CTransitionCscScopeOfflineTask {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransitionCscScopeOfflineTask@@UEAA@XZ
    virtual ~CTransitionCscScopeOfflineTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CoInitFlags@CTransitionCscScopeOfflineTask@@EEAAKXZ
    virtual unsigned long _CoInitFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Exec@CTransitionCscScopeOfflineTask@@EEAAJPEAVCCscUiComTaskContext@@@Z
    virtual long _Exec(CCscUiComTaskContext *);
};
