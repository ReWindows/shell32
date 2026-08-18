#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CUsersLibrariesFolderUI {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?BindToObject@CUsersLibrariesFolderUI@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?BindToStorage@CUsersLibrariesFolderUI@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CompareIDs@CUsersLibrariesFolderUI@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CUsersLibrariesFolderUI@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?EnumObjects@CUsersLibrariesFolderUI@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAttributesOf@CUsersLibrariesFolderUI@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDisplayNameOf@CUsersLibrariesFolderUI@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetUIObjectOf@CUsersLibrariesFolderUI@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseDisplayName@CUsersLibrariesFolderUI@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CUsersLibrariesFolderUI@@QEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long RuntimeClassInitialize(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetNameOf@CUsersLibrariesFolderUI@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUsersLibrariesFolderUI@@UEAA@XZ
    virtual ~CUsersLibrariesFolderUI();
};
