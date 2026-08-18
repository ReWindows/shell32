#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CInfoBarManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInfoBarManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInfoBarManager@@QEAA@XZ
    CInfoBarManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableInfoBar@CInfoBarManager@@UEAAJPEBG@Z
    virtual long DisableInfoBar(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableAllInfoBars@CInfoBarManager@@UEAAJXZ
    virtual long EnableAllInfoBars();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInfoBarEnabled@CInfoBarManager@@UEAAJPEBG@Z
    virtual long IsInfoBarEnabled(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInfoBarManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInfoBarManager@@UEAAKXZ
    virtual unsigned long Release();
};
