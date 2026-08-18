#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CLibraryBaseRibbonCommand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLibraryBaseRibbonCommand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?EnumSubCommands@CLibraryBaseRibbonCommand@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CLibraryBaseRibbonCommand@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIcon@CLibraryBaseRibbonCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CLibraryBaseRibbonCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetToolTip@CLibraryBaseRibbonCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLibraryBaseRibbonCommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLibraryBaseRibbonCommand@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLibraryBaseRibbonCommand@@IEAA@XZ
    CLibraryBaseRibbonCommand();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLibraryBaseRibbonCommand@@MEAA@XZ
    virtual ~CLibraryBaseRibbonCommand();
};
