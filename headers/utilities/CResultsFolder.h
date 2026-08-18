#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 94 member(s).
class CResultsFolder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFolder@CResultsFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAK@Z
    virtual long AddFolder(_ITEMIDLIST_ABSOLUTE const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFolderItem@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAPEAU2@@Z
    virtual long AddFolderItem(_ITEMID_CHILD & volatile *, unsigned long, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIDList@CResultsFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU_ITEMID_CHILD@@@Z
    virtual long AddIDList(_ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddItem@CResultsFolder@@UEAAJPEAUIShellItem@@@Z
    virtual long AddItem(IShellItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResultsFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CResultsFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CResultsFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CResultsFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateNewIDList@CResultsFolder@@UEAAJPEBGPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU_ITEMID_CHILD@@@Z
    virtual long CreateNewIDList(unsigned short const *, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CResultsFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CResultsFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CResultsFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFolder@CResultsFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAK@Z
    virtual long FindFolder(_ITEMIDLIST_ABSOLUTE const *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?FindItem@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAH@Z
    virtual long FindItem(_ITEMID_CHILD & volatile *, unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CResultsFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CResultsFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CResultsFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumn@CResultsFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CResultsFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultSearchGUID@CResultsFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolder@CResultsFolder@@UEAAJKPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetFolder(unsigned long, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderCount@CResultsFolder@@UEAAJPEAI@Z
    virtual long GetFolderCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFromItem@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetFolderFromItem(_ITEMID_CHILD & volatile *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderType@CResultsFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetFolderType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconOf@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAH@Z
    virtual long GetIconOf(_ITEMID_CHILD & volatile *, unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CResultsFolder@@UEAAJHPEAPEAU_ITEMID_CHILD@@PEAK@Z
    virtual long GetItem(int, _ITEMID_CHILD * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@CResultsFolder@@UEAAJPEAI@Z
    virtual long GetItemCount(unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetOverlayIconIndex@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAH@Z
    virtual long GetOverlayIconIndex(_ITEMID_CHILD & volatile *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIndex@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAH@Z
    virtual long GetOverlayIndex(_ITEMID_CHILD & volatile *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertiesToApply@CResultsFolder@@UEAAJPEAUIPropertyStore@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertiesToApply(IPropertyStore *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CResultsFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitNew@CResultsFolder@@UEAAJXZ
    virtual long InitNew();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CResultsFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTypeSupported@CResultsFolder@@UEAAJPEBG@Z
    virtual long IsTypeSupported(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CResultsFolder@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CResultsFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveItem@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@H@Z
    virtual long MoveItem(_ITEMID_CHILD & volatile *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseDisplayName@CResultsFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryFolderInterface@CResultsFolder@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long QueryFolderInterface(unsigned long, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResultsFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryItemFolderInterface@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    virtual long QueryItemFolderInterface(_ITEMID_CHILD & volatile *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResultsFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@CResultsFolder@@UEAAJXZ
    virtual long RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFolderItem@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@K@Z
    virtual long RemoveFolderItem(_ITEMID_CHILD & volatile *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveIDList@CResultsFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long RemoveIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItem@CResultsFolder@@UEAAJPEAUIShellItem@@@Z
    virtual long RemoveItem(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CResultsFolder@@UEAAJPEAUIPropertyBag@@HH@Z
    virtual long Save(IPropertyBag *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CResultsFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFolderItem@CResultsFolder@@UEAAJPEFBU_ITEMID_CHILD@@K0K@Z
    virtual long UpdateFolderItem(_ITEMID_CHILD & volatile *, unsigned long, _ITEMID_CHILD & volatile *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CResultsFolder@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(IUnknown *, _GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResultsFolder@@AEAA@PEAUIUnknown@@@Z
    CResultsFolder(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddDataToIDList@CResultsFolder@@AEAAJPEFBU_ITEMID_CHILD@@HPEAPEAU2@@Z
    long _AddDataToIDList(_ITEMID_CHILD & volatile *, int, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddFolder@CResultsFolder@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAKPEAUIShellFolder@@@Z
    long _AddFolder(_ITEMIDLIST_ABSOLUTE const *, unsigned long *, IShellFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FolderIDListFromIDList@CResultsFolder@@CAJPEFBU_ITEMID_CHILD@@PEAPEFBU_ITEMIDLIST_ABSOLUTE@@@Z
    static long _FolderIDListFromIDList(_ITEMID_CHILD & volatile *, _ITEMIDLIST_ABSOLUTE & volatile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDetailsFolder@CResultsFolder@@AEAAJXZ
    long _GetDetailsFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolderIndex@CResultsFolder@@CAIPEFBU_ITEMID_CHILD@@@Z
    static unsigned int _GetFolderIndex(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPidlVersion@CResultsFolder@@CAIPEFBU_ITEMID_CHILD@@@Z
    static unsigned int _GetPidlVersion(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HiddenFolderData@CResultsFolder@@CAPEFBUHIDDENFOLDERDATA@@PEFBU_ITEMID_CHILD@@@Z
    static HIDDENFOLDERDATA & volatile * _HiddenFolderData(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InterfaceFromRFI@CResultsFolder@@AEAAJPEAURESULT_FOLDER_ITEM@@AEBU_GUID@@PEAPEAX@Z
    long _InterfaceFromRFI(RESULT_FOLDER_ITEM *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapColIndex@CResultsFolder@@AEAAHPEAI@Z
    int _MapColIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveFolders@CResultsFolder@@AEAAXXZ
    void _RemoveFolders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnwrapItemAndAdd@CResultsFolder@@AEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z
    long _UnwrapItemAndAdd(IShellFolder *, _ITEMID_CHILD & volatile *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InternalQueryInterface@CResultsFolder@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_InternalQueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResultsFolder@@EEAA@XZ
    virtual ~CResultsFolder();
};
