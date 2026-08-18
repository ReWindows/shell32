#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CItemCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CItemCommand@@QEAA@XZ
    CItemCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CItemCommand@@UEAAJPEAUIInspectable@@@Z
    virtual long Execute(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CItemCommand@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetItem(IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CItemCommand@@QEAAJ_NPEAUIShellItem@@PEAUIContextMenu@@IPEBG33I@Z
    long RuntimeClassInitialize(bool, IShellItem *, IContextMenu *, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemCommand@@UEAA@XZ
    virtual ~CItemCommand();
};
