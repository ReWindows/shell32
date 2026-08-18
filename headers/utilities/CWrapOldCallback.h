#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CWrapOldCallback {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWrapOldCallback@@QEAA@PEAU_CSFV@@@Z
    CWrapOldCallback(_CSFV *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CWrapOldCallback@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CWrapOldCallback@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWrapOldCallback@@EEAA@XZ
    virtual ~CWrapOldCallback();
};
