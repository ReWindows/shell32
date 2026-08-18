#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CLibrarySimpleRibbonCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLibrarySimpleRibbonCommand@@QEAA@W4LIBRARY_SIMPLE_COMMAND_TYPE@@@Z
    CLibrarySimpleRibbonCommand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CLibrarySimpleRibbonCommand@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CLibrarySimpleRibbonCommand@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CLibrarySimpleRibbonCommand@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CLibrarySimpleRibbonCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CLibrarySimpleRibbonCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@CLibrarySimpleRibbonCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CLibrarySimpleRibbonCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLibrarySimpleRibbonCommand@@EEAA@XZ
    virtual ~CLibrarySimpleRibbonCommand();
};
