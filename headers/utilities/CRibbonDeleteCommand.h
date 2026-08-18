#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
class CRibbonDeleteCommand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRibbonDeleteCommand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRibbonDeleteCommand@@QEAA@W4RIBBON_DELETE_COMMAND_TYPE@@@Z
    CRibbonDeleteCommand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CRibbonDeleteCommand@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CRibbonDeleteCommand@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CRibbonDeleteCommand@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIcon@CRibbonDeleteCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CRibbonDeleteCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CRibbonDeleteCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@CRibbonDeleteCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CRibbonDeleteCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRibbonDeleteCommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRibbonDeleteCommand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRibbonDeleteCommand@@UEAA@XZ
    virtual ~CRibbonDeleteCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanDelete@CRibbonDeleteCommand@@AEAAJPEAUIShellItemArray@@@Z
    long _CanDelete(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanRecycle@CRibbonDeleteCommand@@AEAAJPEAUIShellItemArray@@@Z
    long _CanRecycle(IShellItemArray *);
};
