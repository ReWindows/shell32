#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 21 member(s).
class CTryHarderItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTryHarderItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTryHarderItem@@QEAA@XZ
    CTryHarderItem();
    // Category: Method | Source: PE Export
    // Symbol: ?Cancel@CTryHarderItem@@UEAAJXZ
    virtual long Cancel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@CTryHarderItem@@UEAAJPEAPEAG@Z
    virtual long GetDisplayName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameAlt@CTryHarderItem@@UEAAJPEAPEAG@Z
    virtual long GetDisplayNameAlt(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CTryHarderItem@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconIndex@CTryHarderItem@@UEAAJPEAI@Z
    virtual long GetIconIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScope@CTryHarderItem@@UEAAJPEAW4TRYHARDERSCOPES@@@Z
    virtual long GetScope(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTooltip@CTryHarderItem@@UEAAJPEAPEAG@Z
    virtual long GetTooltip(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTryHarderItem@@QEAAJW4TRYHARDERSCOPES@@IPEBG11PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long Init(int, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@CTryHarderItem@@UEAAJPEAUIUnknown@@@Z
    virtual long OnInvoke(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTryHarderItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTryHarderItem@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserFlags@CTryHarderItem@@IEAAKPEAUIUnknown@@@Z
    unsigned long GetBrowserFlags(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTryHarderItem@@MEAA@XZ
    virtual ~CTryHarderItem();
};
