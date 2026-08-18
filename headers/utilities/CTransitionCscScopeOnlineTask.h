#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CTransitionCscScopeOnlineTask {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransitionCscScopeOnlineTask@@UEAA@XZ
    virtual ~CTransitionCscScopeOnlineTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CoInitFlags@CTransitionCscScopeOnlineTask@@EEAAKXZ
    virtual unsigned long _CoInitFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Exec@CTransitionCscScopeOnlineTask@@EEAAJPEAVCCscUiComTaskContext@@@Z
    virtual long _Exec(CCscUiComTaskContext *);
};
