#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
class CExplorerCommandBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExplorerCommandBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExplorerCommandBase@@QEAA@AEBU_GUID@@IIQEBGIKKI@Z
    CExplorerCommandBase(_GUID const &, unsigned int, unsigned int, unsigned short const * const, unsigned int, unsigned long, unsigned long, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?CancelPreview@CExplorerCommandBase@@UEAAJPEAUIShellItemArray@@@Z
    virtual long CancelPreview(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CExplorerCommandBase@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CExplorerCommandBase@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDescription@CExplorerCommandBase@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetDescription(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CExplorerCommandBase@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CExplorerCommandBase@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIconAsBitmap@CExplorerCommandBase@@UEAAJPEAUIShellItemArray@@UtagSIZE@@PEAPEAUHBITMAP__@@@Z
    virtual long GetIconAsBitmap(IShellItemArray *, tagSIZE, HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CExplorerCommandBase@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CExplorerCommandBase@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@CExplorerCommandBase@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTipTitle@CExplorerCommandBase@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTipTitle(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Invoke@CExplorerCommandBase@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PE Export
    // Symbol: ?Preview@CExplorerCommandBase@@UEAAJPEAUIShellItemArray@@@Z
    virtual long Preview(IShellItemArray *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExplorerCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExplorerCommandBase@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExplorerCommandBase@@MEAA@XZ
    virtual ~CExplorerCommandBase();
};
