#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CLocationFolderUI {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?BindToObject@CLocationFolderUI@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?BindToStorage@CLocationFolderUI@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CompareIDs@CLocationFolderUI@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateViewObject@CLocationFolderUI@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?EnumObjects@CLocationFolderUI@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAttributesOf@CLocationFolderUI@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDisplayNameOf@CLocationFolderUI@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CLocationFolderUI@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseDisplayName@CLocationFolderUI@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetNameOf@CLocationFolderUI@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLocationFolderUI@@UEAA@XZ
    virtual ~CLocationFolderUI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDataObject@CLocationFolderUI@@AEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    long _GetDataObject(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleContextMenu@CLocationFolderUI@@AEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    long _HandleContextMenu(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, void * *);
};
