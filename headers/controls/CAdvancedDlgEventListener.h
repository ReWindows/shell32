#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CAdvancedDlgEventListener {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAdvancedDlgEventListener@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingSet@CAdvancedDlgEventListener@@UEAAXK@Z
    virtual void OnSettingSet(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAdvancedDlgEventListener@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAdvancedDlgEventListener@@UEAAKXZ
    virtual unsigned long Release();
};
