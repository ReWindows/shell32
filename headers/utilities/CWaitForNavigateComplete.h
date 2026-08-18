#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CWaitForNavigateComplete {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWaitForNavigateComplete@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@CWaitForNavigateComplete@@QEAAJHPEAUIShellBrowser@@@Z
    long Connect(int, IShellBrowser *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIDsOfNames@CWaitForNavigateComplete@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfo@CWaitForNavigateComplete@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfoCount@CWaitForNavigateComplete@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CWaitForNavigateComplete@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationComplete@CWaitForNavigateComplete@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long OnNavigationComplete(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationFailed@CWaitForNavigateComplete@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long OnNavigationFailed(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNavigationPending@CWaitForNavigateComplete@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long OnNavigationPending(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnViewCreated@CWaitForNavigateComplete@@UEAAJPEAUIShellView@@@Z
    virtual long OnViewCreated(IShellView *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWaitForNavigateComplete@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWaitForNavigateComplete@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWaitForNavigateComplete@@QEAA@XZ
    ~CWaitForNavigateComplete();
};
