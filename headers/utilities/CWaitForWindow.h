#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CWaitForWindow {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWaitForWindow@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUp@CWaitForWindow@@QEAAXXZ
    void CleanUp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIDsOfNames@CWaitForWindow@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfo@CWaitForWindow@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfoCount@CWaitForWindow@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CWaitForWindow@@QEAAJPEAUIShellWindows@@@Z
    long Init(IShellWindows *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CWaitForWindow@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWaitForWindow@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWaitForWindow@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForWindowToOpen@CWaitForWindow@@QEAAJK@Z
    long WaitForWindowToOpen(unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWaitForWindow@@AEAA@XZ
    ~CWaitForWindow();
};
