#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 45 member(s).
class CControlPanelCategoryFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CControlPanelCategoryFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CControlPanelCategoryFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CControlPanelCategoryFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CControlPanelCategoryFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIDList@CControlPanelCategoryFolder@@SAJKPEAPEAU_ITEMID_CHILD@@@Z
    static long CreateIDList(unsigned long, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CControlPanelCategoryFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CControlPanelCategoryFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CControlPanelCategoryFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CControlPanelCategoryFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CControlPanelCategoryFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CControlPanelCategoryFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultColumn@CControlPanelCategoryFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CControlPanelCategoryFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CControlPanelCategoryFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CControlPanelCategoryFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CControlPanelCategoryFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CControlPanelCategoryFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CControlPanelCategoryFolder@@UEAAJPEAW4SEARCHBOX_FLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderType@CControlPanelCategoryFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetFolderType(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMRULocation@CControlPanelCategoryFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetMRULocation(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneState@CControlPanelCategoryFolder@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetPaneState(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestPopupSetting@CControlPanelCategoryFolder@@UEAAJPEAW4SEARCH_BOX_SUGGEST_POPUP_SETTING@@@Z
    virtual long GetSuggestPopupSetting(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimerDelay@CControlPanelCategoryFolder@@UEAAJPEAI@Z
    virtual long GetTimerDelay(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CControlPanelCategoryFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CControlPanelCategoryFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CControlPanelCategoryFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@CControlPanelCategoryFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CControlPanelCategoryFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CControlPanelCategoryFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CControlPanelCategoryFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCategoryIcon@CControlPanelCategoryFolder@@AEAAJW4tagCPCAT@@AEBU_GUID@@PEAPEAX@Z
    long _GetCategoryIcon(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsValidCategoryPidl@CControlPanelCategoryFolder@@AEAAPEFAUCPCATIDL@@PEFBU_ITEMIDLIST_RELATIVE@@@Z
    CPCATIDL & const * _IsValidCategoryPidl(_ITEMIDLIST_RELATIVE & volatile *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelCategoryFolder@@AEAA@XZ
    ~CControlPanelCategoryFolder();
};
