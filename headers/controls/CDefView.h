#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 693 member(s).
class CDefView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddObject@CDefView@@UEAAJPEFAU_ITEMID_CHILD@@PEAI@Z
    virtual long AddObject(_ITEMID_CHILD & const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPropertySheetPages@CDefView@@UEAAJKP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPropertySheetPages(unsigned long, int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDefView@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToCache@CDefView@@UEAAJPEAUIShellItem@@PEAUIFileOperation@@@Z
    virtual long AddToCache(IShellItem *, IFileOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlterEffect@CDefView@@UEAAXKPEAKI@Z
    virtual void AlterEffect(unsigned long, unsigned long *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeByColumn@CDefView@@UEAAXW4ARRANGEMENT_TYPE@@AEBU_tagpropertykey@@@Z
    virtual void ArrangeByColumn(int, _tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeGrid@CDefView@@UEAAJXZ
    virtual long ArrangeGrid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoArrange@CDefView@@UEAAJXZ
    virtual long AutoArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoSizeAllColumns@CDefView@@UEAAXXZ
    virtual void AutoSizeAllColumns();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDefView@@QEAA@PEAUIShellFolderViewCB@@PEAUIShellView@@@Z
    CDefView(IShellFolderViewCB *, IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanDesktopUseSolidBackgroundColorHelper@CDefView@@SAHXZ
    static int CanDesktopUseSolidBackgroundColorHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanDisplayXamlView@CDefView@@UEAAHXZ
    virtual int CanDisplayXamlView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanGroupView@CDefView@@UEAAHXZ
    virtual int CanGroupView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSortView@CDefView@@UEAAHXZ
    virtual int CanSortView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDelayActivation@CDefView@@UEAAJXZ
    virtual long CancelDelayActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCache@CDefView@@UEAAJPEAUIShellItem@@@Z
    virtual long CheckCache(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteContextMenu@CDefView@@UEAAXXZ
    virtual void CompleteContextMenu();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CDefView@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEnumIDListFromContents@CDefView@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@KPEAPEAUIEnumIDList@@@Z
    virtual long CreateEnumIDListFromContents(_ITEMIDLIST_ABSOLUTE const *, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateItemCollection@CDefView@@UEAAJPEAPEAUIItemCollection@@@Z
    virtual long CreateItemCollection(IItemCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewWindow@CDefView@@UEAAJPEAUIShellView@@PEBUFOLDERSETTINGS@@PEAUIShellBrowser@@PEAUtagRECT@@PEAPEAUHWND__@@@Z
    virtual long CreateViewWindow(IShellView *, FOLDERSETTINGS const *, IShellBrowser *, tagRECT *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewWindow2@CDefView@@UEAAJPEAU_SV2CVW2_PARAMS@@@Z
    virtual long CreateViewWindow2(_SV2CVW2_PARAMS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewWindow3@CDefView@@UEAAJPEAUIShellBrowser@@PEAUIShellView@@KW4FOLDERFLAGS@@2W4FOLDERVIEWMODE@@PEBU_GUID@@PEBUtagRECT@@PEAPEAUHWND__@@@Z
    virtual long CreateViewWindow3(IShellBrowser *, IShellView *, unsigned long, int, int, int, _GUID const *, tagRECT const *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayActivation@CDefView@@UEAAJXZ
    virtual long DelayActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyViewWindow@CDefView@@UEAAJXZ
    virtual long DestroyViewWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoContextMenuPopup@CDefView@@UEAAJPEAUIUnknown@@IUtagPOINT@@@Z
    virtual long DoContextMenuPopup(IUnknown *, unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoExpandedContextMenu@CDefView@@UEAAXUtagPOINT@@HPEAU_GUID@@PEAU2@H@Z
    virtual void DoExpandedContextMenu(tagPOINT, int, _GUID *, tagPOINT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoRename@CDefView@@UEAAJXZ
    virtual long DoRename();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CDefView@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CDefView@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CDefView@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Draw@CDefView@@UEAAJKJPEAXPEAUtagDVTARGETDEVICE@@PEAUHDC__@@2PEBU_RECTL@@3P6AH_K@Z4@Z
    virtual long Draw(unsigned long, long, void *, tagDVTARGETDEVICE *, HDC__*, HDC__*, _RECTL const *, _RECTL const *, int ( *)(uint64_t), uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CDefView@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropCompleted@CDefView@@UEAAKPEAUIDataObject@@K@Z
    virtual unsigned long DropCompleted(IDataObject *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DumpContents@CDefView@@UEAAJHPEAUIDebugOutput@@PEA_K@Z
    virtual long DumpContents(int, IDebugOutput *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableAlphaShadow@CDefView@@UEAAJH@Z
    virtual long EnableAlphaShadow(int);
    // Category: Method | Source: PE Export
    // Symbol: ?EnableModeless@CDefView@@UEAAJH@Z
    virtual long EnableModeless(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EqualsViewIDList@CDefView@@UEAAHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual int EqualsViewIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CDefView@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterByCondition@CDefView@@UEAAJPEAUIFilterCondition@@@Z
    virtual long FilterByCondition(IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterByText@CDefView@@UEAAJPEBG0@Z
    virtual long FilterByText(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterContent@CDefView@@UEAAJXZ
    virtual long FilterContent();
    // Category: Method | Source: PE Export
    // Symbol: ?Freeze@CDefView@@UEAAJKJPEAXPEAK@Z
    virtual long Freeze(unsigned long, long, void *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdvise@CDefView@@UEAAJPEAK0PEAPEAUIAdviseSink@@@Z
    virtual long GetAdvise(unsigned long *, unsigned long *, IAdviseSink * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArrangeParam@CDefView@@UEAAJPEA_J@Z
    virtual long GetArrangeParam(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoArrange@CDefView@@UEAAJXZ
    virtual long GetAutoArrange();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassID@CDefView@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CDefView@@UEAAJW4VPCOLORFLAGS@@PEAK@Z
    virtual long GetColor(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorSet@CDefView@@UEAAJKJPEAXPEAUtagDVTARGETDEVICE@@PEAUHDC__@@PEAPEAUtagLOGPALETTE@@@Z
    virtual long GetColorSet(unsigned long, long, void *, tagDVTARGETDEVICE *, HDC__*, tagLOGPALETTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnCount@CDefView@@UEAAJW4CM_ENUM_FLAGS@@PEAI@Z
    virtual long GetColumnCount(int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnInfo@CDefView@@UEAAJAEBU_tagpropertykey@@PEAUCM_COLUMNINFO@@@Z
    virtual long GetColumnInfo(_tagpropertykey const &, CM_COLUMNINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumns@CDefView@@UEAAJW4CM_ENUM_FLAGS@@PEAU_tagpropertykey@@I@Z
    virtual long GetColumns(int, _tagpropertykey *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentFolderFlags@CDefView@@UEAAJPEAK@Z
    virtual long GetCurrentFolderFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentInfo@CDefView@@UEAAJPEAUFOLDERSETTINGS@@@Z
    virtual long GetCurrentInfo(FOLDERSETTINGS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPropertyKey@CDefView@@UEAAJPEAU_tagpropertykey@@@Z
    virtual long GetCurrentPropertyKey(_tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentValue@CDefView@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long GetCurrentValue(tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentViewMode@CDefView@@UEAAJPEAI@Z
    virtual long GetCurrentViewMode(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultSpacing@CDefView@@UEAAJPEAUtagPOINT@@@Z
    virtual long GetDefaultSpacing(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragPoint@CDefView@@UEAAJPEAUtagPOINT@@@Z
    virtual long GetDragPoint(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropPoint@CDefView@@UEAAJPEAUtagPOINT@@@Z
    virtual long GetDropPoint(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstSortColumn@CDefView@@UEAAJPEAUSORTCOLUMN@@@Z
    virtual long GetFirstSortColumn(SORTCOLUMN *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedItem@CDefView@@UEAAJPEAH@Z
    virtual long GetFocusedItem(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolder@CDefView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetFolder(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderType@CDefView@@UEAAJPEAU_GUID@@@Z
    virtual long GetFolderType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderViewOptions@CDefView@@UEAAJPEAW4FOLDERVIEWOPTIONS@@@Z
    virtual long GetFolderViewOptions(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFont@CDefView@@UEAAJPEAUtagLOGFONTW@@@Z
    virtual long GetFont(tagLOGFONTW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupBy@CDefView@@UEAAJPEAU_tagpropertykey@@PEAH@Z
    virtual long GetGroupBy(_tagpropertykey *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupSubsetCount@CDefView@@UEAAJPEAI@Z
    virtual long GetGroupSubsetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@CDefView@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CDefView@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInheritFlags@CDefView@@UEAAJPEAW4IHVS_FLAGS@@@Z
    virtual long GetInheritFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertMark@CDefView@@UEAAJPEAH@Z
    virtual long GetInsertMark(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInvocationLocation@CDefView@@UEAAJPEAW4EXPLORER_COMMAND_SQM_INVOCATION_LOCATION@@@Z
    virtual long GetInvocationLocation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CDefView@@UEAAJHAEBU_GUID@@PEAPEAX@Z
    virtual long GetItem(int, _GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItemHeight@CDefView@@UEAAJPEAH@Z
    virtual long GetItemHeight(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemIndex@CDefView@@UEAAHPEFBU_ITEMID_CHILD@@@Z
    virtual int GetItemIndex(_ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemObject@CDefView@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetItemObject(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemPosition@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@PEAUtagPOINT@@@Z
    virtual long GetItemPosition(_ITEMID_CHILD & volatile *, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemRect@CDefView@@UEAAJHPEAUtagRECT@@@Z
    virtual long GetItemRect(int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemSpacing@CDefView@@UEAAJPEAU_ITEMSPACING@@@Z
    virtual long GetItemSpacing(_ITEMSPACING *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemToTranslate@CDefView@@UEAAJPEAPEAUIItem@@@Z
    virtual long GetItemToTranslate(IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxItemCount@CDefView@@UEAAJPEAI@Z
    virtual long GetMaxItemCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenu@CDefView@@UEAAJPEAPEAUHMENU__@@@Z
    virtual long GetMenu(HMENU__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCount@CDefView@@UEAAJPEAI@Z
    virtual long GetObjectCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectW@CDefView@@UEAAJPEAPEAU_ITEMID_CHILD@@I@Z
    virtual long GetObjectW(_ITEMID_CHILD * *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperationID@CDefView@@UEAAJPEAK@Z
    virtual long GetOperationID(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPromptText@CDefView@@UEAAJPEAGI@Z
    virtual long GetPromptText(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchText@CDefView@@UEAAJPEAGI@Z
    virtual long GetSearchText(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedCount@CDefView@@UEAAJPEAI@Z
    virtual long GetSelectedCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItem@CDefView@@UEAAJHPEAH@Z
    virtual long GetSelectedItem(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedObjects@CDefView@@UEAAJPEAPEAPEFBU_ITEMID_CHILD@@PEAI@Z
    virtual long GetSelectedObjects(_ITEMID_CHILD & volatile * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CDefView@@UEAAJHPEAPEAUIShellItemArray@@@Z
    virtual long GetSelection(int, IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionMarkedItem@CDefView@@UEAAJPEAH@Z
    virtual long GetSelectionMarkedItem(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionState@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetSelectionState(_ITEMID_CHILD & volatile *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSemanticMinLength@CDefView@@QEAA_KPEBG@Z
    uint64_t GetSemanticMinLength(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortColumnCount@CDefView@@UEAAJPEAH@Z
    virtual long GetSortColumnCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortColumns@CDefView@@UEAAJPEAUSORTCOLUMN@@H@Z
    virtual long GetSortColumns(SORTCOLUMN *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpacing@CDefView@@UEAAJPEAUtagPOINT@@@Z
    virtual long GetSpacing(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@CDefView@@UEAAJPEAW4DEFVIEWSTATUS@@@Z
    virtual long GetStatus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedLogicalViews@CDefView@@QEAA?AW4SUPPORTS_FOLDER_LOGICAL_VIEW_MODE@@XZ
    int GetSupportedLogicalViews();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@CDefView@@UEAAJPEAU_GUID@@K@Z
    virtual long GetView(_GUID *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewModeAndIconSize@CDefView@@UEAAJPEAW4FOLDERVIEWMODE@@PEAH@Z
    virtual long GetViewModeAndIconSize(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewProperty@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetViewProperty(_ITEMID_CHILD & volatile *, _tagpropertykey const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleItem@CDefView@@UEAAJHHPEAH@Z
    virtual long GetVisibleItem(int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CDefView@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRename@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@@Z
    virtual long HandleRename(_ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CDefView@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestItem@CDefView@@UEAAJUtagPOINT@@PEAH@Z
    virtual long HitTestItem(tagPOINT, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeItem@CDefView@@UEAAJPEAUIChildId@@PEAH@Z
    virtual long IncludeItem(IChildId *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeItems@CDefView@@UEAAJPEAH@Z
    virtual long IncludeItems(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDefView@@QEAAJPEAUIShellFolder@@@Z
    long Init(IShellFolder *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitMenuPopup@CDefView@@UEAAJPEAUHMENU__@@@Z
    virtual long InitMenuPopup(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDefView@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDefView@@UEAAXPEAUIContextMenu@@PEAUIShellItemArray@@PEAUHMENU__@@IUtagPOINT@@@Z
    virtual void Invoke(IContextMenu *, IShellItemArray *, HMENU__*, unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeVerbOnSelection@CDefView@@UEAAJPEBD@Z
    virtual long InvokeVerbOnSelection(char const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBkDropTarget@CDefView@@UEAAJPEAUIDropTarget@@@Z
    virtual long IsBkDropTarget(IDropTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDropOnSource@CDefView@@UEAAJPEAUIDropTarget@@@Z
    virtual long IsDropOnSource(IDropTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDropOnSource@CDefView@@UEAAJXZ
    virtual long IsDropOnSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEvaluatingEdpPolicy@CDefView@@UEAAJPEAH@Z
    virtual long IsEvaluatingEdpPolicy(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusOnPopup@CDefView@@UEAAHXZ
    virtual int IsFocusOnPopup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupView@CDefView@@UEAAHXZ
    virtual int IsGroupView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemInDeferredQueue@CDefView@@UEAAJPEAUIItem@@@Z
    virtual long IsItemInDeferredQueue(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMoveInSameFolder@CDefView@@UEAAJXZ
    virtual long IsMoveInSameFolder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSafeToDrop@CDefView@@UEAAHPEAUIDataObject@@H@Z
    virtual int IsSafeToDrop(IDataObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchResultsFolder@CDefView@@QEAA_NXZ
    bool IsSearchResultsFolder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidDropTarget@CDefView@@UEAAHPEAUIItem@@@Z
    virtual int IsValidDropTarget(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewSorted@CDefView@@UEAAHXZ
    virtual int IsViewSorted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewStacked@CDefView@@UEAAHXZ
    virtual int IsViewStacked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Item@CDefView@@UEAAJHPEAPEAU_ITEMID_CHILD@@@Z
    virtual long Item(int, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemCount@CDefView@@UEAAJIPEAH@Z
    virtual long ItemCount(unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Items@CDefView@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long Items(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LimitItemsToVisibleCount@CDefView@@UEAAJH@Z
    virtual long LimitItemsToVisibleCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupAndRemoveFromCache@CDefView@@UEAAJPEAUIShellItem@@PEAPEAUIFileOperation@@@Z
    virtual long LookupAndRemoveFromCache(IShellItem *, IFileOperation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapRect@CDefView@@UEAAJHPEAUHWND__@@PEAUtagRECT@@@Z
    virtual long MapRect(int, HWND__*, tagRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?MoveIcons@CDefView@@UEAAJPEAUIDataObject@@@Z
    virtual long MoveIcons(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveObjects@CDefView@@UEAAJPEBQEFBU_ITEMID_CHILD@@IH@Z
    virtual long MoveObjects(_ITEMID_CHILD & volatile * const *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToIDList@CDefView@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long NavigateToIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDispatchEvent@CDefView@@QEAAJJPEAUtagVARIANT@@@Z
    long NotifyDispatchEvent(long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivateSelection@CDefView@@UEAAJK@Z
    virtual long OnActivateSelection(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundContextMenu@CDefView@@UEAAJPEBUtagPOINT@@@Z
    virtual long OnBackgroundContextMenu(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginDrag@CDefView@@UEAAJPEBUtagPOINT@@@Z
    virtual long OnBeginDrag(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginLabelEdit@CDefView@@UEAAJPEAUIItem@@PEAUHWND__@@@Z
    virtual long OnBeginLabelEdit(IItem *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelAsyncFilters@CDefView@@UEAAJI@Z
    virtual long OnCancelAsyncFilters(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClearFilterPreview@CDefView@@UEAAJI@Z
    virtual long OnClearFilterPreview(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColumnAction@CDefView@@UEAAJHAEBU_tagpropertykey@@PEBUtagPOINT@@H@Z
    virtual long OnColumnAction(int, _tagpropertykey const &, tagPOINT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColumnClicked@CDefView@@UEAAJHAEBU_tagpropertykey@@PEBUtagPOINT@@@Z
    virtual long OnColumnClicked(int, _tagpropertykey const &, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColumnsChanged@CDefView@@UEAAJXZ
    virtual long OnColumnsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommit@CDefView@@UEAAJIAEBU_tagpropertykey@@W4tagARRANGE_MODE@@@Z
    virtual long OnCommit(unsigned int, _tagpropertykey const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentsChanged@CDefView@@UEAAJH@Z
    virtual long OnContentsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuDismiss@CDefView@@UEAAXXZ
    virtual void OnContextMenuDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyFilterControl@CDefView@@UEAAJI@Z
    virtual long OnDestroyFilterControl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoCollapseColumn@CDefView@@UEAAJXZ
    virtual long OnDoCollapseColumn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndLabelEdit@CDefView@@UEAAJPEAUIItem@@PEBGW4RenameOperationStatus@@@Z
    virtual long OnEndLabelEdit(IItem *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExplorerWindowReady@CDefView@@UEAAJXZ
    virtual long OnExplorerWindowReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFilterChanged@CDefView@@UEAAJIAEBU_tagpropertykey@@PEAUIFilterCondition@@@Z
    virtual long OnFilterChanged(unsigned int, _tagpropertykey const &, IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFiltersCreated@CDefView@@UEAAJPEAUIObjectCollection@@AEBU_tagpropertykey@@@Z
    virtual long OnFiltersCreated(IObjectCollection *, _tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChange@CDefView@@UEAAJH@Z
    virtual long OnFocusChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetColumnHeaderFilterVisible@CDefView@@UEAAJXZ
    virtual long OnGetColumnHeaderFilterVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetEmptyText@CDefView@@UEAAJPEAGI@Z
    virtual long OnGetEmptyText(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetSortColumn@CDefView@@UEAAJW4GETSORTCOLUMN@@PEAUSORTCOLUMN@@@Z
    virtual long OnGetSortColumn(int, SORTCOLUMN *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetTryHarderArray@CDefView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long OnGetTryHarderArray(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupZoom@CDefView@@UEAAJPEAUIItem@@@Z
    virtual long OnGroupZoom(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitialEnumerationDone@CDefView@@UEAAJXZ
    virtual long OnInitialEnumerationDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeTryHarder@CDefView@@UEAAJPEAUITryHarderItem@@@Z
    virtual long OnInvokeTryHarder(ITryHarderItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeVerb@CDefView@@UEAAJAEBUtagLCITEM@@PEBG@Z
    virtual long OnInvokeVerb(tagLCITEM const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMoved@CDefView@@UEAAJPEAUIItem@@@Z
    virtual long OnItemMoved(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemStateChanged@CDefView@@UEAAJW4LC_ITEM_FLAGS@@0@Z
    virtual long OnItemStateChanged(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CDefView@@UEAAJI@Z
    virtual long OnKeyDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuCommand@CDefView@@UEAAJK@Z
    virtual long OnMenuCommand(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaintDone@CDefView@@UEAAJXZ
    virtual long OnPaintDone();
    // Category: Method | Source: PE Export
    // Symbol: ?OnRequestReposition@CDefView@@UEAAJIPEBUtagRECT@@@Z
    virtual long OnRequestReposition(unsigned int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollImageSize@CDefView@@UEAAJF@Z
    virtual long OnScrollImageSize(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchTextNotify@CDefView@@UEAAJPEBG0W4SHELLSEARCHNOTIFY@@@Z
    virtual long OnSearchTextNotify(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionContextMenu@CDefView@@UEAAJPEBUtagPOINT@@@Z
    virtual long OnSelectionContextMenu(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionSpotlightContextMenu@CDefView@@UEAAJPEBUtagPOINT@@H@Z
    virtual long OnSelectionSpotlightContextMenu(tagPOINT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetFocus@CDefView@@UEAAJXZ
    virtual long OnSetFocus();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSetTitle@CDefView@@UEAAJPEAUtagVARIANT@@@Z
    virtual long OnSetTitle(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsChanged@CDefView@@UEAAJK@Z
    virtual long OnSettingsChanged(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSettingsLoad@CDefView@@UEAAJPEAUIPropertyBag@@@Z
    virtual long OnSettingsLoad(IPropertyBag *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSettingsSave@CDefView@@UEAAJPEAUIPropertyBag@@@Z
    virtual long OnSettingsSave(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibleColumnMenu@CDefView@@UEAAJU_tagpropertykey@@PEBUtagPOINT@@@Z
    virtual long OnVisibleColumnMenu(_tagpropertykey, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintComplete@CDefView@@UEAAXH@Z
    virtual void PaintComplete(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PassThroughDragEnter@CDefView@@UEAAJPEAUIItem@@PEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long PassThroughDragEnter(IItem *, IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PassThroughDragLeave@CDefView@@UEAAJPEAUIItem@@@Z
    virtual long PassThroughDragLeave(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PassThroughDragOver@CDefView@@UEAAJPEAUIItem@@KU_POINTL@@PEAK@Z
    virtual long PassThroughDragOver(IItem *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PassThroughDrop@CDefView@@UEAAJPEAUIItem@@PEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long PassThroughDrop(IItem *, IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForContextMenu@CDefView@@UEAAXW4CONTEXT_MENU_PRESENTER_FLAGS@@PEBUtagPOINT@@@Z
    virtual void PrepareForContextMenu(int, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForDragOperation@CDefView@@UEAAJPEAKPEAPEAUIDataObject@@@Z
    virtual long PrepareForDragOperation(unsigned long *, IDataObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDelayActivation@CDefView@@UEAAJXZ
    virtual long ProcessDelayActivation();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDefView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CDefView@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CDefView@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CDefView@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Method | Source: PE Export
    // Symbol: ?QuerySupport@CDefView@@UEAAJPEAI@Z
    virtual long QuerySupport(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rearrange@CDefView@@UEAAJ_J@Z
    virtual long Rearrange(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CDefView@@UEAAJXZ
    virtual long Refresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshObject@CDefView@@UEAAJPEFAU_ITEMID_CHILD@@PEAI@Z
    virtual long RefreshObject(_ITEMID_CHILD & const *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDefView@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObject@CDefView@@UEAAJPEFAU_ITEMID_CHILD@@PEAI@Z
    virtual long RemoveObject(_ITEMID_CHILD & const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveViewState@CDefView@@UEAAJXZ
    virtual long SaveViewState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Search@CDefView@@UEAAJPEBGK@Z
    virtual long Search(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CDefView@@UEAAJI@Z
    virtual long Select(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAndEditItem@CDefView@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    virtual long SelectAndEditItem(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAndPositionItem@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@IPEAUtagPOINT@@@Z
    virtual long SelectAndPositionItem(_ITEMID_CHILD & volatile *, unsigned int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAndPositionItems@CDefView@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAUtagPOINT@@K@Z
    virtual long SelectAndPositionItems(unsigned int, _ITEMID_CHILD & volatile * const *, tagPOINT *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectItem@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@I@Z
    virtual long SelectItem(_ITEMID_CHILD & volatile *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectItem@CDefView@@UEAAJHK@Z
    virtual long SelectItem(int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccessibleName@CDefView@@UEAAJPEBG@Z
    virtual long SetAccessibleName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdvise@CDefView@@UEAAJKKPEAUIAdviseSink@@@Z
    virtual long SetAdvise(unsigned long, unsigned long, IAdviseSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationObject@CDefView@@UEAAJPEAUIDispatch@@@Z
    virtual long SetAutomationObject(IDispatch *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCallback@CDefView@@UEAAJPEAUIShellFolderViewCB@@PEAPEAU2@@Z
    virtual long SetCallback(IShellFolderViewCB *, IShellFolderViewCB * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClipboard@CDefView@@UEAAJH@Z
    virtual long SetClipboard(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CDefView@@UEAAJW4VPCOLORFLAGS@@K@Z
    virtual long SetColor(int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumnInfo@CDefView@@UEAAJAEBU_tagpropertykey@@PEBUCM_COLUMNINFO@@@Z
    virtual long SetColumnInfo(_tagpropertykey const &, CM_COLUMNINFO const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumns@CDefView@@UEAAJPEBU_tagpropertykey@@I@Z
    virtual long SetColumns(_tagpropertykey const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCondition@CDefView@@UEAAJPEAUICondition@@@Z
    virtual long SetCondition(ICondition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentFolderFlags@CDefView@@UEAAJKK@Z
    virtual long SetCurrentFolderFlags(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentViewMode@CDefView@@UEAAJI@Z
    virtual long SetCurrentViewMode(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropAnchor@CDefView@@UEAAXH@Z
    virtual void SetDropAnchor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropSourceEnterpriseId@CDefView@@UEAAJPEBG@Z
    virtual long SetDropSourceEnterpriseId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnumReadyCallback@CDefView@@UEAAJPEAUIEnumReadyCallback@@@Z
    virtual long SetEnumReadyCallback(IEnumReadyCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtendedTileViewProperties@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@PEBG@Z
    virtual long SetExtendedTileViewProperties(_ITEMID_CHILD & volatile *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CDefView@@UEAAXXZ
    virtual void SetFocus();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFolderViewOptions@CDefView@@UEAAJW4FOLDERVIEWOPTIONS@@0@Z
    virtual long SetFolderViewOptions(int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFont@CDefView@@UEAAJPEBUtagLOGFONTW@@H@Z
    virtual long SetFont(tagLOGFONTW const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupBy@CDefView@@UEAAJAEBU_tagpropertykey@@H@Z
    virtual long SetGroupBy(_tagpropertykey const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupSubsetCount@CDefView@@UEAAJI@Z
    virtual long SetGroupSubsetCount(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIDList@CDefView@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInvocationLocation@CDefView@@UEAAJW4EXPLORER_COMMAND_SQM_INVOCATION_LOCATION@@@Z
    virtual long SetInvocationLocation(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetItemHeight@CDefView@@UEAAJH@Z
    virtual long SetItemHeight(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemPos@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@PEAUtagPOINT@@@Z
    virtual long SetItemPos(_ITEMID_CHILD & volatile *, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxItemCount@CDefView@@UEAAJI@Z
    virtual long SetMaxItemCount(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetObjectCount@CDefView@@UEAAJII@Z
    virtual long SetObjectCount(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPoints@CDefView@@UEAAJPEAUIDataObject@@@Z
    virtual long SetPoints(IDataObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedraw@CDefView@@UEAAJH@Z
    virtual long SetRedraw(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResultShape@CDefView@@UEAAJPEAUIResultShape@@@Z
    virtual long SetResultShape(IResultShape *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSortColumns@CDefView@@UEAAJPEBUSORTCOLUMN@@H@Z
    virtual long SetSortColumns(SORTCOLUMN const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CDefView@@UEAAJW4FVTEXTTYPE@@PEBG@Z
    virtual long SetText(int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CDefView@@UEAAJPEBG0@Z
    virtual long SetTheme(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileViewProperties@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@PEBG@Z
    virtual long SetTileViewProperties(_ITEMID_CHILD & volatile *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileWidth@CDefView@@UEAAJH@Z
    virtual long SetTileWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewModeAndIconSize@CDefView@@UEAAJW4FOLDERVIEWMODE@@H@Z
    virtual long SetViewModeAndIconSize(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewProperty@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@AEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetViewProperty(_ITEMID_CHILD & volatile *, _tagpropertykey const &, tagPROPVARIANT const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetViewSQMInfo@CDefView@@UEAAJK@Z
    virtual long SetViewSQMInfo(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWatermark@CDefView@@UEAAJPEAUHBITMAP__@@W4VPWATERMARKFLAGS@@@Z
    virtual long SetWatermark(HBITMAP__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowIsHidden@CDefView@@UEAAXH@Z
    virtual void SetWindowIsHidden(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StackByProperty@CDefView@@UEAAJAEBU_tagpropertykey@@@Z
    virtual long StackByProperty(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleVisibleColumn@CDefView@@UEAAXAEBU_tagpropertykey@@@Z
    virtual void ToggleVisibleColumn(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CDefView@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorW@CDefView@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorW(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateViewAccelerator@CDefView@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateViewAccelerator(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDropTargetForIItem@CDefView@@UEAAJPEAUIItem@@PEAUIDataObject@@PEAPEAUIDropTarget@@@Z
    virtual long TryGetDropTargetForIItem(IItem *, IDataObject *, IDropTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivate@CDefView@@UEAAJI@Z
    virtual long UIActivate(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?UIActivateIO@CDefView@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?Unfreeze@CDefView@@UEAAJK@Z
    virtual long Unfreeze(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateObject@CDefView@@UEAAJPEFAU_ITEMID_CHILD@@0PEAI@Z
    virtual long UpdateObject(_ITEMID_CHILD & const *, _ITEMID_CHILD & const *, unsigned int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsRootEntryAutoNavigated@CDefView@@MEAAHXZ
    virtual int v_IsRootEntryAutoNavigated();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowDarkModeContextMenu@CDefView@@AEAAJPEAVSetDarkModeForWindows@@PEAW4PreferredAppMode@@@Z
    long AllowDarkModeContextMenu(SetDarkModeForWindows *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupAfterContextMenu@CDefView@@AEAAXXZ
    void CleanupAfterContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoBackgroundContextMenu@CDefView@@AEAAXAEBUtagPOINT@@W4Mode@FileExplorerContextMenu@@@Z
    void DoBackgroundContextMenu(tagPOINT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoClassicMenu@CDefView@@AEAAXPEAUIContextMenu@@PEAUHMENU__@@AEBUtagPOINT@@PEAUIShellItemArray@@@Z
    void DoClassicMenu(IContextMenu *, HMENU__*, tagPOINT const &, IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCuratedContextMenu@CDefView@@AEAAXPEAUIContextMenu@@PEAUHMENU__@@IAEBUtagPOINT@@@Z
    void DoCuratedContextMenu(IContextMenu *, HMENU__*, unsigned int, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoSelectionContextMenu@CDefView@@AEAAXAEBUtagPOINT@@W4Mode@FileExplorerContextMenu@@@Z
    void DoSelectionContextMenu(tagPOINT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireColumnHeaderClickedEvent@CDefView@@AEAAXAEBU_tagpropertykey@@@Z
    void FireColumnHeaderClickedEvent(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireContextMenuTelemetryEvent@CDefView@@AEAAXPEAUHMENU__@@IPEAUIContextMenu@@PEAUIShellItemArray@@W4ContextMenuType@FileExplorerTelemetryCommon@@@Z
    void FireContextMenuTelemetryEvent(HMENU__*, unsigned int, IContextMenu *, IShellItemArray *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireViewFinishedDisplayingEvent@CDefView@@AEAAX_N@Z
    void FireViewFinishedDisplayingEvent(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropTargetFromIItem@CDefView@@AEAAJPEAUIItem@@PEAUHWND__@@PEAPEAUIDropTarget@@@Z
    long GetDropTargetFromIItem(IItem *, HWND__*, IDropTarget * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocationContext@CDefView@@AEAA?AW4LOCATION_CONTEXT_FLAGS@@PEAUIShellItemArray@@@Z
    int GetLocationContext(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenuIDFromViewModeAndIconSize@CDefView@@AEAAIIIH@Z
    unsigned int GetMenuIDFromViewModeAndIconSize(unsigned int, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkingDirectory@CDefView@@AEAAJPEAPEAG@Z
    long GetWorkingDirectory(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRenameComplete@CDefView@@AEAAX_J@Z
    void HandleRenameComplete(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFolderViewCapabilitySupported@CDefView@@AEAAHW4FOLDER_VIEW_CAPABILITY@@@Z
    int IsFolderViewCapabilitySupported(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSafeToDefaultVerb@CDefView@@AEAAHXZ
    int IsSafeToDefaultVerb();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsXAMLView@CDefView@@EEAAHXZ
    virtual int IsXAMLView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CDefView@@AEAAXXZ
    void OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreWarmZoneCheckAsync@CDefView@@AEAAXXZ
    void PreWarmZoneCheckAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContextMenuCapability@CDefView@@AEAAJPEAUHMENU__@@@Z
    long SetContextMenuCapability(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowMiniMenu@CDefView@@AEAA_NI@Z
    bool ShouldShowMiniMenu(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleHideFilenames@CDefView@@AEAAXXZ
    void ToggleHideFilenames();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetContextMenuPresenter@CDefView@@AEAA?AV?$ComPtr@UIContextMenuPresenter@@@WRL@Microsoft@@XZ
    WindissectOpaque TryGetContextMenuPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@CDefView@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddColumnVerbsToMenu@CDefView@@AEAAJAEBU_tagpropertykey@@PEAUHMENU__@@K@Z
    long _AddColumnVerbsToMenu(_tagpropertykey const &, HMENU__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddColumnsToMenu@CDefView@@AEAAHPEAUHMENU__@@HK@Z
    int _AddColumnsToMenu(HMENU__*, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddConditionToDPA@CDefView@@AEAAJPEAV?$CDPA@UICondition@@V?$CTContainer_PolicyUnOwned@UICondition@@@@@@PEAUIFilterCondition@@@Z
    long _AddConditionToDPA(WindissectOpaque *, IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddCopyHook@CDefView@@AEAAXXZ
    void _AddCopyHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddEnumFlagsCondition@CDefView@@AEAAJPEAV?$CDPA@UICondition@@V?$CTContainer_PolicyUnOwned@UICondition@@@@@@@Z
    long _AddEnumFlagsCondition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSubfolderTryHarderItem@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddSubfolderTryHarderItem(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTextFilterToLocation@CDefView@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU2@@Z
    long _AddTextFilterToLocation(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToRecentDocs@CDefView@@AEAAJPEFBU_ITEMID_CHILD@@@Z
    long _AddToRecentDocs(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderCustom@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderCustom(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderForAllLibraries@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderForAllLibraries(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderForCurrentLibrary@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderForCurrentLibrary(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderForHomeGroup@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderForHomeGroup(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderForLibraryItem@CDefView@@AEAAJPEAUIShellItem@@PEAUIObjectCollection@@@Z
    long _AddTryHarderForLibraryItem(IShellItem *, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderFullText@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderFullText(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderInternetSearch@CDefView@@AEAAJPEAUIObjectCollection@@PEBG@Z
    long _AddTryHarderInternetSearch(IObjectCollection *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderItemForComputer@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderItemForComputer(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderItemsFromFolder@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderItemsFromFolder(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderItemsFromView@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderItemsFromView(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderPinnedItems@CDefView@@AEAAJPEAUIObjectCollection@@PEBG@Z
    long _AddTryHarderPinnedItems(IObjectCollection *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddZoneToDataObject@CDefView@@AEAAXPEAUIDataObject@@@Z
    void _AddZoneToDataObject(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllowCommand@CDefView@@AEAAHI@Z
    int _AllowCommand(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllowEditCommand@CDefView@@AEAAHI@Z
    int _AllowEditCommand(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AlterEffect@CDefView@@AEAAXKPEAKI@Z
    void _AlterEffect(unsigned long, unsigned long *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendSortBuddies@CDefView@@AEAAXAEBU_tagpropertykey@@PEAUSORTCOLUMN@@IPEAI@Z
    void _AppendSortBuddies(_tagpropertykey const &, SORTCOLUMN *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyArrangeBy@CDefView@@AEAAXPEAUISortColumnArray@@AEBU_tagpropertykey@@H1@Z
    void _ApplyArrangeBy(ISortColumnArray *, _tagpropertykey const &, int, _tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplySettings@CDefView@@AEAAXHH@Z
    void _ApplySettings(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplySniffedFolderType@CDefView@@AEAAXXZ
    void _ApplySniffedFolderType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ArrangeByCommandId@CDefView@@AEAAXI@Z
    void _ArrangeByCommandId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ArrangeByMode@CDefView@@AEAAXHAEBU_tagpropertykey@@W4VIEW_ARRANGEMENT_MODE@@@Z
    void _ArrangeByMode(int, _tagpropertykey const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Attributes@CDefView@@AEAAKPEAUIItem@@K@Z
    unsigned long _Attributes(IItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AttributesFromSelection@CDefView@@AEAAKK@Z
    unsigned long _AttributesFromSelection(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BrowseToIDList@CDefView@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@K@Z
    long _BrowseToIDList(_ITEMIDLIST_ABSOLUTE const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildConditionForCollection@CDefView@@AEAAJPEAUIItemFilter@@PEAPEAUICondition@@PEAU_tagpropertykey@@@Z
    long _BuildConditionForCollection(IItemFilter *, ICondition * *, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CBackgrndMenu_CreateInstance@CDefView@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _CBackgrndMenu_CreateInstance(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CachedIsCustomizable@CDefView@@AEAAHXZ
    int _CachedIsCustomizable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallCBWithFolderTypeFallback@CDefView@@AEAAJI_K_J@Z
    long _CallCBWithFolderTypeFallback(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallRefresh@CDefView@@AEAAXH@Z
    void _CallRefresh(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanGroupBy@CDefView@@AEAAHAEBU_tagpropertykey@@@Z
    int _CanGroupBy(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanPositionByAnchor@CDefView@@AEAAHXZ
    int _CanPositionByAnchor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelTryHarderInvoke@CDefView@@AEAAXXZ
    void _CancelTryHarderInvoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckCurrentViewMenuItem@CDefView@@AEAAIPEAUHMENU__@@@Z
    unsigned int _CheckCurrentViewMenuItem(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearCachedSelection@CDefView@@AEAAXXZ
    void _ClearCachedSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearDelaySelectedItems@CDefView@@AEAAXXZ
    void _ClearDelaySelectedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearDelayedViewInsertedItems@CDefView@@AEAAXXZ
    void _ClearDelayedViewInsertedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearSelectionIfChangePending@CDefView@@AEAAXXZ
    void _ClearSelectionIfChangePending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAttribCondition@CDefView@@AEAAJPEAUIConditionFactory2@@KW4ATTRIB_CONDITION_TYPE@1@AEBU_GUID@@PEAPEAX@Z
    long _CreateAttribCondition(IConditionFactory2*, unsigned long, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCollection@CDefView@@AEAAJW4UPDATE_FLAGS@@HW4FILTER_OPERATION_FLAGS@@PEAPEAUIItemCollection@@PEAI@Z
    long _CreateCollection(int, int, int, IItemCollection * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCollectionFactory@CDefView@@AEAAJW4UPDATE_FLAGS@@HW4FILTER_OPERATION_FLAGS@@PEAPEAUIItemCollectionFactory@@@Z
    long _CreateCollectionFactory(int, int, int, IItemCollectionFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateGroupFolderSearchItem@CDefView@@AEAAJPEAUIItem@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _CreateGroupFolderSearchItem(IItem *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateInitialCollection@CDefView@@AEAAJW4UPDATE_FLAGS@@@Z
    long _CreateInitialCollection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNewCollection@CDefView@@AEAAJW4UPDATE_FLAGS@@HW4FILTER_OPERATION_FLAGS@@@Z
    long _CreateNewCollection(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSearchOnAnyFolder@CDefView@@AEAAJPEAUIShellItem@@U_GUID@@AEBU_tagpropertykey@@W4SCOPE_ITEM_DEPTH@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _CreateSearchOnAnyFolder(IShellItem *, _GUID, _tagpropertykey const &, int, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSelectionContextMenu@CDefView@@AEAAJHAEBU_GUID@@PEAPEAX@Z
    long _CreateSelectionContextMenu(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSortColumnArray@CDefView@@AEAAJAEBU_tagpropertykey@@HPEAPEAUISortColumnArray@@@Z
    long _CreateSortColumnArray(_tagpropertykey const &, int, ISortColumnArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSortColumnArrayWithSecondaryColumn@CDefView@@AEAAJAEBU_tagpropertykey@@PEAPEAUISortColumnArray@@@Z
    long _CreateSortColumnArrayWithSecondaryColumn(_tagpropertykey const &, ISortColumnArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateStackedIDList@CDefView@@AEAAJAEBU_tagpropertykey@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _CreateStackedIDList(_tagpropertykey const &, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Create_BackgrndHMENU@CDefView@@AEAAJIAEBU_GUID@@PEAPEAX@Z
    long _Create_BackgrndHMENU(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CurrentAutolistHasSameDisplayNameAsKnownFolder@CDefView@@AEAAHU_GUID@@@Z
    int _CurrentAutolistHasSameDisplayNameAsKnownFolder(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DelaySelectAndPositionItem@CDefView@@AEAAJPEFBU_ITEMID_CHILD@@IHPEAUtagPOINT@@@Z
    long _DelaySelectAndPositionItem(_ITEMID_CHILD & volatile *, unsigned int, int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteMenuItems@CDefView@@AEAAHPEAUHMENU__@@KK@Z
    int _DeleteMenuItems(HMENU__*, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyView@CDefView@@AEAAJH@Z
    long _DestroyView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoColumnClicked@CDefView@@AEAAXAEBU_tagpropertykey@@@Z
    void _DoColumnClicked(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoColumnDropDownMenu@CDefView@@AEAAXPEAUHWND__@@AEBU_tagpropertykey@@PEBUtagPOINT@@_N@Z
    void _DoColumnDropDownMenu(HWND__*, _tagpropertykey const &, tagPOINT const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoContextMenu@CDefView@@AEAAXK@Z
    void _DoContextMenu(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoContextMenuPopup@CDefView@@AEAAJPEAUIUnknown@@IUtagPOINT@@W4Mode@FileExplorerContextMenu@@@Z
    long _DoContextMenuPopup(IUnknown *, unsigned int, tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLocationTextFilter@CDefView@@AEAAXPEAPEAUIFilterCondition@@@Z
    void _EnsureLocationTextFilter(IFilterCondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Exec@CDefView@@AEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    long _Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteRename@CDefView@@AEAAJPEAUIItem@@PEBGKPEAPEAU_ITEMID_CHILD@@@Z
    long _ExecuteRename(IItem *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExplorerCommand@CDefView@@AEAAJI@Z
    long _ExplorerCommand(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillDone@CDefView@@AEAAXXZ
    void _FillDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindItem@CDefView@@AEAAJPEFBU_ITEMID_CHILD@@PEAUtagLCITEM@@@Z
    long _FindItem(_ITEMID_CHILD & volatile *, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindItemAndIndex@CDefView@@AEAAJPEFBU_ITEMID_CHILD@@PEAUtagLCITEM@@@Z
    long _FindItemAndIndex(_ITEMID_CHILD & volatile *, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireCountDoneEnd@CDefView@@AEAAXXZ
    void _FireCountDoneEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireEvent@CDefView@@AEAAJJPEAUtagVARIANT@@@Z
    long _FireEvent(long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireFilterInvoked@CDefView@@AEAAXXZ
    void _FireFilterInvoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireFolderTypeKnownEvent@CDefView@@AEAAJXZ
    long _FireFolderTypeKnownEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireTrackEvent@CDefView@@AEAAXHH@Z
    void _FireTrackEvent(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ForwardMenuMessages@CDefView@@AEAAJKI_K_JPEA_JPEAH@Z
    long _ForwardMenuMessages(unsigned long, unsigned int, uint64_t, int64_t, int64_t *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetArrangeMode@CDefView@@AEAA?AW4VIEW_ARRANGEMENT_MODE@@XZ
    int _GetArrangeMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCBText@CDefView@@AEAAX_KIIIPEAGI@Z
    void _GetCBText(uint64_t, unsigned int, unsigned int, unsigned int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildId@CDefView@@AEAAJHPEAPEAUIChildId@@@Z
    long _GetChildId(int, IChildId * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildIdArray@CDefView@@AEAAJPEAUIObjectCollection@@AEBU_GUID@@PEAPEAX@Z
    long _GetChildIdArray(IObjectCollection *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildIdArrayFromItemArray@CDefView@@AEAAJPEAUIObjectCollection@@PEAV?$CDPARelease@UIChildId@@V?$CTContainer_PolicyRelease@UIChildId@@@@@@PEAIPEAPEAPEFBU_ITEMID_CHILD@@@Z
    long _GetChildIdArrayFromItemArray(IObjectCollection *, WindissectOpaque *, unsigned int *, _ITEMID_CHILD & volatile * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCommandString@CDefView@@AEAAJ_KPEAGI@Z
    long _GetCommandString(uint64_t, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCommonDialogViewFlags@CDefView@@AEAAKXZ
    unsigned long _GetCommonDialogViewFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenuFromObjectCollection@CDefView@@AEAAJPEAUIObjectCollection@@AEBU_GUID@@PEAPEAX@Z
    long _GetContextMenuFromObjectCollection(IObjectCollection *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentSortColumnArray@CDefView@@AEAAXPEAUSORTCOLUMN@@IPEAI@Z
    void _GetCurrentSortColumnArray(SORTCOLUMN *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDragHelper@CDefView@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetDragHelper(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDragPoint@CDefView@@AEAAHPEAUtagPOINT@@@Z
    int _GetDragPoint(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDropPoint@CDefView@@AEAAHPEAUtagPOINT@@@Z
    int _GetDropPoint(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEnumFlags@CDefView@@AEAAKXZ
    unsigned long _GetEnumFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExplorerFlag@CDefView@@AEAAIXZ
    unsigned int _GetExplorerFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFileSystemFolderPath@CDefView@@AEAAJPEAPEAGPEA_N@Z
    long _GetFileSystemFolderPath(unsigned short * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolder@CDefView@@AEAAJPEAPEAUIShellItemArray@@@Z
    long _GetFolder(IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolderTypeDescription@CDefView@@AEAAJPEAPEAUIFolderTypeDescription@@@Z
    long _GetFolderTypeDescription(IFolderTypeDescription * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolderViewOptions@CDefView@@AEAA?AW4FOLDERVIEWOPTIONS@@XZ
    int _GetFolderViewOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFullTextKey@CDefView@@AEAAXPEAU_tagpropertykey@@@Z
    void _GetFullTextKey(_tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInsertPoint@CDefView@@AEAAHPEAUtagPOINT@@@Z
    int _GetInsertPoint(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItem@CDefView@@AEAAJHPEAPEAUIItem@@@Z
    long _GetItem(int, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemArray@CDefView@@AEAAJIAEBU_GUID@@PEAPEAX@Z
    long _GetItemArray(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemFromPidl@CDefView@@AEAAJPEFBU_ITEMID_CHILD@@PEAPEAUIItem@@@Z
    long _GetItemFromPidl(_ITEMID_CHILD & volatile *, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItems@CDefView@@AEAAJIHAEBU_GUID@@PEAPEAX@Z
    long _GetItems(unsigned int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemsWorker@CDefView@@AEAAJIHAEBU_GUID@@PEAPEAX@Z
    long _GetItemsWorker(unsigned int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMaxItemCount@CDefView@@AEAAIXZ
    unsigned int _GetMaxItemCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMenuHelpText@CDefView@@AEAAX_KPEAGI@Z
    void _GetMenuHelpText(uint64_t, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNeededSecurityAction@CDefView@@AEAAKH@Z
    unsigned long _GetNeededSecurityAction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyKeysForTextFilter@CDefView@@AEAAJPEAPEAU_tagpropertykey@@PEAI@Z
    long _GetPropertyKeysForTextFilter(_tagpropertykey * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProviderAttributes@CDefView@@AEAAHPEAW4PROVIDER_ATTRIBUTES@@@Z
    int _GetProviderAttributes(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetResultShape@CDefView@@AEAAJPEAPEAUIResultShape@@@Z
    long _GetResultShape(IResultShape * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItemsArray@CDefView@@AEAAHPEAPEAHPEAH@Z
    int _GetSelectedItemsArray(int * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelection@CDefView@@AEAAJHPEAPEAUIShellItemArray@@@Z
    long _GetSelection(int, IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellItemArrayFromObjectCollection@CDefView@@AEAAJPEAUIObjectCollection@@AEBU_GUID@@PEAPEAX@Z
    long _GetShellItemArrayFromObjectCollection(IObjectCollection *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTryHarderItems@CDefView@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetTryHarderItems(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUIObjectFromItemArray@CDefView@@AEAAJPEAUIObjectCollection@@HAEBU_GUID@@PEAPEAX@Z
    long _GetUIObjectFromItemArray(IObjectCollection *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewFlags@CDefView@@AEAA?AW4BROWSER_VIEW_FLAGS@@XZ
    int _GetViewFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVisibleSlotCount@CDefView@@AEAAHXZ
    int _GetVisibleSlotCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleNM_SETFOCUS@CDefView@@AEAAXXZ
    void _HandleNM_SETFOCUS();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitArrangeByMenu@CDefView@@AEAAHPEAUHMENU__@@@Z
    int _InitArrangeByMenu(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFromPreviousView@CDefView@@AEAAXPEAUIShellView@@@Z
    void _InitFromPreviousView(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitGroupByMenu@CDefView@@AEAAHPEAUHMENU__@@@Z
    int _InitGroupByMenu(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitSortByMenu@CDefView@@AEAAHPEAUHMENU__@@@Z
    int _InitSortByMenu(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitViewMenu@CDefView@@AEAAXPEAUHMENU__@@@Z
    void _InitViewMenu(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitViewMenuViews@CDefView@@AEAAXPEAUHMENU__@@@Z
    void _InitViewMenuViews(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeContextMenu@CDefView@@AEAAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFOEX@@@Z
    long _InvokeContextMenu(IContextMenu *, _CMINVOKECOMMANDINFOEX *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeContextMenuVerbOnSelection@CDefView@@AEAAJPEBDI@Z
    long _InvokeContextMenuVerbOnSelection(char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeContextMenuVerbOnSelectionWorker@CDefView@@AEAAJPEBDI@Z
    long _InvokeContextMenuVerbOnSelectionWorker(char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeCustomization@CDefView@@AEAAHXZ
    int _InvokeCustomization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeFilterOperation@CDefView@@AEAAJHW4FILTER_OPERATION_FLAGS@@@Z
    long _InvokeFilterOperation(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAutoArrange@CDefView@@AEAAHXZ
    int _IsAutoArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCollectionProvider@CDefView@@AEAAHXZ
    int _IsCollectionProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsGroupedAndSortedByItemDateSpecialCase@CDefView@@AEAAHPEAH@Z
    int _IsGroupedAndSortedByItemDateSpecialCase(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHostedInFrame@CDefView@@AEAAHXZ
    int _IsHostedInFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsInsertMarkView@CDefView@@AEAAHXZ
    int _IsInsertMarkView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsItemCountPending@CDefView@@AEAAHXZ
    int _IsItemCountPending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPositionableView@CDefView@@AEAAHXZ
    int _IsPositionableView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPositionedView@CDefView@@AEAAHXZ
    int _IsPositionedView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSearchOnTextFilter@CDefView@@AEAAHXZ
    int _IsSearchOnTextFilter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsUserLibraryRoot@CDefView@@AEAAHXZ
    int _IsUserLibraryRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsViewStacked@CDefView@@AEAAHXZ
    int _IsViewStacked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadPersistedHistory@CDefView@@AEAAJXZ
    long _LoadPersistedHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeViewMenu@CDefView@@AEAAXPEAUHMENU__@@0@Z
    void _MergeViewMenu(HMENU__*, HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveItems@CDefView@@AEAAJHPEBHHPEAH@Z
    long _MoveItems(int, int const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateTextFilter@CDefView@@AEAAJXZ
    long _NavigateTextFilter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateTextFilterWorker@CDefView@@AEAAJPEAU_ITEMIDLIST_ABSOLUTE@@K@Z
    long _NavigateTextFilterWorker(_ITEMIDLIST_ABSOLUTE *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateToColumnFilter@CDefView@@AEAAJAEBU_tagpropertykey@@PEAUIFilterCondition@@W4tagARRANGE_MODE@@H@Z
    long _NavigateToColumnFilter(_tagpropertykey const &, IFilterCondition *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnActivate@CDefView@@AEAAHI@Z
    int _OnActivate(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClipboardChange@CDefView@@AEAA_JXZ
    int64_t _OnClipboardChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCollectionCreated@CDefView@@AEAAJXZ
    long _OnCollectionCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCollectionStarted@CDefView@@AEAAJXZ
    long _OnCollectionStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnColumnsChanged@CDefView@@AEAAXW4COLUMN_CHANGED_FLAGS@@@Z
    void _OnColumnsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CDefView@@AEAA_J_K_J@Z
    int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContentsChanged@CDefView@@AEAAXW4CONTENTS_CHANGED_FLAGS@@@Z
    void _OnContentsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenu@CDefView@@AEAAX_J@Z
    void _OnContextMenu(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreate@CDefView@@AEAA_JPEAUHWND__@@@Z
    int64_t _OnCreate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDeactivate@CDefView@@AEAAHXZ
    int _OnDeactivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDefaultCommand@CDefView@@AEAAJXZ
    long _OnDefaultCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayedColumnsChanged@CDefView@@AEAAXW4COLUMN_CHANGED_FLAGS@@@Z
    void _OnDelayedColumnsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayedContentsChanged@CDefView@@AEAAXXZ
    void _OnDelayedContentsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayedFilterContents@CDefView@@AEAAXH@Z
    void _OnDelayedFilterContents(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayedSelectionChange@CDefView@@AEAAXXZ
    void _OnDelayedSelectionChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEnumDoneMessage@CDefView@@AEAAXXZ
    void _OnEnumDoneMessage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFolderFlagsChanged@CDefView@@AEAAHW4FOLDERFLAGS@@@Z
    int _OnFolderFlagsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitMenuPopup@CDefView@@AEAA_JPEAUHMENU__@@HH@Z
    int64_t _OnInitMenuPopup(HMENU__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemCountChanged@CDefView@@AEAAJXZ
    long _OnItemCountChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemCountDone@CDefView@@AEAAXXZ
    void _OnItemCountDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemMoved@CDefView@@AEAAXXZ
    void _OnItemMoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMenuMessage@CDefView@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _OnMenuMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSelectionOrFocusChanged@CDefView@@AEAAXXZ
    void _OnSelectionOrFocusChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSizeChanged@CDefView@@AEAA_JPEAUHWND__@@@Z
    int64_t _OnSizeChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnStateChange@CDefView@@AEAAJI@Z
    long _OnStateChange(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnThemeChange@CDefView@@AEAAXXZ
    void _OnThemeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWinIniChange@CDefView@@AEAAX_KPEBG@Z
    void _OnWinIniChange(uint64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWinIniChangeDesktop@CDefView@@AEAAX_KPEBG@Z
    void _OnWinIniChangeDesktop(uint64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaintErrMsg@CDefView@@AEAAXPEAUHWND__@@@Z
    void _PaintErrMsg(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistSingleSelection@CDefView@@AEAAXXZ
    void _PersistSingleSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionSelectedItems@CDefView@@AEAAXHHH@Z
    void _PositionSelectedItems(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessDelayActivationWorker@CDefView@@AEAAXXZ
    void _ProcessDelayActivationWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropagateOnViewChange@CDefView@@AEAAXKJ@Z
    void _PropagateOnViewChange(unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReInitialize@CDefView@@AEAAJXZ
    long _ReInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshView@CDefView@@AEAAJW4UPDATE_FLAGS@@@Z
    long _RefreshView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterWindow@CDefView@@AEAAXXZ
    void _RegisterWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseCurrentCollection@CDefView@@AEAAXXZ
    void _ReleaseCurrentCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReloadItems@CDefView@@AEAAJW4UPDATE_FLAGS@@@Z
    long _ReloadItems(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReloadSettings@CDefView@@AEAAXW4UPDATE_FLAGS@@@Z
    void _ReloadSettings(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReloadView@CDefView@@AEAAJW4UPDATE_FLAGS@@@Z
    long _ReloadView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveCopyHook@CDefView@@AEAAXXZ
    void _RemoveCopyHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RenameSelection@CDefView@@AEAAJPEAUIShellItemArray@@PEBG@Z
    long _RenameSelection(IShellItemArray *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReportDevirtualizationSQMData@CDefView@@AEAAXW4SQM_DEVIRTUALIZATION_SOURCE@@@Z
    void _ReportDevirtualizationSQMData(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SameViewMoveIcons@CDefView@@AEAAXXZ
    void _SameViewMoveIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchOnTextFilter@CDefView@@AEAAJXZ
    long _SearchOnTextFilter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchTargetNavigatesToSearch@CDefView@@AEAAHXZ
    int _SearchTargetNavigatesToSearch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectAndPosition@CDefView@@AEAAJPEBUtagLCITEM@@IPEAUtagPOINT@@@Z
    long _SelectAndPosition(tagLCITEM const *, unsigned int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectDelaySelectedItems@CDefView@@AEAAXH@Z
    void _SelectDelaySelectedItems(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectFromPreviousView@CDefView@@AEAAJPEAUIShellView@@@Z
    long _SelectFromPreviousView(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectionHasFolderJunction@CDefView@@AEAAHXZ
    int _SelectionHasFolderJunction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendPerfTrackFilters@CDefView@@AEAAXHAEBU_tagpropertykey@@@Z
    void _SendPerfTrackFilters(int, _tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBusyState@CDefView@@AEAAJH@Z
    long _SetBusyState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetEditMenus@CDefView@@AEAAXPEAUHMENU__@@@Z
    void _SetEditMenus(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocus@CDefView@@AEAAXXZ
    void _SetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItemCollection@CDefView@@AEAAJPEAUIItemCollection@@IW4UPDATE_FLAGS@@PEAVCEventResult@@@Z
    long _SetItemCollection(IItemCollection *, unsigned int, int, CEventResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItemPosition@CDefView@@AEAAXAEBUtagLCITEM@@HH@Z
    void _SetItemPosition(tagLCITEM const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMenusForShowingView@CDefView@@AEAAXPEAUHMENU__@@PEBIIH@Z
    void _SetMenusForShowingView(HMENU__*, unsigned int const *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPoints@CDefView@@AEAAXIPEBQEFBU_ITEMID_CHILD@@PEAUIDataObject@@@Z
    void _SetPoints(unsigned int, _ITEMID_CHILD & volatile * const *, IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTextFilter@CDefView@@AEAAJPEBG0W4SET_TEXT_FILTER_FLAGS@@@Z
    long _SetTextFilter(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTileViewProperties@CDefView@@AEAAJPEFBU_ITEMID_CHILD@@AEBU_tagpropertykey@@PEBG@Z
    long _SetTileViewProperties(_ITEMID_CHILD & volatile *, _tagpropertykey const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUpMenus@CDefView@@AEAAXI@Z
    void _SetUpMenus(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetViewColors@CDefView@@AEAAXXZ
    void _SetViewColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAddKnownFolder@CDefView@@AEAAHAEBU_GUID@@@Z
    int _ShouldAddKnownFolder(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAddTextFilterToLocation@CDefView@@AEAAHXZ
    int _ShouldAddTextFilterToLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldReparentItem@CDefView@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _ShouldReparentItem(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldSuppressCollection@CDefView@@AEAAHXZ
    int _ShouldSuppressCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowHideListView@CDefView@@AEAAJXZ
    long _ShowHideListView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowingView@CDefView@@AEAAHXZ
    int _ShowingView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopCollection@CDefView@@AEAAXXZ
    void _StopCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchToViewModeAndIconSize@CDefView@@AEAAXW4FOLDERVIEWMODE@@H@Z
    void _SwitchToViewModeAndIconSize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryModifyMenu@CDefView@@AEAAJPEAUIContextMenu@@HAEBU_GUID@@PEAPEAX@Z
    long _TryModifyMenu(IContextMenu *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnCheckMenuItems@CDefView@@AEAAXPEAUHMENU__@@@Z
    void _UnCheckMenuItems(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCollectionPriority@CDefView@@AEAAXXZ
    void _UpdateCollectionPriority();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateColors@CDefView@@AEAAXXZ
    void _UpdateColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateEnumerationFlags@CDefView@@AEAAXXZ
    void _UpdateEnumerationFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSortColumnArray@CDefView@@AEAAJAEBU_tagpropertykey@@HPEAUSORTCOLUMN@@IPEAI@Z
    long _UpdateSortColumnArray(_tagpropertykey const &, int, SORTCOLUMN *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTextFilter@CDefView@@AEAAXXZ
    void _UpdateTextFilter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UseItemsView@CDefView@@AEAAHXZ
    int _UseItemsView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ViewHasSubfolders@CDefView@@AEAAHXZ
    int _ViewHasSubfolders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ViewWindowSetFocus@CDefView@@AEAAXXZ
    void _ViewWindowSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WordwheelHasMeaningfullyChanged@CDefView@@AEAAHPEBG0@Z
    int _WordwheelHasMeaningfullyChanged(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ZoneCheck@CDefView@@AEAAJKK@Z
    long _ZoneCheck(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ZoneCheckFrame@CDefView@@AEAAJKH@Z
    long _ZoneCheckFrame(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DSAFreeDelaySelectCB@CDefView@@CAHPEAUSAP_ITEM@@PEAX@Z
    static int s_DSAFreeDelaySelectCB(SAP_ITEM *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CDefView@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ZonePreWarmCallback@CDefView@@CAKPEAX@Z
    static unsigned long s_ZonePreWarmCallback(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDefView@@EEAA@XZ
    virtual ~CDefView();
};
