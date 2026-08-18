#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
class SyncProviderRecycleBinLinks {
public:
    class ElementData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SyncProviderRecycleBinLinks@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@SyncProviderRecycleBinLinks@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@SyncProviderRecycleBinLinks@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@SyncProviderRecycleBinLinks@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SyncProviderRecycleBinLinks@@QEAA@XZ
    SyncProviderRecycleBinLinks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLocation@SyncProviderRecycleBinLinks@@QEAAJPEAUIShellFolder@@@Z
    long UpdateLocation(IShellFolder *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SyncProviderRecycleBinLinks@@UEAA@XZ
    virtual ~SyncProviderRecycleBinLinks();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColors@SyncProviderRecycleBinLinks@@AEAAXXZ
    void SetColors();
};
