#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 121 member(s).
class CPublishedItemsFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPublishedItemsFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CPublishedItemsFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CPublishedItemsFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPublishedItemsFolder@@QEAA@XZ
    CPublishedItemsFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CPublishedItemsFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateItemFromData@CPublishedItemsFolder@@QEAAJPEAUIPublishedItemDescription@@W4FOLDER_ENUM_MODE@@PEAPEAU_ITEMID_CHILD@@@Z
    long CreateItemFromData(IPublishedItemDescription *, int, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CPublishedItemsFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CPublishedItemsFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CPublishedItemsFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CPublishedItemsFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CPublishedItemsFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CPublishedItemsFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumn@CPublishedItemsFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CPublishedItemsFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CPublishedItemsFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CPublishedItemsFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CPublishedItemsFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CPublishedItemsFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderCapabilities@CPublishedItemsFolder@@UEAAJW4NSTCFOLDERCAPABILITIES@@PEAW42@@Z
    virtual long GetFolderCapabilities(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderType@CPublishedItemsFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetFolderType(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFrameLayoutDefinition@CPublishedItemsFolder@@UEAAJW4GETLAYOUTREASON@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetFrameLayoutDefinition(int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconOf@CPublishedItemsFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAH@Z
    virtual long GetIconOf(_ITEMID_CHILD & volatile *, unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneState@CPublishedItemsFolder@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetPaneState(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentAndItem@CPublishedItemsFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@PEAPEAUIShellFolder@@PEAPEAU_ITEMID_CHILD@@@Z
    virtual long GetParentAndItem(_ITEMIDLIST_ABSOLUTE * *, IShellFolder * *, _ITEMID_CHILD * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealLocations@CPublishedItemsFolder@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetRealLocations(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScopeAndSubQueries@CPublishedItemsFolder@@UEAAJW4SCOPE_ITEM_DEPTH@@W4SCOPE_ITEM_FLAGS@@PEAPEAUIScope@@PEAPEAUIShellItemArray@@@Z
    virtual long GetScopeAndSubQueries(int, int, IScope * *, IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchRoot@CPublishedItemsFolder@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetSearchRoot(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailHandler@CPublishedItemsFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetThumbnailHandler(_ITEMID_CHILD & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CPublishedItemsFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserFilesDescription@CPublishedItemsFolder@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetUserFilesDescription(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPublishedItemsFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CPublishedItemsFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@CPublishedItemsFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPublishedItemsFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CPublishedItemsFolder@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPublishedItemsFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CPublishedItemsFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetParentAndItem@CPublishedItemsFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long SetParentAndItem(_ITEMIDLIST_ABSOLUTE const *, IShellFolder *, _ITEMID_CHILD & volatile *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareFolderness@CPublishedItemsFolder@@AEAAJPEAUIShellItem@@0@Z
    long _CompareFolderness(IShellItem *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateItemId@CPublishedItemsFolder@@AEAAJPEAUIPropertyStore@@W4FOLDER_ENUM_MODE@@PEAPEAU_ITEMID_CHILD@@@Z
    long _CreateItemId(IPropertyStore *, int, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateItemPropertyStore@CPublishedItemsFolder@@AEAAJPEAUIPublishedItemDescription@@PEAPEAUIPropertyStore@@@Z
    long _CreateItemPropertyStore(IPublishedItemDescription *, IPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureMetadataList@CPublishedItemsFolder@@AEAAJXZ
    long _EnsureMetadataList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSelfItem@CPublishedItemsFolder@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _EnsureSelfItem(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAttributes@CPublishedItemsFolder@@AEAAJPEFBU_ITEMID_CHILD@@KPEAK@Z
    long _GetAttributes(_ITEMID_CHILD & volatile *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEnumModeForItem@CPublishedItemsFolder@@AEAA?AW4FOLDER_ENUM_MODE@@PEFBU_ITEMIDLIST_RELATIVE@@@Z
    int _GetEnumModeForItem(_ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemFromPropStore@CPublishedItemsFolder@@AEAAJPEAUINamedPropertyStore@@AEBU_GUID@@PEAPEAX@Z
    long _GetItemFromPropStore(INamedPropertyStore *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropVariantForItem@CPublishedItemsFolder@@AEAAJPEAUIShellItem@@PEAUtagPROPVARIANT@@@Z
    long _GetPropVariantForItem(IShellItem *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyForItem@CPublishedItemsFolder@@AEAAJPEFBU_ITEMID_CHILD@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    long _GetPropertyForItem(_ITEMID_CHILD & volatile *, _tagpropertykey const &, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTargetItemForIDList@CPublishedItemsFolder@@AEAAJPEFBU_ITEMIDLIST_RELATIVE@@AEBU_GUID@@PEAPEAX@Z
    long _GetTargetItemForIDList(_ITEMIDLIST_RELATIVE & volatile *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCurrentUser@CPublishedItemsFolder@@AEAA_NXZ
    bool _IsCurrentUser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ItemHasNavigationEnum@CPublishedItemsFolder@@AEAAHPEAUIPropertyStore@@@Z
    int _ItemHasNavigationEnum(IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RelocateItem@CPublishedItemsFolder@@AEAAJPEAUIUnknown@@PEBU_ITEMID_CHILD@@@Z
    long _RelocateItem(IUnknown *, _ITEMID_CHILD const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Validate@CPublishedItemsFolder@@AEAAJXZ
    long _Validate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_BindToObject@CPublishedItemsFolder@@EEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long v_BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CreateViewObject@CPublishedItemsFolder@@EEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long v_CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetAttributesOf@CPublishedItemsFolder@@EEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long v_GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetDetailsEx@CPublishedItemsFolder@@EEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long v_GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetDisplayNameOf@CPublishedItemsFolder@@EEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long v_GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetFolderIdList@CPublishedItemsFolder@@EEAAPEBU_ITEMIDLIST_ABSOLUTE@@XZ
    virtual _ITEMIDLIST_ABSOLUTE const * v_GetFolderIdList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetTargetParentAndItem@CPublishedItemsFolder@@EEAAJPEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAXPEAPEAU2@@Z
    virtual long v_GetTargetParentAndItem(_ITEMID_CHILD & volatile *, _GUID const &, void * *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetTransfer@CPublishedItemsFolder@@EEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long v_GetTransfer(_ITEMIDLIST_RELATIVE & volatile *, HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetUIObjectOf@CPublishedItemsFolder@@EEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long v_GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InternalQueryInterface@CPublishedItemsFolder@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_InternalQueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ParseDisplayName@CPublishedItemsFolder@@EEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long v_ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_QueryInterface@CPublishedItemsFolder@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_QueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPublishedItemsFolder@@EEAA@XZ
    virtual ~CPublishedItemsFolder();
};
