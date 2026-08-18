#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 96 member(s).
class CCommonPlaceFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCommonPlaceFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CCommonPlaceFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CCommonPlaceFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommonPlaceFolder@@QEAA@XZ
    CCommonPlaceFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CCommonPlaceFolder@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    virtual long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CCommonPlaceFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateNewIDList@CCommonPlaceFolder@@UEAAJPEBGPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU_ITEMID_CHILD@@@Z
    virtual long CreateNewIDList(unsigned short const *, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CCommonPlaceFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CCommonPlaceFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CCommonPlaceFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CCommonPlaceFolder@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAttributesOf@CCommonPlaceFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCanonicalName@CCommonPlaceFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CCommonPlaceFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CCommonPlaceFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumn@CCommonPlaceFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CCommonPlaceFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CCommonPlaceFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CCommonPlaceFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CCommonPlaceFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDisplayNameOf@CCommonPlaceFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CCommonPlaceFolder@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CCommonPlaceFolder@@UEAAJPEAW4SEARCHBOX_FLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIcon@CCommonPlaceFolder@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMRULocation@CCommonPlaceFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetMRULocation(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationOptions@CCommonPlaceFolder@@UEAAJPEAW4NAVIGATIONOPTIONS@@@Z
    virtual long GetNavigationOptions(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneState@CCommonPlaceFolder@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetPaneState(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertiesToApply@CCommonPlaceFolder@@UEAAJPEAUIPropertyStore@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertiesToApply(IPropertyStore *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealLocations@CCommonPlaceFolder@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetRealLocations(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CCommonPlaceFolder@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSuggestPopupSetting@CCommonPlaceFolder@@UEAAJPEAW4SEARCH_BOX_SUGGEST_POPUP_SETTING@@@Z
    virtual long GetSuggestPopupSetting(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTimerDelay@CCommonPlaceFolder@@UEAAJPEAI@Z
    virtual long GetTimerDelay(unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTitle@CCommonPlaceFolder@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetToolTip@CCommonPlaceFolder@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CCommonPlaceFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCommonPlaceFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CCommonPlaceFolder@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTypeSupported@CCommonPlaceFolder@@UEAAJPEBG@Z
    virtual long IsTypeSupported(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CCommonPlaceFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnBindToObject@CCommonPlaceFolder@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long OnBindToObject(IShellFolder *, _ITEMID_CHILD & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCreateViewObject@CCommonPlaceFolder@@UEAAJPEAUIShellFolder@@PEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long OnCreateViewObject(IShellFolder *, HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetAttributesOf@CCommonPlaceFolder@@UEAAJPEAUIShellFolder@@IPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long OnGetAttributesOf(IShellFolder *, unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetDetailsEx@CCommonPlaceFolder@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long OnGetDetailsEx(IShellFolder *, _ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetDisplayNameOf@CCommonPlaceFolder@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KPEAGH@Z
    virtual long OnGetDisplayNameOf(IShellFolder *, _ITEMID_CHILD & volatile *, unsigned long, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetUIObjectOf@CCommonPlaceFolder@@UEAAJPEAUIShellFolder@@PEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    virtual long OnGetUIObjectOf(IShellFolder *, HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnParseDisplayName@CCommonPlaceFolder@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIBindCtx@@PEAGPEAPEAU_ITEMIDLIST_RELATIVE@@PEAK@Z
    virtual long OnParseDisplayName(IShellFolder *, HWND__*, IBindCtx *, unsigned short *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseDisplayName@CCommonPlaceFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCommonPlaceFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCommonPlaceFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CCommonPlaceFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItem@CCommonPlaceFolder@@CAJPEAUIShellItem@@@Z
    static long _AddItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanAddFavoriteInBrowser@CCommonPlaceFolder@@AEAA_NXZ
    bool _CanAddFavoriteInBrowser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteQueryResults@CCommonPlaceFolder@@CAJPEAUIItemCollection@@II@Z
    static long _DeleteQueryResults(IItemCollection *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueryLinks@CCommonPlaceFolder@@CAJPEAUIShellItem@@PEAPEAUIItemCollection@@@Z
    static long _QueryLinks(IShellItem *, IItemCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InternalQueryInterface@CCommonPlaceFolder@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_InternalQueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommonPlaceFolder@@EEAA@XZ
    virtual ~CCommonPlaceFolder();
};
