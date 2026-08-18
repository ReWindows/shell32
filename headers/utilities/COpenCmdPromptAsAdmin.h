#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class COpenCmdPromptAsAdmin {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COpenCmdPromptAsAdmin@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COpenCmdPromptAsAdmin@@QEAA@XZ
    COpenCmdPromptAsAdmin();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@COpenCmdPromptAsAdmin@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@COpenCmdPromptAsAdmin@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@COpenCmdPromptAsAdmin@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COpenCmdPromptAsAdmin@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COpenCmdPromptAsAdmin@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenCmdPromptAsAdmin@@UEAA@XZ
    virtual ~COpenCmdPromptAsAdmin();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCmdApplicationAndParams@COpenCmdPromptAsAdmin@@AEAAJPEAUIShellItem@@PEAPEAG1@Z
    long _GetCmdApplicationAndParams(IShellItem *, unsigned short * *, unsigned short * *);
};
