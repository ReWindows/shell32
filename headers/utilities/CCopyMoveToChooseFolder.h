#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
class CCopyMoveToChooseFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCopyMoveToChooseFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCopyMoveToChooseFolder@@QEAA@_N@Z
    CCopyMoveToChooseFolder(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CCopyMoveToChooseFolder@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CCopyMoveToChooseFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CCopyMoveToChooseFolder@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIcon@CCopyMoveToChooseFolder@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CCopyMoveToChooseFolder@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CCopyMoveToChooseFolder@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@CCopyMoveToChooseFolder@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CCopyMoveToChooseFolder@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCopyMoveToChooseFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCopyMoveToChooseFolder@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupContextMenu@CCopyMoveToChooseFolder@@AEAAJPEAUIShellItemArray@@PEAUIBindCtx@@PEAPEAUIContextMenu@@@Z
    long _SetupContextMenu(IShellItemArray *, IBindCtx *, IContextMenu * *);
};
