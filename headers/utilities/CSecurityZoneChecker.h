#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CSecurityZoneChecker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSecurityZoneChecker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSecurityZoneUrl@CSecurityZoneChecker@@UEAAJPEBGKKPEAUHWND__@@PEAUIUnknown@@PEAPEAUIInternetSecurityManager@@@Z
    virtual long CheckSecurityZoneUrl(unsigned short const *, unsigned long, unsigned long, HWND__*, IUnknown *, IInternetSecurityManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSecurityZoneChecker@@SAJAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSecurityZoneChecker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSecurityZoneChecker@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSecurityZoneDialog@CSecurityZoneChecker@@UEAAJKKPEBGPEAUHWND__@@PEAUIUnknown@@PEAH@Z
    virtual long ShowSecurityZoneDialog(unsigned long, unsigned long, unsigned short const *, HWND__*, IUnknown *, int *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSecurityZoneChecker@@AEAA@XZ
    CSecurityZoneChecker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendDisplayName@CSecurityZoneChecker@@CAJPEAUIShellItem@@PEBGAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z
    static long _AppendDisplayName(IShellItem *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckSecurityZonesStepOne@CSecurityZoneChecker@@AEAAJPEBGPEAUIShellItem@@KKAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@2PEAUIInternetHostSecurityManager@@PEAPEAUIInternetSecurityManager@@@Z
    long _CheckSecurityZonesStepOne(unsigned short const *, IShellItem *, unsigned long, unsigned long, WindissectOpaque &, WindissectOpaque &, IInternetHostSecurityManager *, IInternetSecurityManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckSecurityZonesStepTwo@CSecurityZoneChecker@@AEAAJKKAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@0PEAUHWND__@@PEAUIUnknown@@@Z
    long _CheckSecurityZonesStepTwo(unsigned long, unsigned long, WindissectOpaque &, WindissectOpaque &, HWND__*, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ZoneDialogCallBack@CSecurityZoneChecker@@CAJPEAUHWND__@@I_K_J2@Z
    static long _ZoneDialogCallBack(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
};
