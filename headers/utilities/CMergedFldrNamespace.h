#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CMergedFldrNamespace {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropFolder@CMergedFldrNamespace@@QEAAPEBGXZ
    unsigned short const * GetDropFolder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@CMergedFldrNamespace@@QEAAJPEAGH@Z
    long GetLocation(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamespaceOverlayIndex@CMergedFldrNamespace@@QEAAHPEFBU_ITEMID_CHILD@@@Z
    int GetNamespaceOverlayIndex(_ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNamespace@CMergedFldrNamespace@@QEAAJPEAUIShellFolder2@@PEBU_GUID@@PEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@KI@Z
    long SetNamespace(IShellFolder2*, _GUID const *, IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, unsigned long, unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureReadPropertyBag@CMergedFldrNamespace@@IEAAXXZ
    void _EnsureReadPropertyBag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseNamespace@CMergedFldrNamespace@@IEAAXXZ
    void _ReleaseNamespace();
};
