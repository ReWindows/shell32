#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 300 member(s).
class CListViewHost {
public:
    class CJustInTimeItemSink;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CListViewHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoSizeColumn@CListViewHost@@UEAAJAEBU_tagpropertykey@@H@Z
    virtual long AutoSizeColumn(_tagpropertykey const &, int);
    // Category: Method | Source: PE Export
    // Symbol: ?BeginGroupEdit@CListViewHost@@UEAAJHAEBU_GUID@@PEAPEAX@Z
    virtual long BeginGroupEdit(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSubItemEdit@CListViewHost@@UEAAJHHW4LV_EDIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z
    virtual long BeginSubItemEdit(int, int, int, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CListViewHost@@QEAA@XZ
    CListViewHost();
    // Category: Method | Source: PE Export
    // Symbol: ?Cancel@CListViewHost@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseAllGroups@CListViewHost@@UEAAJXZ
    virtual long CollapseAllGroups();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CListViewHost@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateControl@CListViewHost@@UEAAJPEAUHWND__@@PEAUIListControlHost@@PEAUIViewSettings@@@Z
    virtual long CreateControl(HWND__*, IListControlHost *, IViewSettings *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CListViewHost@@UEAAJXZ
    virtual long Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissEdit@CListViewHost@@UEAAJXZ
    virtual long DismissEdit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragSelectItem@CListViewHost@@UEAAJPEBUtagLCITEM@@@Z
    virtual long DragSelectItem(tagLCITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditItemLabel@CListViewHost@@UEAAJPEBUtagLCITEM@@PEBUtagPOINT@@@Z
    virtual long EditItemLabel(tagLCITEM const *, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableAlphaShadow@CListViewHost@@UEAAJH@Z
    virtual long EnableAlphaShadow(int);
    // Category: Method | Source: PE Export
    // Symbol: ?EndGroupEdit@CListViewHost@@UEAAJHHPEAUIPropertyControl@@@Z
    virtual long EndGroupEdit(int, int, IPropertyControl *);
    // Category: Method | Source: PE Export
    // Symbol: ?EndSubItemEdit@CListViewHost@@UEAAJHHHPEAUIPropertyControl@@@Z
    virtual long EndSubItemEdit(int, int, int, IPropertyControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisible@CListViewHost@@UEAAJAEBUtagLCITEM@@@Z
    virtual long EnsureVisible(tagLCITEM const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandAllGroups@CListViewHost@@UEAAJXZ
    virtual long ExpandAllGroups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@CListViewHost@@UEAAJPEAUIItem@@PEAUtagLCITEM@@@Z
    virtual long FindItem(IItem *, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItemAndIndex@CListViewHost@@UEAAJPEAUIItem@@PEAUtagLCITEM@@@Z
    virtual long FindItemAndIndex(IItem *, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishAndSaveBatchPositionChanges@CListViewHost@@UEAAX_N@Z
    virtual void FinishAndSaveBatchPositionChanges(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassID@CListViewHost@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CListViewHost@@UEAAJW4VPCOLORFLAGS@@PEAK@Z
    virtual long GetColor(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedItem@CListViewHost@@UEAAJPEAUtagLCITEM@@@Z
    virtual long GetFocusedItem(tagLCITEM *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFont@CListViewHost@@UEAAJPEAUtagLOGFONTW@@@Z
    virtual long GetFont(tagLOGFONTW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CListViewHost@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertMark@CListViewHost@@UEAAJPEAUtagLCITEM@@@Z
    virtual long GetInsertMark(tagLCITEM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertMarkRect@CListViewHost@@UEAAJPEAUtagRECT@@@Z
    virtual long GetInsertMarkRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CListViewHost@@UEAAJHPEAPEAUIItem@@@Z
    virtual long GetItem(int, IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@CListViewHost@@UEAAJW4tagLC_ITEM_SET_TYPE@@PEAI@Z
    virtual long GetItemCount(int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemGroup@CListViewHost@@UEAAJHHPEAH@Z
    virtual long GetItemGroup(int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemGroupCount@CListViewHost@@UEAAJHPEAH@Z
    virtual long GetItemGroupCount(int, int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItemHeight@CListViewHost@@UEAAJPEAH@Z
    virtual long GetItemHeight(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemInGroup@CListViewHost@@UEAAJHHPEAH@Z
    virtual long GetItemInGroup(int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemPosition@CListViewHost@@UEAAJHPEAUtagPOINT@@@Z
    virtual long GetItemPosition(int, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemPosition@CListViewHost@@UEAAJAEBUtagLCITEM@@PEAUtagPOINT@@@Z
    virtual long GetItemPosition(tagLCITEM const &, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemRect@CListViewHost@@UEAAJHPEAUtagRECT@@@Z
    virtual long GetItemRect(int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemSize@CListViewHost@@UEAAJPEAH0@Z
    virtual long GetItemSize(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemSpacing@CListViewHost@@UEAAJPEAH0@Z
    virtual long GetItemSpacing(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemState@CListViewHost@@UEAAJAEBUtagLCITEM@@PEAW4LC_ITEM_FLAGS@@@Z
    virtual long GetItemState(tagLCITEM const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItems@CListViewHost@@UEAAJW4tagLC_ITEM_SET_TYPE@@W4tagLC_ITEM_SET_ORDER@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetItems(int, int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextIndex@CListViewHost@@UEAAJHW4tagLC_NEXT_INDEX_STATE@@KPEAH@Z
    virtual long GetNextIndex(int, int, unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollingWindow@CListViewHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetScrollingWindow(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubItemControl@CListViewHost@@UEAAJHHAEBU_GUID@@PEAPEAX@Z
    virtual long GetSubItemControl(int, int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubItemTitle@CListViewHost@@UEAAJHPEAGH@Z
    virtual long GetSubItemTitle(int, unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransparentBackground@CListViewHost@@UEAAJPEAH@Z
    virtual long GetTransparentBackground(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleItemCount@CListViewHost@@UEAAJPEAI@Z
    virtual long GetVisibleItemCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CListViewHost@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GhostSelectedItems@CListViewHost@@UEAAJH@Z
    virtual long GhostSelectedItems(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CListViewHost@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestInsertMark@CListViewHost@@UEAAJPEBUtagPOINT@@PEAUtagLCITEM@@@Z
    virtual long HitTestInsertMark(tagPOINT const *, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestItem@CListViewHost@@UEAAJPEBUtagPOINT@@HPEAUtagLCITEM@@@Z
    virtual long HitTestItem(tagPOINT const *, int, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestItem@CListViewHost@@UEAAJUtagPOINT@@PEAH@Z
    virtual long HitTestItem(tagPOINT, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CListViewHost@@QEAAJPEAUIShellFolder2@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long Init(IShellFolder2*, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateEmptyText@CListViewHost@@UEAAJXZ
    virtual long InvalidateEmptyText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateTryHarder@CListViewHost@@UEAAJXZ
    virtual long InvalidateTryHarder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSelectionContextMenu@CListViewHost@@UEAAJH@Z
    virtual long InvokeSelectionContextMenu(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemToListViewIndex@CListViewHost@@QEAAHPEAUIItem@@@Z
    int ItemToListViewIndex(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapPoint@CListViewHost@@UEAAJW4tagLC_POINT_TYPE@@PEBUtagPOINT@@0PEAU3@@Z
    virtual long MapPoint(int, tagPOINT const *, int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapRect@CListViewHost@@UEAAJHPEAUHWND__@@PEAUtagRECT@@@Z
    virtual long MapRect(int, HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeSelectionContextMenu@CListViewHost@@UEAAJPEAUHMENU__@@HPEBUtagPOINT@@@Z
    virtual long MergeSelectionContextMenu(HMENU__*, int, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonClicked@CListViewHost@@UEAAJH_JPEAH@Z
    virtual long OnButtonClicked(int, int64_t, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCacheHint@CListViewHost@@UEAAJUtagLVITEMINDEX@@0@Z
    virtual long OnCacheHint(tagLVITEMINDEX, tagLVITEMINDEX);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancelled@CListViewHost@@UEAAJXZ
    virtual long OnCancelled();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancelled@CListViewHost@@UEAAJPEAUIItem@@@Z
    virtual long OnCancelled(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CListViewHost@@UEAAJIW4COLLECTION_CHANGE_STATE@@@Z
    virtual long OnCollectionChanged(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyButton@CListViewHost@@UEAAJH_J@Z
    virtual long OnDestroyButton(int, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?OnExplorerWindowReady@CListViewHost@@UEAAJXZ
    virtual long OnExplorerWindowReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetCountDone@CListViewHost@@UEAAJIW4COUNT_TYPE@@J@Z
    virtual long OnGetCountDone(unsigned int, int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageListChanged@CListViewHost@@UEAAJXZ
    virtual long OnImageListChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeVerb@CListViewHost@@UEAAJHPEBG@Z
    virtual long OnInvokeVerb(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CListViewHost@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@PEAUIPropertyKeyStore@@@Z
    virtual long OnItemChanged(int, IItem *, IPropertyKeyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanging@CListViewHost@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@@Z
    virtual long OnItemChanging(int, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMoved@CListViewHost@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemMoved(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTranslated@CListViewHost@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemTranslated(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@CListViewHost@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsAdded(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsDeleted@CListViewHost@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsDeleted(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPrepareDone@CListViewHost@@UEAAJIJ@Z
    virtual long OnPrepareDone(unsigned int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsChanged@CListViewHost@@UEAAJK@Z
    virtual long OnSettingsChanged(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsLoad@CListViewHost@@UEAAJPEAUIPropertyBag@@@Z
    virtual long OnSettingsLoad(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsSave@CListViewHost@@UEAAJPEAUIPropertyBag@@@Z
    virtual long OnSettingsSave(IPropertyBag *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUniqueLeafCountChanged@CListViewHost@@UEAAJXZ
    virtual long OnUniqueLeafCountChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnViewChanging@CListViewHost@@UEAAJW4tagLC_VIEW_CHANGING@@@Z
    virtual long OnViewChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionSelectedItemsFromMove@CListViewHost@@UEAAJAEBUtagPOINT@@00_N@Z
    virtual long PositionSelectedItemsFromMove(tagPOINT const &, tagPOINT const &, tagPOINT const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForBatchPositionChanges@CListViewHost@@UEAAX_N@Z
    virtual void PrepareForBatchPositionChanges(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CListViewHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CListViewHost@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawItem@CListViewHost@@UEAAJAEBUtagLCITEM@@@Z
    virtual long RedrawItem(tagLCITEM const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSettings@CListViewHost@@UEAAJXZ
    virtual long RefreshSettings();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CListViewHost@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?RequiresGetCountTask@CListViewHost@@UEAAJXZ
    virtual long RequiresGetCountTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CListViewHost@@UEAAJW4tagLC_SELECTION_MODE@@@Z
    virtual long Select(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CListViewHost@@UEAAJW4VPCOLORFLAGS@@K@Z
    virtual long SetColor(int, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFont@CListViewHost@@UEAAJPEBUtagLOGFONTW@@H@Z
    virtual long SetFont(tagLOGFONTW const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIDList@CListViewHost@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerFocus@CListViewHost@@UEAAJH@Z
    virtual long SetInnerFocus(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsertMark@CListViewHost@@UEAAJPEBUtagLCITEM@@@Z
    virtual long SetInsertMark(tagLCITEM const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemCollection@CListViewHost@@UEAAJPEAUIItemCollection@@@Z
    virtual long SetItemCollection(IItemCollection *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetItemHeight@CListViewHost@@UEAAJH@Z
    virtual long SetItemHeight(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemPosition@CListViewHost@@UEAAJHUtagPOINT@@@Z
    virtual long SetItemPosition(int, tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemPosition@CListViewHost@@UEAAJAEBUtagLCITEM@@PEBUtagPOINT@@@Z
    virtual long SetItemPosition(tagLCITEM const &, tagPOINT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemState@CListViewHost@@UEAAJAEBUtagLCITEM@@W4LC_ITEM_FLAGS@@1@Z
    virtual long SetItemState(tagLCITEM const &, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CListViewHost@@UEAAJPEBG0@Z
    virtual long SetTheme(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileWidth@CListViewHost@@UEAAJH@Z
    virtual long SetTileWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransparentBackground@CListViewHost@@UEAAJH@Z
    virtual long SetTransparentBackground(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWatermark@CListViewHost@@UEAAJPEAUHBITMAP__@@W4VPWATERMARKFLAGS@@@Z
    virtual long SetWatermark(HBITMAP__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorkAreasWithDPI@CListViewHost@@UEAAJPEAUWorkAreaWithDPI@@H@Z
    virtual long SetWorkAreasWithDPI(WorkAreaWithDPI *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenu@CListViewHost@@UEAAJPEBUtagPOINT@@@Z
    virtual long ShowContextMenu(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CListViewHost@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?UIActivateIO@CListViewHost@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseOnImagesChangedPerWorkAreas@CListViewHost@@AEAAJXZ
    long AdviseOnImagesChangedPerWorkAreas();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDesktopSorting@CListViewHost@@AEAAJXZ
    long ClearDesktopSorting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDPIForPoint@CListViewHost@@AEAAJAEBUtagPOINT@@PEAH@Z
    long GetDPIForPoint(tagPOINT const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageManagerForPosition@CListViewHost@@AEAAJAEBUtagPOINT@@AEBU_GUID@@PEAPEAX@Z
    long GetImageManagerForPosition(tagPOINT const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageManagerForWorkArea@CListViewHost@@AEAAJ_KAEBU_GUID@@PEAPEAX@Z
    long GetImageManagerForWorkArea(uint64_t, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemPositionInCollection@CListViewHost@@AEAAJPEAUIObjectCollection@@HPEAUtagPOINT@@@Z
    long GetItemPositionInCollection(IObjectCollection *, int, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalIconSizeAdjustedForDPI@CListViewHost@@AEAAIH@Z
    unsigned int GetPhysicalIconSizeAdjustedForDPI(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkAreasWithDPI@CListViewHost@@AEAAJPEA_KPEAPEAUtagLVWORKAREAWITHDPI@@@Z
    long GetWorkAreasWithDPI(uint64_t *, tagLVWORKAREAWITHDPI * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopMultipleWorkAreasAware@CListViewHost@@AEAA_NXZ
    bool IsDesktopMultipleWorkAreasAware();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopSpotlightIcon@CListViewHost@@AEAA_NH@Z
    bool IsDesktopSpotlightIcon(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopSpotlightIcon@CListViewHost@@AEAA_NPEAUIItem@@@Z
    bool IsDesktopSpotlightIcon(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopSpotlightIcon@CListViewHost@@AEAA_NPEAUtagNMLISTVIEW@@@Z
    bool IsDesktopSpotlightIcon(tagNMLISTVIEW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameAsPreviousWorkAreas@CListViewHost@@AEAA?B_NPEBUtagLVWORKAREAWITHDPI@@H@Z
    bool IsSameAsPreviousWorkAreas(tagLVWORKAREAWITHDPI const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CListViewHost@@AEAAXXZ
    void OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceItemWithLogicalDisplacement@CListViewHost@@AEAAJAEBUtagLCITEM@@AEBUtagPOINT@@1HAEAU3@@Z
    long PlaceItemWithLogicalDisplacement(tagLCITEM const &, tagPOINT const &, tagPOINT const &, int, tagPOINT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareImageManagersPerWorkArea@CListViewHost@@AEAAJXZ
    long PrepareImageManagersPerWorkArea();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawNow@CListViewHost@@AEAAXXZ
    void RedrawNow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadImageServices@CListViewHost@@AEAAJXZ
    long ReloadImageServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeImageListsPerWorkArea@CListViewHost@@AEAAJXZ
    long ResizeImageListsPerWorkArea();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultImageList@CListViewHost@@AEAAJPEAU_IMAGELIST@@@Z
    long SetDefaultImageList(_IMAGELIST *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconsOnlyPerWorkArea@CListViewHost@@AEAAJ_N@Z
    long SetIconsOnlyPerWorkArea(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageListForWorkArea@CListViewHost@@AEAAJ_KPEAU_IMAGELIST@@@Z
    long SetImageListForWorkArea(uint64_t, _IMAGELIST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenuForSpotlight@CListViewHost@@AEAAJHH@Z
    long ShowContextMenuForSpotlight(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SingleClickForSpotlight@CListViewHost@@AEAAXPEAUtagNMLISTVIEW@@@Z
    void SingleClickForSpotlight(tagNMLISTVIEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconSpacing@CListViewHost@@AEAAJXZ
    long UpdateIconSpacing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImagesPerWorkArea@CListViewHost@@AEAAJXZ
    long UpdateImagesPerWorkArea();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddColumnToListView@CListViewHost@@AEAAXAEBU_tagpropertykey@@II@Z
    void _AddColumnToListView(_tagpropertykey const &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddGroupToListView@CListViewHost@@AEAAJH@Z
    long _AddGroupToListView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddGroupsToListView@CListViewHost@@AEAAJI@Z
    long _AddGroupsToListView(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustColumnHeaderForViewMode@CListViewHost@@AEAAXII@Z
    void _AdjustColumnHeaderForViewMode(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AutoSizeColumns@CListViewHost@@AEAAXXZ
    void _AutoSizeColumns();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckStateToItemFlags@CListViewHost@@AEAA?AW4LC_ITEM_FLAGS@@I@Z
    int _CheckStateToItemFlags(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearArrangeFeedback@CListViewHost@@AEAAXXZ
    void _ClearArrangeFeedback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearGroupsFromListView@CListViewHost@@AEAAXXZ
    void _ClearGroupsFromListView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearVisibleItemCache@CListViewHost@@AEAAXXZ
    void _ClearVisibleItemCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CmpLeftToRightTopToBottom@CListViewHost@@CAHPEBH0_J@Z
    static int _CmpLeftToRightTopToBottom(int const *, int const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ColumnIndexToOrder@CListViewHost@@AEAAHH@Z
    int _ColumnIndexToOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ColumnOrderToIndex@CListViewHost@@AEAAHH@Z
    int _ColumnOrderToIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateGroupEntry@CListViewHost@@AEAAJPEAUIItem@@PEAUGROUP_ITEM_ENTRY@@@Z
    long _CreateGroupEntry(IItem *, GROUP_ITEM_ENTRY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisableGroupView@CListViewHost@@AEAAXXZ
    void _DisableGroupView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoColumnClicked@CListViewHost@@AEAAXI@Z
    void _DoColumnClicked(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoColumnHeaderMenu@CListViewHost@@AEAAXIPEBUtagPOINT@@@Z
    void _DoColumnHeaderMenu(unsigned int, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoColumnOverflowMenu@CListViewHost@@AEAAXIPEBUtagPOINT@@@Z
    void _DoColumnOverflowMenu(unsigned int, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoColumnsMenu@CListViewHost@@AEAAXPEBUtagPOINT@@@Z
    void _DoColumnsMenu(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableGroupView@CListViewHost@@AEAAXXZ
    void _EnableGroupView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndListViewDoneEvent@CListViewHost@@AEAAXXZ
    void _EndListViewDoneEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRealizedBatch@CListViewHost@@AEAAJPEAV?$CDPARelease@UIItem@@V?$CTContainer_PolicyRelease@UIItem@@@@@@@Z
    long _EnsureRealizedBatch(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandOrCollapseGroup@CListViewHost@@AEAAXHH@Z
    void _ExpandOrCollapseGroup(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillColumnsFromPropString@CListViewHost@@AEAAJPEBGQEAIQEAHPEAI@Z
    long _FillColumnsFromPropString(unsigned short const *, unsigned int * const, int * const, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FocusOnSomething@CListViewHost@@AEAAXXZ
    void _FocusOnSomething();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetColumnIconIndex@CListViewHost@@AEAAHAEBU_tagpropertykey@@@Z
    int _GetColumnIconIndex(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayInfo@CListViewHost@@AEAA_JPEAUtagLVDISPINFOW@@@Z
    int64_t _GetDisplayInfo(tagLVDISPINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDrawPropertyControlFlags@CListViewHost@@AEAAHAEBU_tagpropertykey@@@Z
    int _GetDrawPropertyControlFlags(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFocusedGroup@CListViewHost@@AEAAHXZ
    int _GetFocusedGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFormatDisplayFlagsForKey@CListViewHost@@AEAA?AW4PROPDESC_FORMAT_FLAGS@@AEBU_tagpropertykey@@@Z
    int _GetFormatDisplayFlagsForKey(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHost@CListViewHost@@AEAAJPEAPEAUIListControlHost@@@Z
    long _GetHost(IListControlHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIndexAndVersion@CListViewHost@@AEAAJPEAUIItem@@PEAI1@Z
    long _GetIndexAndVersion(IItem *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInfoTipText@CListViewHost@@AEAAJPEAUIItem@@PEBGPEAPEAG@Z
    long _GetInfoTipText(IItem *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItem@CListViewHost@@AEAAJIPEAPEAUIItem@@@Z
    long _GetItem(unsigned int, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemArray@CListViewHost@@AEAAJW4tagLC_ITEM_SET_TYPE@@W4tagLC_ITEM_SET_ORDER@@PEAV?$CDPARelease@UIItem@@V?$CTContainer_PolicyRelease@UIItem@@@@@@@Z
    long _GetItemArray(int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemAttributes@CListViewHost@@AEAAKPEAUIItem@@K@Z
    unsigned long _GetItemAttributes(IItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemCount@CListViewHost@@AEAAHW4tagLC_ITEM_SET_TYPE@@@Z
    int _GetItemCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemIndexArray@CListViewHost@@AEAAJW4tagLC_ITEM_SET_TYPE@@W4tagLC_ITEM_SET_ORDER@@PEAV?$CDSA@H@@@Z
    long _GetItemIndexArray(int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetKeyForListViewColumn@CListViewHost@@AEAAJHPEAU_tagpropertykey@@@Z
    long _GetKeyForListViewColumn(int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetListViewColumnCount@CListViewHost@@AEAAIXZ
    unsigned int _GetListViewColumnCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTilePropsForItem@CListViewHost@@AEAAJPEAUIItem@@PEAPEAG@Z
    long _GetTilePropsForItem(IItem *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVisibleItem@CListViewHost@@AEAAJHPEAPEAUIItem@@@Z
    long _GetVisibleItem(int, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVisibleSlotCount@CListViewHost@@AEAAHH@Z
    int _GetVisibleSlotCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleKeyDown@CListViewHost@@AEAAXPEBUtagLVKEYDOWN@@@Z
    void _HandleKeyDown(tagLVKEYDOWN const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTab@CListViewHost@@AEAAJPEAUHWND__@@@Z
    long _HandleTab(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HitTestItem@CListViewHost@@AEAAHPEBUtagPOINT@@H@Z
    int _HitTestItem(tagPOINT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IndexFromLCITEM@CListViewHost@@AEAAHAEBUtagLCITEM@@@Z
    int _IndexFromLCITEM(tagLCITEM const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitLVFooter@CListViewHost@@AEAAJPEAUIListViewFooter@@@Z
    long _InitLVFooter(IListViewFooter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertGroup@CListViewHost@@AEAAJIH@Z
    long _InsertGroup(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCollectionGrouped@CListViewHost@@AEAAHXZ
    int _IsCollectionGrouped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsMultiValueGrouped@CListViewHost@@AEAAHXZ
    int _IsMultiValueGrouped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPositionedView@CListViewHost@@AEAAHXZ
    int _IsPositionedView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ItemIndexToLCItem@CListViewHost@@AEAAJHPEAUtagLCITEM@@@Z
    long _ItemIndexToLCItem(int, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ItemStateToItemFlags@CListViewHost@@AEAA?AW4LC_ITEM_FLAGS@@I@Z
    int _ItemStateToItemFlags(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ItemToLVITEMINDEX@CListViewHost@@AEAAJHPEAUtagLVITEMINDEX@@@Z
    long _ItemToLVITEMINDEX(int, tagLVITEMINDEX *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LCItemToItemIndex@CListViewHost@@AEAAHPEBUtagLCITEM@@@Z
    int _LCItemToItemIndex(tagLCITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapSubItemToKey@CListViewHost@@AEAAJHPEAU_tagpropertykey@@@Z
    long _MapSubItemToKey(int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginLabelEdit@CListViewHost@@AEAA_JPEBUtagLVDISPINFOW@@@Z
    int64_t _OnBeginLabelEdit(tagLVDISPINFOW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginPropertyEdit@CListViewHost@@AEAAJHAEBU_tagpropertykey@@W4LV_EDIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z
    long _OnBeginPropertyEdit(int, _tagpropertykey const &, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCheckStateChange@CListViewHost@@AEAAXHPEAUtagNMLISTVIEW@@@Z
    void _OnCheckStateChange(int, tagNMLISTVIEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClearSelection@CListViewHost@@AEAAXXZ
    void _OnClearSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCollectionChanged@CListViewHost@@AEAAXXZ
    void _OnCollectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnColumnOrderChanged@CListViewHost@@AEAAXXZ
    void _OnColumnOrderChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayedGroupCollectionChanged@CListViewHost@@AEAAXXZ
    void _OnDelayedGroupCollectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEndLabelEdit@CListViewHost@@AEAA_JPEAUtagLVDISPINFOW@@@Z
    int64_t _OnEndLabelEdit(tagLVDISPINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFolderFlagsChanged@CListViewHost@@AEAAXW4FOLDERFLAGS@@@Z
    void _OnFolderFlagsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetInfoTip@CListViewHost@@AEAAXPEAUtagNMLVGETINFOTIPW@@@Z
    void _OnGetInfoTip(tagNMLVGETINFOTIPW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHdrNotify@CListViewHost@@AEAA_JPEAUtagNMHEADERW@@@Z
    int64_t _OnHdrNotify(tagNMHEADERW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnIdealImageUnavailable@CListViewHost@@AEAA_JPEAUtagNMLVASYNCDRAWN@@@Z
    int64_t _OnIdealImageUnavailable(tagNMLVASYNCDRAWN *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInfoTipReady@CListViewHost@@AEAAXPEAUIItem@@PEBG@Z
    void _OnInfoTipReady(IItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLVNotify@CListViewHost@@AEAA_JPEAUtagNMLISTVIEW@@@Z
    int64_t _OnLVNotify(tagNMLISTVIEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CListViewHost@@AEAA_JPEAUtagNMHDR@@PEAH@Z
    int64_t _OnNotify(tagNMHDR *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPostViewModeSwitch@CListViewHost@@AEAAXW4FOLDERVIEWMODE@@0@Z
    void _OnPostViewModeSwitch(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPreViewModeSwitch@CListViewHost@@AEAAXW4FOLDERVIEWMODE@@0@Z
    void _OnPreViewModeSwitch(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnScrollTimerExpired@CListViewHost@@AEAAXXZ
    void _OnScrollTimerExpired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSelectionChange@CListViewHost@@AEAAXHII@Z
    void _OnSelectionChange(int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnViewModeAndImageSizeChanged@CListViewHost@@AEAAXW4FOLDERVIEWMODE@@I@Z
    void _OnViewModeAndImageSizeChanged(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnVisibleColumnsChanged@CListViewHost@@AEAAXXZ
    void _OnVisibleColumnsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWinIniChange@CListViewHost@@AEAAX_KPEBG@Z
    void _OnWinIniChange(uint64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrimeCollection@CListViewHost@@AEAAJXZ
    long _PrimeCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrimeGroupCollection@CListViewHost@@AEAAJI@Z
    long _PrimeGroupCollection(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropVariantToText@CListViewHost@@AEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@PEAGH@Z
    long _PropVariantToText(_tagpropertykey const &, tagPROPVARIANT const &, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PruneVirtualizedItems@CListViewHost@@AEAAXXZ
    void _PruneVirtualizedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RedrawItem@CListViewHost@@AEAAXPEAUIItem@@@Z
    void _RedrawItem(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseCurrentCollection@CListViewHost@@AEAAXXZ
    void _ReleaseCurrentCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseImageServices@CListViewHost@@AEAAXXZ
    void _ReleaseImageServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveGroup@CListViewHost@@AEAAJH@Z
    long _RemoveGroup(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetColumnFormats@CListViewHost@@AEAAXKKH@Z
    void _SetColumnFormats(unsigned long, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIconSizeInternal@CListViewHost@@AEAAXI@Z
    void _SetIconSizeInternal(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItemPosition@CListViewHost@@AEAAXHHH@Z
    void _SetItemPosition(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetListViewAccName@CListViewHost@@AEAAXXZ
    void _SetListViewAccName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetRedraw@CListViewHost@@AEAAXH@Z
    void _SetRedraw(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTileViewInfo@CListViewHost@@AEAAXXZ
    void _SetTileViewInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetViewMode@CListViewHost@@AEAAXW4FOLDERVIEWMODE@@@Z
    void _SetViewMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowTryHarder@CListViewHost@@AEAAJPEAUIListViewFooter@@PEAUIObjectCollection@@I@Z
    long _ShowTryHarder(IListViewFooter *, IObjectCollection *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartListViewDoneEvent@CListViewHost@@AEAAXXZ
    void _StartListViewDoneEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchToViewModeAndIconSizeWorker@CListViewHost@@AEAAXW4FOLDERVIEWMODE@@0I@Z
    void _SwitchToViewModeAndIconSizeWorker(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncSelectionIndices@CListViewHost@@AEAAXXZ
    void _SyncSelectionIndices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterViewSettings@CListViewHost@@AEAAXXZ
    void _UnregisterViewSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAllGroupUI@CListViewHost@@AEAAXH@Z
    void _UpdateAllGroupUI(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateArrangeFeedback@CListViewHost@@AEAAXXZ
    void _UpdateArrangeFeedback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCachedItems@CListViewHost@@AEAAJHH@Z
    long _UpdateCachedItems(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFilterColumnUI@CListViewHost@@AEAAXXZ
    void _UpdateFilterColumnUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateGroupUI@CListViewHost@@AEAAXHH@Z
    void _UpdateGroupUI(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateListViewItemCount@CListViewHost@@AEAAXIW4UPDATEITEMS_FLAGS@@@Z
    void _UpdateListViewItemCount(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSelectionMode@CListViewHost@@AEAAXXZ
    void _UpdateSelectionMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateUnderlines@CListViewHost@@AEAAXXZ
    void _UpdateUnderlines();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ViewSubclassWndProc@CListViewHost@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _ViewSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ClearGroupItemEntry@CListViewHost@@CAHPEAUGROUP_ITEM_ENTRY@@PEAX@Z
    static int s_ClearGroupItemEntry(GROUP_ITEM_ENTRY *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ClearIndexedViewItemEntry@CListViewHost@@CAXPEAUINDEXED_VIEW_ITEM_ENTRY@@@Z
    static void s_ClearIndexedViewItemEntry(INDEXED_VIEW_ITEM_ENTRY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ClearViewItemEntry@CListViewHost@@CAHPEAUVIEW_ITEM_ENTRY@@PEAX@Z
    static int s_ClearViewItemEntry(VIEW_ITEM_ENTRY *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HeaderSubclassWndProc@CListViewHost@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_HeaderSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ListViewSubclassWndProc@CListViewHost@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_ListViewSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ViewSubclassWndProc@CListViewHost@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_ViewSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CListViewHost@@EEAA@XZ
    virtual ~CListViewHost();
};
