#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 36 member(s).
class CNewItemSubCommand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNewItemSubCommand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?CancelPreview@CNewItemSubCommand@@UEAAJPEAUIShellItemArray@@@Z
    virtual long CancelPreview(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CNewItemSubCommand@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CNewItemSubCommand@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDescription@CNewItemSubCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetDescription(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CNewItemSubCommand@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIcon@CNewItemSubCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconAsBitmap@CNewItemSubCommand@@UEAAJPEAUIShellItemArray@@UtagSIZE@@PEAPEAUHBITMAP__@@@Z
    virtual long GetIconAsBitmap(IShellItemArray *, tagSIZE, HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CNewItemSubCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTelemetryName@CNewItemSubCommand@@UEAAJPEAPEAG@Z
    virtual long GetTelemetryName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CNewItemSubCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetToolTip@CNewItemSubCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetToolTipTitle@CNewItemSubCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTipTitle(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CNewItemSubCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PE Export
    // Symbol: ?Preview@CNewItemSubCommand@@UEAAJPEAUIShellItemArray@@@Z
    virtual long Preview(IShellItemArray *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNewItemSubCommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNewItemSubCommand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CNewItemSubCommand@@SAJPEBDPEBGPEAUHBITMAP__@@_KAEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(char const *, unsigned short const *, HBITMAP__*, uint64_t, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNewItemSubCommand@@UEAA@XZ
    virtual ~CNewItemSubCommand();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNewItemSubCommand@@AEAA@XZ
    CNewItemSubCommand();
};
