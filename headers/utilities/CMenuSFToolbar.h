#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 145 member(s).
class CMenuSFToolbar {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMenuSFToolbar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMenuSFToolbar@@QEAA@PEAVCMenuBand@@PEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAUHKEY__@@K@Z
    CMenuSFToolbar(CMenuBand *, IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, HKEY__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateToolbar@CMenuSFToolbar@@UEAAJPEAUHWND__@@@Z
    virtual long CreateToolbar(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CMenuSFToolbar@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CMenuSFToolbar@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@CMenuSFToolbar@@UEAAXH@Z
    virtual void Expand(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectDDT@CMenuSFToolbar@@UEAAJ_KAEBU_GUID@@PEAPEAX@Z
    virtual long GetObjectDDT(uint64_t, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellFolder@CMenuSFToolbar@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetShellFolder(_ITEMIDLIST_ABSOLUTE * *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CMenuSFToolbar@@UEAAXPEAUtagSIZE@@@Z
    virtual void GetSize(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestDDT@CMenuSFToolbar@@UEAAJIPEAUtagPOINT@@PEA_KPEAK@Z
    virtual long HitTestDDT(unsigned int, tagPOINT *, uint64_t *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CMenuSFToolbar@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NegotiateSize@CMenuSFToolbar@@UEAAXXZ
    virtual void NegotiateSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChange@CMenuSFToolbar@@UEAAJJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual long OnChange(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDDT@CMenuSFToolbar@@UEAAJPEAUIDropTarget@@PEAUIDataObject@@PEAKU_POINTL@@2@Z
    virtual long OnDropDDT(IDropTarget *, IDataObject *, unsigned long *, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CMenuSFToolbar@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMenuSFToolbar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMenuSFToolbar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CMenuSFToolbar@@UEAAXPEAUHWND__@@@Z
    virtual void SetParent(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellFolder@CMenuSFToolbar@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetShellFolder(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CMenuSFToolbar@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPos@CMenuSFToolbar@@UEAAXPEAUtagSIZE@@PEAUtagRECT@@K@Z
    virtual void SetWindowPos(tagSIZE *, tagRECT *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?ShowAmpersand@CMenuSFToolbar@@UEAAHXZ
    virtual int ShowAmpersand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlyout@CMenuSFToolbar@@UEAAXXZ
    virtual void ShowFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Close@CMenuSFToolbar@@UEAAXXZ
    virtual void v_Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ForwardMouseMessage@CMenuSFToolbar@@UEAAXI_K_J@Z
    virtual void v_ForwardMouseMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHWND@CMenuSFToolbar@@UEAAPEAUHWND__@@XZ
    virtual HWND__* v_GetHWND();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InvalidateItem@CMenuSFToolbar@@UEAAJPEAUtagSMDATA@@K@Z
    virtual long v_InvalidateItem(tagSMDATA *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnDeleteButton@CMenuSFToolbar@@UEAAXPEAX@Z
    virtual void v_OnDeleteButton(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnEmptyToolbar@CMenuSFToolbar@@UEAAXXZ
    virtual void v_OnEmptyToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SendMenuNotification@CMenuSFToolbar@@UEAAXIH@Z
    virtual void v_SendMenuNotification(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Show@CMenuSFToolbar@@UEAAXHH@Z
    virtual void v_Show(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_TrackingSubContextMenu@CMenuSFToolbar@@UEAAHXZ
    virtual int v_TrackingSubContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UpdateButtons@CMenuSFToolbar@@UEAAXH@Z
    virtual void v_UpdateButtons(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UpdateIconSize@CMenuSFToolbar@@UEAAHIH@Z
    virtual int v_UpdateIconSize(unsigned int, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastIntelliMenuState@CMenuSFToolbar@@IEAAXPEFBU_ITEMID_CHILD@@H@Z
    void BroadcastIntelliMenuState(_ITEMID_CHILD & volatile *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallCB@CMenuSFToolbar@@IEAAJPEFBU_ITEMID_CHILD@@K_K_J@Z
    long CallCB(_ITEMID_CHILD & volatile *, unsigned long, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWorkerWindow@CMenuSFToolbar@@MEAAPEAUHWND__@@XZ
    virtual HWND__* CreateWorkerWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyToolbar@CMenuSFToolbar@@MEAAXXZ
    virtual void EmptyToolbar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWNDForUIObject@CMenuSFToolbar@@MEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWNDForUIObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddChevron@CMenuSFToolbar@@IEAAXXZ
    void _AddChevron();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddNSSeparator@CMenuSFToolbar@@IEAAXXZ
    void _AddNSSeparator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddOrderItemTB@CMenuSFToolbar@@MEAAPEAVIBDATA@@PEAUORDERITEM@@HPEAU_TBBUTTON@@@Z
    virtual IBDATA * _AddOrderItemTB(ORDERITEM *, int, _TBBUTTON *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddOtherItems@CMenuSFToolbar@@IEAAXXZ
    void _AddOtherItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPidl@CMenuSFToolbar@@MEAAHPEAU_ITEMID_CHILD@@KH@Z
    virtual int _AddPidl(_ITEMID_CHILD *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AfterLoad@CMenuSFToolbar@@MEAAJXZ
    virtual long _AfterLoad();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateItemData@CMenuSFToolbar@@MEAAPEAVIBDATA@@PEAUORDERITEM@@@Z
    virtual IBDATA * _CreateItemData(ORDERITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DefWindowProc@CMenuSFToolbar@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t _DefWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteItem@CMenuSFToolbar@@MEAAJH@Z
    virtual long _DeleteItem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Dropped@CMenuSFToolbar@@MEAAXHH@Z
    virtual void _Dropped(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumDone@CMenuSFToolbar@@MEAAXPEAU_DPA@@0@Z
    virtual void _EnumDone(_DPA *, _DPA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillDPA@CMenuSFToolbar@@MEAAXK@Z
    virtual void _FillDPA(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillToolbar@CMenuSFToolbar@@MEAAXXZ
    virtual void _FillToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FilterPidl@CMenuSFToolbar@@MEAAHPEFBU_ITEMID_CHILD@@@Z
    virtual int _FilterPidl(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindMinPromotedItems@CMenuSFToolbar@@IEAAXH@Z
    void _FindMinPromotedItems(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBitmap@CMenuSFToolbar@@MEAAHHPEAVIBDATA@@H@Z
    virtual int _GetBitmap(int, IBDATA *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenu@CMenuSFToolbar@@MEAAPEAUHMENU__@@PEAUIContextMenu@@HPEAH@Z
    virtual HMENU__* _GetContextMenu(IContextMenu *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolderForCreateViewObject@CMenuSFToolbar@@IEAAJHPEAPEAUIShellFolder@@@Z
    long _GetFolderForCreateViewObject(int, IShellFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIEnumIDList@CMenuSFToolbar@@MEAAJKPEAPEAUIEnumIDList@@@Z
    virtual long _GetIEnumIDList(unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInfo@CMenuSFToolbar@@IEAAJPEFBU_ITEMID_CHILD@@PEAUtagSMINFO@@@Z
    long _GetInfo(_ITEMID_CHILD & volatile *, tagSMINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetKey@CMenuSFToolbar@@IEAAPEAUHKEY__@@PEFBU_ITEMID_CHILD@@@Z
    HKEY__* _GetKey(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNSSeparatorPlacement@CMenuSFToolbar@@IEAAHXZ
    int _GetNSSeparatorPlacement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAboveNSSeparator@CMenuSFToolbar@@IEAAHPEFBU_ITEMID_CHILD@@@Z
    int _IsAboveNSSeparator(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsBelowNSSeparator@CMenuSFToolbar@@IEAAHH@Z
    int _IsBelowNSSeparator(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadOrderStream@CMenuSFToolbar@@MEAAJXZ
    virtual long _LoadOrderStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MarkItem@CMenuSFToolbar@@IEAAXH@Z
    void _MarkItem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeSeparator@CMenuSFToolbar@@IEAAXPEAU_DPA@@0@Z
    void _MergeSeparator(_DPA *, _DPA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyBulkOperation@CMenuSFToolbar@@MEAAXH@Z
    virtual void _NotifyBulkOperation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ObtainPIDLName@CMenuSFToolbar@@MEAAXPEFBU_ITEMID_CHILD@@PEAGH@Z
    virtual void _ObtainPIDLName(_ITEMID_CHILD & volatile *, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenu@CMenuSFToolbar@@MEAA_J_K_J@Z
    virtual int64_t _OnContextMenu(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDefaultContextCommand@CMenuSFToolbar@@MEAAXH@Z
    virtual void _OnDefaultContextCommand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDragBegin@CMenuSFToolbar@@MEAAXHK@Z
    virtual void _OnDragBegin(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDropDown@CMenuSFToolbar@@MEAA_JPEAUtagNMTOOLBARW@@@Z
    virtual int64_t _OnDropDown(tagNMTOOLBARW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotifyAdd@CMenuSFToolbar@@MEAAXPEFBU_ITEMID_CHILD@@KH@Z
    virtual void _OnFSNotifyAdd(_ITEMID_CHILD & volatile *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotifyRemove@CMenuSFToolbar@@MEAAXPEFBU_ITEMID_CHILD@@K@Z
    virtual void _OnFSNotifyRemove(_ITEMID_CHILD & volatile *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotifyRename@CMenuSFToolbar@@MEAAXPEFBU_ITEMID_CHILD@@0@Z
    virtual void _OnFSNotifyRename(_ITEMID_CHILD & volatile *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CMenuSFToolbar@@MEAA_JPEAUtagNMHDR@@@Z
    virtual int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnShowComplete@CMenuSFToolbar@@IEAAXXZ
    void _OnShowComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTimer@CMenuSFToolbar@@MEAA_J_K@Z
    virtual int64_t _OnTimer(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReBindToFolder@CMenuSFToolbar@@IEAAXPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _ReBindToFolder(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshInfo@CMenuSFToolbar@@IEAAXXZ
    void _RefreshInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshToolbar@CMenuSFToolbar@@IEAAXXZ
    void _RefreshToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveChevron@CMenuSFToolbar@@IEAAXXZ
    void _RemoveChevron();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveDescriptionFromDataObject@CMenuSFToolbar@@IEAAXXZ
    void _RemoveDescriptionFromDataObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveNSSeparator@CMenuSFToolbar@@IEAAXXZ
    void _RemoveNSSeparator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveOrderStream@CMenuSFToolbar@@MEAAJXZ
    virtual long _SaveOrderStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDirty@CMenuSFToolbar@@MEAAXH@Z
    virtual void _SetDirty(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetEmptyState@CMenuSFToolbar@@IEAAXH@Z
    void _SetEmptyState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFontMetrics@CMenuSFToolbar@@MEAAXXZ
    virtual void _SetFontMetrics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToolbarState@CMenuSFToolbar@@MEAAXXZ
    virtual void _SetToolbarState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TBStyleForPidl@CMenuSFToolbar@@MEAAJPEFBU_ITEMID_CHILD@@PEAK11PEAH@Z
    virtual long _TBStyleForPidl(_ITEMID_CHILD & volatile *, unsigned long *, unsigned long *, unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToolbarChanged@CMenuSFToolbar@@MEAAXXZ
    virtual void _ToolbarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IconCallback@CMenuSFToolbar@@KAXPEAXII@Z
    static void s_IconCallback(void *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CalcWidth@CMenuSFToolbar@@MEAAXPEAH0@Z
    virtual void v_CalcWidth(int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CallCBItem@CMenuSFToolbar@@MEAAJHI_K_J@Z
    virtual long v_CallCBItem(int, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?v_CreateTrackPopup@CMenuSFToolbar@@MEAAJHAEBU_GUID@@PEAPEAX@Z
    virtual long v_CreateTrackPopup(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DPAIndexToTBIndex@CMenuSFToolbar@@MEAAHH@Z
    virtual int v_DPAIndexToTBIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ExecItem@CMenuSFToolbar@@MEAAJH@Z
    virtual long v_ExecItem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetBKContextMenu@CMenuSFToolbar@@MEAAJPEAPEAUIContextMenu@@@Z
    virtual long v_GetBKContextMenu(IContextMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetContextMenuModifier@CMenuSFToolbar@@MEAAJPEAPEAUIContextMenu@@PEFBU_ITEMID_CHILD@@@Z
    virtual long v_GetContextMenuModifier(IContextMenu * *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetDragOverButton@CMenuSFToolbar@@MEAAHXZ
    virtual int v_GetDragOverButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetFlags@CMenuSFToolbar@@MEAAKH@Z
    virtual unsigned long v_GetFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetInfoTip@CMenuSFToolbar@@MEAAJHPEAGI@Z
    virtual long v_GetInfoTip(int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetState@CMenuSFToolbar@@MEAAJHPEAUtagSMDATA@@@Z
    virtual long v_GetState(int, tagSMDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetSubMenu@CMenuSFToolbar@@MEAAJHPEBU_GUID@@AEBU2@PEAPEAX@Z
    virtual long v_GetSubMenu(int, _GUID const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_NewItem@CMenuSFToolbar@@MEAAXPEFBU_ITEMID_CHILD@@@Z
    virtual void v_NewItem(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnCustomDraw@CMenuSFToolbar@@MEAA_JPEAUtagNMCUSTOMDRAWINFO@@@Z
    virtual int64_t v_OnCustomDraw(tagNMCUSTOMDRAWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnOpen@CMenuSFToolbar@@MEAAJHH@Z
    virtual long v_OnOpen(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Refresh@CMenuSFToolbar@@MEAAXXZ
    virtual void v_Refresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_TBIndexToDPAIndex@CMenuSFToolbar@@MEAAHH@Z
    virtual int v_TBIndexToDPAIndex(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMenuSFToolbar@@MEAA@XZ
    virtual ~CMenuSFToolbar();
};
