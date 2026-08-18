#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CSelectIconSizeCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPreview@CSelectIconSizeCommand@@UEAAJPEAUIShellItemArray@@@Z
    virtual long CancelPreview(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSelectIconSizeCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSelectIconSizeCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSelectIconSizeCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Preview@CSelectIconSizeCommand@@UEAAJPEAUIShellItemArray@@@Z
    virtual long Preview(IShellItemArray *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSelectIconSizeCommand@@UEAA@XZ
    virtual ~CSelectIconSizeCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FolderSupportsViewMode@CSelectIconSizeCommand@@AEAA_NXZ
    bool FolderSupportsViewMode();
};
