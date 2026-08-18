#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 158 member(s).
class LibraryQueryFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LibraryQueryFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPropertiesToItem@LibraryQueryFolder@@UEAAJPEAUIShellItem@@PEAUIPropertyChangeArray@@PEAUITransferAdviseSink@@PEAPEAU2@@Z
    virtual long ApplyPropertiesToItem(IShellItem *, IPropertyChangeArray *, ITransferAdviseSink *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToDelegatePropertyStore@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@W4GETPROPERTYSTOREFLAGS@@PEAPEAUIPropertyStore@@@Z
    virtual long BindToDelegatePropertyStore(_ITEMID_CHILD & volatile *, int, IPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@LibraryQueryFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@LibraryQueryFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@LibraryQueryFolder@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@LibraryQueryFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@LibraryQueryFolder@@UEAAJKPEBU_GUID@@PEAPEAGPEAUIStorage@@@Z
    virtual long CopyTo(unsigned long, _GUID const *, unsigned short * *, IStorage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFilteredIDList@LibraryQueryFolder@@UEAAJPEAUIFilterCondition@@W4tagFILTERIDLISTTYPE@@PEAUIPropertyStore@@PEAPEAU_ITEMID_CHILD@@@Z
    virtual long CreateFilteredIDList(IFilterCondition *, int, IPropertyStore *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStackedIDList@LibraryQueryFolder@@UEAAJAEBU_tagpropertykey@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long CreateStackedIDList(_tagpropertykey const &, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStorage@LibraryQueryFolder@@UEAAJPEBGKKKPEAPEAUIStorage@@@Z
    virtual long CreateStorage(unsigned short const *, unsigned long, unsigned long, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@LibraryQueryFolder@@UEAAJPEBGKKKPEAPEAUIStream@@@Z
    virtual long CreateStream(unsigned short const *, unsigned long, unsigned long, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@LibraryQueryFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelegateBindToParent@LibraryQueryFolder@@UEAAJPEAUIShellItem@@AEBU_GUID@@PEAPEAXPEAPEAU2@@Z
    virtual long DelegateBindToParent(IShellItem *, _GUID const &, void * *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyElement@LibraryQueryFolder@@UEAAJPEBG@Z
    virtual long DestroyElement(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumElements@LibraryQueryFolder@@UEAAJKPEAXKPEAPEAUIEnumSTATSTG@@@Z
    virtual long EnumElements(unsigned long, void *, unsigned long, IEnumSTATSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@LibraryQueryFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjectsEx@LibraryQueryFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@KPEAUIItemFilter@@PEAPEAUIEnumIDList@@@Z
    virtual long EnumObjectsEx(HWND__*, IBindCtx *, unsigned long, IItemFilter *, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@LibraryQueryFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@LibraryQueryFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoListFlags@LibraryQueryFolder@@UEAAJPEAK@Z
    virtual long GetAutoListFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@LibraryQueryFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConditions@LibraryQueryFolder@@UEAAJAEBU_tagpropertykey@@W4CONDITIONSOURCEFLAGS@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetConditions(_tagpropertykey const &, int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@LibraryQueryFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumn@LibraryQueryFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@LibraryQueryFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultSearchGUID@LibraryQueryFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilteredIDListType@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAW4tagFILTERIDLISTTYPE@@@Z
    virtual long GetFilteredIDListType(_ITEMID_CHILD & volatile *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderCapabilities@LibraryQueryFolder@@UEAAJW4NSTCFOLDERCAPABILITIES@@PEAW42@@Z
    virtual long GetFolderCapabilities(int, int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFolderTargetInfo@LibraryQueryFolder@@UEAAJPEAU_PERSIST_FOLDER_TARGET_INFO@@@Z
    virtual long GetFolderTargetInfo(_PERSIST_FOLDER_TARGET_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderType@LibraryQueryFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetFolderType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneState@LibraryQueryFolder@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetPaneState(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStorageFromIDListPriv@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStorageFromIDListPriv(_ITEMID_CHILD & volatile *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryStore@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@W4PROPERTY_GET_TYPE@@PEAUIPropertyKeyStore@@PEAUIScope@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetQueryStore(_ITEMID_CHILD & volatile *, int, IPropertyKeyStore *, IScope *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealLocations@LibraryQueryFolder@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetRealLocations(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScopeAndSubQueries@LibraryQueryFolder@@UEAAJW4SCOPE_ITEM_DEPTH@@W4SCOPE_ITEM_FLAGS@@PEAPEAUIScope@@PEAPEAUIShellItemArray@@@Z
    virtual long GetScopeAndSubQueries(int, int, IScope * *, IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchRoot@LibraryQueryFolder@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetSearchRoot(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStackData@LibraryQueryFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetStackData(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStackedKey@LibraryQueryFolder@@UEAAJPEAU_tagpropertykey@@@Z
    virtual long GetStackedKey(_tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedLogicalViews@LibraryQueryFolder@@UEAA?AW4SUPPORTS_FOLDER_LOGICAL_VIEW_MODE@@XZ
    virtual int GetSupportedLogicalViews();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailHandler@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetThumbnailHandler(_ITEMID_CHILD & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@LibraryQueryFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitNew@LibraryQueryFolder@@UEAAJXZ
    virtual long InitNew();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@LibraryQueryFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeEx@LibraryQueryFolder@@UEAAJPEAUIBindCtx@@PEBU_ITEMIDLIST_ABSOLUTE@@PEBU_PERSIST_FOLDER_TARGET_INFO@@@Z
    virtual long InitializeEx(IBindCtx *, _ITEMIDLIST_ABSOLUTE const *, _PERSIST_FOLDER_TARGET_INFO const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsChildID@LibraryQueryFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    virtual long IsChildID(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsEqualID@LibraryQueryFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual long IsEqualID(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemRealized@LibraryQueryFolder@@UEAAJPEAUIChildId@@PEAH@Z
    virtual long IsItemRealized(IChildId *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsQuery@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@@Z
    virtual long IsQuery(_ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStack@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@@Z
    virtual long IsStack(_ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@LibraryQueryFolder@@UEAAHW4FOLDER_VIEW_CAPABILITY@@@Z
    virtual int IsSupported(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LibraryQueryFolder@@QEAA@PEAUIUnknown@@@Z
    LibraryQueryFolder(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@LibraryQueryFolder@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@LibraryQueryFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModifyFilteredIDList@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAUIFilterCondition@@PEAPEAU2@@Z
    virtual long ModifyFilteredIDList(_ITEMID_CHILD & volatile *, IFilterCondition *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveElementTo@LibraryQueryFolder@@UEAAJPEBGPEAUIStorage@@0K@Z
    virtual long MoveElementTo(unsigned short const *, IStorage *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyExecuteFailure@LibraryQueryFolder@@UEAAJPEAUIServiceProvider@@J@Z
    virtual long NotifyExecuteFailure(IServiceProvider *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStorage@LibraryQueryFolder@@UEAAJPEBGPEAUIStorage@@KPEAPEAGKPEAPEAU2@@Z
    virtual long OpenStorage(unsigned short const *, IStorage *, unsigned long, unsigned short * *, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStream@LibraryQueryFolder@@UEAAJPEBGPEAXKKPEAPEAUIStream@@@Z
    virtual long OpenStream(unsigned short const *, void *, unsigned long, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@LibraryQueryFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LibraryQueryFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@LibraryQueryFolder@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LibraryQueryFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBackReferences@LibraryQueryFolder@@UEAAJXZ
    virtual long RemoveBackReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameElement@LibraryQueryFolder@@UEAAJPEBG0@Z
    virtual long RenameElement(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentFilteredIDList@LibraryQueryFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAPEAU2@@Z
    virtual long ReparentFilteredIDList(_ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveProviders@LibraryQueryFolder@@UEAAJPEAUIScope@@W4FULLTEXT_HANDLE_TYPE@@PEAUIServiceProvider@@AEBU_tagpropertykey@@AEBU_GUID@@PEAPEAX@Z
    virtual long ResolveProviders(IScope *, int, IServiceProvider *, _tagpropertykey const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveProvidersWithResultShape@LibraryQueryFolder@@UEAAJPEAUIScope@@PEAUIResultShape@@PEAUICondition@@W4FULLTEXT_HANDLE_TYPE@@PEAUIServiceProvider@@AEBU_tagpropertykey@@AEBU_GUID@@PEAPEAX@Z
    virtual long ResolveProvidersWithResultShape(IScope *, IResultShape *, ICondition *, int, IServiceProvider *, _tagpropertykey const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@LibraryQueryFolder@@UEAAJXZ
    virtual long Revert();
    // Category: Method | Source: PE Export
    // Symbol: ?Save@LibraryQueryFolder@@UEAAJPEAUIPropertyBag@@HH@Z
    virtual long Save(IPropertyBag *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClass@LibraryQueryFolder@@UEAAJAEBU_GUID@@@Z
    virtual long SetClass(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementTimes@LibraryQueryFolder@@UEAAJPEBGPEBU_FILETIME@@11@Z
    virtual long SetElementTimes(unsigned short const *, _FILETIME const *, _FILETIME const *, _FILETIME const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetNameOf@LibraryQueryFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateBits@LibraryQueryFolder@@UEAAJKK@Z
    virtual long SetStateBits(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDelegateForHandler@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@W4DELEGATION_FLAGS@@@Z
    virtual long ShouldDelegateForHandler(_ITEMID_CHILD & volatile *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@LibraryQueryFolder@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateIDs@LibraryQueryFolder@@UEAAJPEAJPEBU_ITEMIDLIST_ABSOLUTE@@1PEAPEAU2@2022@Z
    virtual long TranslateIDs(long *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE * *, _ITEMIDLIST_ABSOLUTE * *, long *, _ITEMIDLIST_ABSOLUTE * *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@LibraryQueryFolder@@UEAAJPEAUIBindCtx@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z
    virtual long Update(IBindCtx *, _ITEMID_CHILD & volatile *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIDListOnRename@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAUIShellFolder@@PEBU2@PEAPEAU2@@Z
    virtual long UpdateIDListOnRename(_ITEMID_CHILD & volatile *, IShellFolder *, _ITEMID_CHILD const *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemFromChangeArray@LibraryQueryFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAUIPropertyChangeArray@@PEAPEAU2@@Z
    virtual long UpdateItemFromChangeArray(_ITEMID_CHILD & volatile *, IPropertyChangeArray *, _ITEMID_CHILD * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LibraryQueryFolder@@UEAA@XZ
    virtual ~LibraryQueryFolder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFilterCondition@LibraryQueryFolder@@AEAAJPEAUIPropertyBag@@PEAPEAUICondition@@@Z
    long CreateFilterCondition(IPropertyBag *, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureScopeStorage@LibraryQueryFolder@@AEAAJXZ
    long EnsureScopeStorage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadDBFolderWithAutoList@LibraryQueryFolder@@AEAAJPEAUIAutoListDescription@@@Z
    long LoadDBFolderWithAutoList(IAutoListDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPrefetchedProperties@LibraryQueryFolder@@AEAAJPEAUIPropertyBag@@PEAPEAUIPropertyKeyStore@@@Z
    long LoadPrefetchedProperties(IPropertyBag *, IPropertyKeyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSortColumns@LibraryQueryFolder@@AEAAJPEAUIPropertyBag@@PEAIPEAPEAUSORTCOLUMN@@@Z
    long LoadSortColumns(IPropertyBag *, unsigned int *, SORTCOLUMN * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogIndexerStatusAndQueuedItemsCount@LibraryQueryFolder@@CAXPEAUISearchCatalogManager@@V?$tip_test@V?$merged_data@U_tip_IndexerUpToDateForFolderScope@@U1@@details@tip2@@@tip2@@@Z
    static void LogIndexerStatusAndQueuedItemsCount(ISearchCatalogManager *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogWhetherAllGalleryItemsAreIndexed@LibraryQueryFolder@@CAXPEAUISearchCatalogManagerInternal@@AEBU_GUID@@V?$tip_test@V?$merged_data@U_tip_IndexerUpToDateForFolderScope@@U1@@details@tip2@@@tip2@@@Z
    static void LogWhetherAllGalleryItemsAreIndexed(ISearchCatalogManagerInternal *, _GUID const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunIndexerHealthTipTest@LibraryQueryFolder@@CA?AUfire_and_forget@winrt@@U_GUID@@@Z
    static WindissectOpaque RunIndexerHealthTipTest(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldFireIndexerHealthTipTest@LibraryQueryFolder@@AEAA_NXZ
    bool ShouldFireIndexerHealthTipTest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InternalQueryInterface@LibraryQueryFolder@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_InternalQueryInterface(_GUID const &, void * *);
};
