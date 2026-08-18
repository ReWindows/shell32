#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CTryHarderFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTryHarderFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTryHarderFactory@@QEAA@XZ
    CTryHarderFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTryHarderFactory@@UEAAJPEAUIShellItem@@PEBG@Z
    virtual long Init(IShellItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetTryHarderItems@CTryHarderFactory@@UEAAJW4TRYHARDERFACTORYFLAGS@@HAEBU_GUID@@PEAPEAX@Z
    virtual long OnGetTryHarderItems(int, int, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTryHarderFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTryHarderFactory@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPinnedItemHelper@CTryHarderFactory@@AEAAJPEBG0PEAUIObjectCollection@@PEAH@Z
    long _AddPinnedItemHelper(unsigned short const *, unsigned short const *, IObjectCollection *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderPinnedLibrary@CTryHarderFactory@@AEAAJPEAUIObjectCollection@@HPEAH@Z
    long _AddTryHarderPinnedLibrary(IObjectCollection *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderPinnedOpenSearch@CTryHarderFactory@@AEAAJPEAUIObjectCollection@@HH@Z
    long _AddTryHarderPinnedOpenSearch(IObjectCollection *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLocationName@CTryHarderFactory@@AEAAXPEAPEAG@Z
    void _GetLocationName(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNameFromDBFolder@CTryHarderFactory@@AEAAXPEAUIShellFolder3@@PEAPEAG@Z
    void _GetNameFromDBFolder(IShellFolder3*, unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTryHarderFactory@@AEAA@XZ
    ~CTryHarderFactory();
};
