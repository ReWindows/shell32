#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class FavoritesTelemetry {
public:
    class Shell_Favorites_QueryLinksActivity;
    class Shell_Favorites_RibbonActivity;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@FavoritesTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shell_Favorites_AddItem_@FavoritesTelemetry@@QEBAXPEAUIShellItem@@@Z
    void Shell_Favorites_AddItem_(IShellItem *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shell_Favorites_DragInto_@FavoritesTelemetry@@QEBAXPEAUIShellItem@@J@Z
    void Shell_Favorites_DragInto_(IShellItem *, long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shell_Favorites_HomeFolder_DragInto_@FavoritesTelemetry@@QEBAXPEAUIDataObject@@@Z
    void Shell_Favorites_HomeFolder_DragInto_(IDataObject *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shell_Favorites_RibbonVerb_@FavoritesTelemetry@@QEBAXPEAUIShellItem@@_NH@Z
    void Shell_Favorites_RibbonVerb_(IShellItem *, bool, int) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FavoritesTelemetry@@MEAAXXZ
    virtual void Initialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHashedIdListFromDataObject@FavoritesTelemetry@@AEBAXPEAUIDataObject@@PEAG_K@Z
    void _GetHashedIdListFromDataObject(IDataObject *, unsigned short *, uint64_t) const;
};
