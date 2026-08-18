#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
class COpenWithUICommand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COpenWithUICommand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COpenWithUICommand@@QEAA@PEAUIUnknown@@PEAVCSimpleTaskItem@@HPEBG@Z
    COpenWithUICommand(IUnknown *, CSimpleTaskItem *, int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenWithTypeOverride@COpenWithUICommand@@UEAAJPEAPEAG@Z
    virtual long GetOpenWithTypeOverride(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@COpenWithUICommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COpenWithUICommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@COpenWithUICommand@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COpenWithUICommand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenWithUICommand@@UEAA@XZ
    virtual ~COpenWithUICommand();
};
