#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CEraseEventHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEraseEventHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CEraseEventHandler@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CEraseEventHandler@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CEraseEventHandler@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CEraseEventHandler@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEraseEventHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEraseEventHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CEraseEventHandler@@UEAAJPEAUIDispatch@@JJ@Z
    virtual long Update(IDispatch *, long, long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEraseEventHandler@@EEAA@XZ
    virtual ~CEraseEventHandler();
};
