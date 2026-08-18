#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 70 member(s).
class CPCSettingsFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPCSettingsFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CPCSettingsFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CPCSettingsFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPCSettingsFolder@@QEAA@XZ
    CPCSettingsFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CPCSettingsFolder@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    virtual long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?CompareIDs@CPCSettingsFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateViewObject@CPCSettingsFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CPCSettingsFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CPCSettingsFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CPCSettingsFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CPCSettingsFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CPCSettingsFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultColumn@CPCSettingsFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultColumnState@CPCSettingsFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CPCSettingsFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CPCSettingsFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDetailsOf@CPCSettingsFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CPCSettingsFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailHandler@CPCSettingsFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetThumbnailHandler(_ITEMID_CHILD & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CPCSettingsFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitNew@CPCSettingsFolder@@UEAAJXZ
    virtual long InitNew();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPCSettingsFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CPCSettingsFolder@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Method | Source: PE Export
    // Symbol: ?MapColumnToSCID@CPCSettingsFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@CPCSettingsFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPCSettingsFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPCSettingsFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CPCSettingsFolder@@UEAAJPEAUIPropertyBag@@HH@Z
    virtual long Save(IPropertyBag *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CPCSettingsFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreatePCSettingsPidl@CPCSettingsFolder@@SAJPEAUIItem@@PEAPEAU_ITEMID_CHILD@@@Z
    static long s_CreatePCSettingsPidl(IItem *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetItemRank@CPCSettingsFolder@@SAJPEAUIShellItem2@@PEAH@Z
    static long s_GetItemRank(IShellItem2*, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPCSettingsFolder@@UEAA@XZ
    virtual ~CPCSettingsFolder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFactory@CPCSettingsFolder@@AEAAJPEAPEAUISearchFolderItemFactory@@@Z
    long _CreateFactory(ISearchFolderItemFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCachedScopeItemFlag@CPCSettingsFolder@@AEAA?AW4SCOPE_ITEM_FLAGS@@XZ
    int _GetCachedScopeItemFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemIcon@CPCSettingsFolder@@AEAAJPEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    long _GetItemIcon(_ITEMID_CHILD & volatile *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScopeItemFlagWithGrepCheck@CPCSettingsFolder@@AEAA?AW4SCOPE_ITEM_FLAGS@@XZ
    int _GetScopeItemFlagWithGrepCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPCSettingsEnabled@CPCSettingsFolder@@AEAA_NXZ
    bool _IsPCSettingsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadIcon@CPCSettingsFolder@@AEAAJPEBGHAEBU_GUID@@PEAPEAX@Z
    long _LoadIcon(unsigned short const *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RunQueryAndGetEnumIDList@CPCSettingsFolder@@AEAAJW4SCOPE_ITEM_FLAGS@@_NW4Type@PCSetting@@PEAUISearchFolderItemFactory@@PEAPEAUIEnumIDList@@@Z
    long _RunQueryAndGetEnumIDList(int, bool, int, ISearchFolderItemFactory *, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCondition@CPCSettingsFolder@@AEAAJPEAUICondition@@@Z
    long _SetCondition(ICondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSearchCommandOptions@CPCSettingsFolder@@AEAAJPEAUIUnknown@@@Z
    long _SetSearchCommandOptions(IUnknown *);
};
