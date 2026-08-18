#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 34 member(s).
class CDiscImageMountVerb {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDiscImageMountVerb@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CDiscImageMountVerb@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CDiscImageMountVerb@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CDiscImageMountVerb@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CDiscImageMountVerb@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CDiscImageMountVerb@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CDiscImageMountVerb@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CDiscImageMountVerb@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@CDiscImageMountVerb@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDiscImageMountVerb@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDiscImageMountVerb@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDiscImageMountVerb@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlternativeTrustFile@CDiscImageMountVerb@@UEAAJPEBG@Z
    virtual long SetAlternativeTrustFile(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDiscImageMountVerb@@UEAA@XZ
    virtual ~CDiscImageMountVerb();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSmartScreen@CDiscImageMountVerb@@AEAAJI@Z
    long CheckSmartScreen(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CDiscImageMountVerb@@AEAAJPEAUIShellItemArray@@@Z
    long InvokeCommand(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommandAsync@CDiscImageMountVerb@@AEAAJPEAUIShellItemArray@@@Z
    long InvokeCommandAsync(IShellItemArray *);
};
