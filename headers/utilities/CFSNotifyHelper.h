#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CFSNotifyHelper {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckForReNavigateOrClose@CFSNotifyHelper@@IEAAJPEAUIUnknown@@JPEBU_ITEMIDLIST_ABSOLUTE@@1@Z
    long _CheckForReNavigateOrClose(IUnknown *, long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnRegisterFSNotify@CFSNotifyHelper@@IEAAXXZ
    void _UnRegisterFSNotify();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFSNotifyHelper@@MEAA@XZ
    virtual ~CFSNotifyHelper();
};
