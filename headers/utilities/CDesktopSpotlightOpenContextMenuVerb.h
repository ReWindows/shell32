#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CDesktopSpotlightOpenContextMenuVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CDesktopSpotlightOpenContextMenuVerb@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CDesktopSpotlightOpenContextMenuVerb@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CDesktopSpotlightOpenContextMenuVerb@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIcon@CDesktopSpotlightOpenContextMenuVerb@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CDesktopSpotlightOpenContextMenuVerb@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CDesktopSpotlightOpenContextMenuVerb@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetToolTip@CDesktopSpotlightOpenContextMenuVerb@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDesktopSpotlightOpenContextMenuVerb@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDesktopSpotlightOpenContextMenuVerb@@UEAA@XZ
    virtual ~CDesktopSpotlightOpenContextMenuVerb();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPropertyBagFromDesktopSpotlightCLSIDRegistryAndUpdateFormCode@CDesktopSpotlightOpenContextMenuVerb@@AEAAJXZ
    long ReadPropertyBagFromDesktopSpotlightCLSIDRegistryAndUpdateFormCode();
};
