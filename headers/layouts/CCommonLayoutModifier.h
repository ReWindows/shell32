#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CCommonLayoutModifier {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCommonLayoutModifier@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustLayout@CCommonLayoutModifier@@UEAAJPEAUIUnknown@@PEAPEAU2@@Z
    virtual long AdjustLayout(IUnknown *, IUnknown * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommonLayoutModifier@@QEAA@XZ
    CCommonLayoutModifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseBrowserLayout@CCommonLayoutModifier@@UEAAJW4BROWSERLAYOUTTYPE@@@Z
    virtual long ChooseBrowserLayout(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCommonLayoutModifier@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCommonLayoutModifier@@UEAAKXZ
    virtual unsigned long Release();
};
