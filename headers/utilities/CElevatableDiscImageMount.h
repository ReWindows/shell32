#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CElevatableDiscImageMount {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CElevatableDiscImageMount@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CElevatableDiscImageMount@@QEAA@XZ
    CElevatableDiscImageMount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Eject@CElevatableDiscImageMount@@UEAAJPEAUIShellItem@@K@Z
    virtual long Eject(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EjectByPath@CElevatableDiscImageMount@@UEAAJPEBG@Z
    virtual long EjectByPath(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Mount@CElevatableDiscImageMount@@UEAAJPEAUIShellItemArray@@HPEAKPEAUHWND__@@@Z
    virtual long Mount(IShellItemArray *, int, unsigned long *, HWND__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CElevatableDiscImageMount@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CElevatableDiscImageMount@@UEAAKXZ
    virtual unsigned long Release();
};
