#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CTryHarderItemCustom {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTryHarderItemCustom@@QEAAJPEAUHWND__@@PEBU_ITEMIDLIST_ABSOLUTE@@I@Z
    long Init(HWND__*, _ITEMIDLIST_ABSOLUTE const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@CTryHarderItemCustom@@UEAAJPEAUIUnknown@@@Z
    virtual long OnInvoke(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NewScopeFromScopeDialog@CTryHarderItemCustom@@AEAAJPEAPEAUIScope@@PEAPEAUIShellItemArray@@@Z
    long _NewScopeFromScopeDialog(IScope * *, IShellItemArray * *);
};
