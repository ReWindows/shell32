#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 102 member(s).
class CSFToolbar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyToolbar@CSFToolbar@@UEAAXXZ
    virtual void EmptyToolbar();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBandInfoSFB@CSFToolbar@@UEAAJPEAUBANDINFOSFB@@@Z
    virtual long GetBandInfoSFB(BANDINFOSFB *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCommandString@CSFToolbar@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectDDT@CSFToolbar@@UEAAJ_KAEBU_GUID@@PEAPEAX@Z
    virtual long GetObjectDDT(uint64_t, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowsDDT@CSFToolbar@@UEAAJPEAPEAUHWND__@@0@Z
    virtual long GetWindowsDDT(HWND__* *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestDDT@CSFToolbar@@UEAAJIPEAUtagPOINT@@PEA_KPEAK@Z
    virtual long HitTestDDT(unsigned int, tagPOINT *, uint64_t *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSFB@CSFToolbar@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long InitializeSFB(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CSFToolbar@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CSFToolbar@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChange@CSFToolbar@@UEAAJJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual long OnChange(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDDT@CSFToolbar@@UEAAJPEAUIDropTarget@@PEAUIDataObject@@PEAKU_POINTL@@2@Z
    virtual long OnDropDDT(IDropTarget *, IDataObject *, unsigned long *, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQIUpdateEnumDone@CSFToolbar@@UEAAJPEAUMN_BKGDENUMDONEDATA@@@Z
    virtual long OnQIUpdateEnumDone(MN_BKGDENUMDONEDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CSFToolbar@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CSFToolbar@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSFToolbar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBandInfoSFB@CSFToolbar@@UEAAJPEAUBANDINFOSFB@@@Z
    virtual long SetBandInfoSFB(BANDINFOSFB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellFolder@CSFToolbar@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetShellFolder(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSFToolbar@@IEAA@XZ
    CSFToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWorkerWindow@CSFToolbar@@MEAAPEAUHWND__@@XZ
    virtual HWND__* CreateWorkerWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWNDForUIObject@CSFToolbar@@MEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWNDForUIObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InlineDeleteButton@CSFToolbar@@IEAA_JH@Z
    int64_t InlineDeleteButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddOrderItemTB@CSFToolbar@@MEAAPEAVIBDATA@@PEAUORDERITEM@@HPEAU_TBBUTTON@@@Z
    virtual IBDATA * _AddOrderItemTB(ORDERITEM *, int, _TBBUTTON *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPidl@CSFToolbar@@MEAAHPEAU_ITEMID_CHILD@@KH@Z
    virtual int _AddPidl(_ITEMID_CHILD *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AfterLoad@CSFToolbar@@MEAAJXZ
    virtual long _AfterLoad();
    // Category: Method | Source: PE Export
    // Symbol: ?_AllowDropOnTitle@CSFToolbar@@MEAAHXZ
    virtual int _AllowDropOnTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateItemData@CSFToolbar@@MEAAPEAVIBDATA@@PEAUORDERITEM@@@Z
    virtual IBDATA * _CreateItemData(ORDERITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePager@CSFToolbar@@MEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* _CreatePager(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateToolbar@CSFToolbar@@MEAAJPEAUHWND__@@@Z
    virtual long _CreateToolbar(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DefWindowProc@CSFToolbar@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t _DefWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DefaultInsertIndex@CSFToolbar@@MEAAHXZ
    virtual int _DefaultInsertIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoContextMenu@CSFToolbar@@IEAA_JPEAUIContextMenu@@PEBUtagPOINT@@HPEBUtagRECT@@@Z
    int64_t _DoContextMenu(IContextMenu *, tagPOINT const *, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Dropped@CSFToolbar@@MEAAXHH@Z
    virtual void _Dropped(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumDone@CSFToolbar@@MEAAXPEAU_DPA@@0@Z
    virtual void _EnumDone(_DPA *, _DPA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillDPA@CSFToolbar@@MEAAXK@Z
    virtual void _FillDPA(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillToolbar@CSFToolbar@@MEAAXXZ
    virtual void _FillToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FilterAndMergeDPA@CSFToolbar@@IEAAXPEAU_DPA@@0@Z
    void _FilterAndMergeDPA(_DPA *, _DPA *);
    // Category: Method | Source: PE Export
    // Symbol: ?_FilterPidl@CSFToolbar@@MEAAHPEFBU_ITEMID_CHILD@@@Z
    virtual int _FilterPidl(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBitmap@CSFToolbar@@MEAAHHPEAVIBDATA@@H@Z
    virtual int _GetBitmap(int, IBDATA *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetButtonFromPidl@CSFToolbar@@IEAAJPEFBU_ITEMID_CHILD@@PEAUTBBUTTONINFOW@@PEAHPEAPEFBU2@@Z
    long _GetButtonFromPidl(_ITEMID_CHILD & volatile *, TBBUTTONINFOW *, int *, _ITEMID_CHILD & volatile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCommandID@CSFToolbar@@IEAAHXZ
    int _GetCommandID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenu@CSFToolbar@@MEAAPEAUHMENU__@@PEAUIContextMenu@@HPEAH@Z
    virtual HMENU__* _GetContextMenu(IContextMenu *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenu@CSFToolbar@@MEAAPEAUHMENU__@@XZ
    virtual HMENU__* _GetContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIEnumIDList@CSFToolbar@@MEAAJKPEAPEAUIEnumIDList@@@Z
    virtual long _GetIEnumIDList(unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSpecialCommand@CSFToolbar@@IEAAJPEAUIContextMenu@@PEBUtagPOINT@@HH@Z
    long _HandleSpecialCommand(IContextMenu *, tagPOINT const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IDToPibData@CSFToolbar@@IEAAPEAVIBDATA@@IPEAH@Z
    IBDATA * _IDToPibData(unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IDToPidl@CSFToolbar@@IEAAPEAU_ITEMID_CHILD@@IPEAH@Z
    _ITEMID_CHILD * _IDToPidl(unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IndexToID@CSFToolbar@@IEAAIH@Z
    unsigned int _IndexToID(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsChildID@CSFToolbar@@IEAAHPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    int _IsChildID(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?_IsQuickLaunchBand@CSFToolbar@@MEAAHXZ
    virtual int _IsQuickLaunchBand();
    // Category: Method | Source: PE Export
    // Symbol: ?_LoadOrderStream@CSFToolbar@@MEAAJXZ
    virtual long _LoadOrderStream();
    // Category: Method | Source: PE Export
    // Symbol: ?_NotifyBulkOperation@CSFToolbar@@MEAAXH@Z
    virtual void _NotifyBulkOperation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ObtainPIDLName@CSFToolbar@@MEAAXPEFBU_ITEMID_CHILD@@PEAGH@Z
    virtual void _ObtainPIDLName(_ITEMID_CHILD & volatile *, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnChange@CSFToolbar@@MEAAJPEBU_ITEMIDLIST_ABSOLUTE@@J00_J@Z
    virtual long _OnChange(_ITEMIDLIST_ABSOLUTE const *, long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?_OnCommand@CSFToolbar@@MEAA_J_K_J@Z
    virtual int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenu@CSFToolbar@@MEAA_J_K_J@Z
    virtual int64_t _OnContextMenu(uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?_OnCustomDraw@CSFToolbar@@MEAA_JPEAUtagNMCUSTOMDRAWINFO@@@Z
    virtual int64_t _OnCustomDraw(tagNMCUSTOMDRAWINFO *);
    // Category: Method | Source: PE Export
    // Symbol: ?_OnDefaultContextCommand@CSFToolbar@@MEAAXH@Z
    virtual void _OnDefaultContextCommand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDragBegin@CSFToolbar@@MEAAXHK@Z
    virtual void _OnDragBegin(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotify@CSFToolbar@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@J00_J@Z
    long _OnFSNotify(_ITEMIDLIST_ABSOLUTE const *, long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotifyAdd@CSFToolbar@@MEAAXPEFBU_ITEMID_CHILD@@KH@Z
    virtual void _OnFSNotifyAdd(_ITEMID_CHILD & volatile *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotifyRemove@CSFToolbar@@MEAAXPEFBU_ITEMID_CHILD@@K@Z
    virtual void _OnFSNotifyRemove(_ITEMID_CHILD & volatile *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotifyRename@CSFToolbar@@MEAAXPEFBU_ITEMID_CHILD@@0@Z
    virtual void _OnFSNotifyRename(_ITEMID_CHILD & volatile *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotifyUpdate@CSFToolbar@@MEAAXPEFBU_ITEMID_CHILD@@@Z
    virtual void _OnFSNotifyUpdate(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetDispInfo@CSFToolbar@@IEAAXPEAUtagNMHDR@@H@Z
    void _OnGetDispInfo(tagNMHDR *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHotItemChange@CSFToolbar@@MEAA_JPEAUtagNMTBHOTITEM@@@Z
    virtual int64_t _OnHotItemChange(tagNMTBHOTITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CSFToolbar@@MEAA_JPEAUtagNMHDR@@@Z
    virtual int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnRename@CSFToolbar@@IEAAJPEBUtagPOINT@@H@Z
    long _OnRename(tagPOINT const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?_OnTimer@CSFToolbar@@MEAA_J_K@Z
    virtual int64_t _OnTimer(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnToolTipsCreated@CSFToolbar@@MEAAXPEAUtagNMTOOLTIPSCREATED@@@Z
    virtual void _OnToolTipsCreated(tagNMTOOLTIPSCREATED *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Refresh@CSFToolbar@@IEAAXXZ
    void _Refresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshIcons@CSFToolbar@@IEAAXXZ
    void _RefreshIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterToolbar@CSFToolbar@@IEAAXXZ
    void _RegisterToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RememberOrder@CSFToolbar@@IEAAXXZ
    void _RememberOrder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveOrderStream@CSFToolbar@@MEAAJXZ
    virtual long _SaveOrderStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDirty@CSFToolbar@@MEAAXH@Z
    virtual void _SetDirty(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToolbarState@CSFToolbar@@MEAAXXZ
    virtual void _SetToolbarState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SortDPA@CSFToolbar@@IEAAXPEAU_DPA@@@Z
    void _SortDPA(_DPA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TBStyleForPidl@CSFToolbar@@MEAAJPEFBU_ITEMID_CHILD@@PEAK11PEAH@Z
    virtual long _TBStyleForPidl(_ITEMID_CHILD & volatile *, unsigned long *, unsigned long *, unsigned long *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?_ToolbarChanged@CSFToolbar@@MEAAXXZ
    virtual void _ToolbarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterToolbar@CSFToolbar@@IEAAXXZ
    void _UnregisterToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateButtons@CSFToolbar@@IEAAXXZ
    void _UpdateButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateIconSize@CSFToolbar@@MEAAHIH@Z
    virtual int _UpdateIconSize(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateShowText@CSFToolbar@@IEAAHH@Z
    int _UpdateShowText(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_NewItem@CSFToolbar@@KAXPEAXPEFBU_ITEMID_CHILD@@@Z
    static void s_NewItem(void *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CalcWidth@CSFToolbar@@MEAAXPEAH0@Z
    virtual void v_CalcWidth(int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DPAIndexToTBIndex@CSFToolbar@@MEAAHH@Z
    virtual int v_DPAIndexToTBIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetBKContextMenu@CSFToolbar@@MEAAJPEAPEAUIContextMenu@@@Z
    virtual long v_GetBKContextMenu(IContextMenu * *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_GetContextMenuModifier@CSFToolbar@@MEAAJPEAPEAUIContextMenu@@PEFBU_ITEMID_CHILD@@@Z
    virtual long v_GetContextMenuModifier(IContextMenu * *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_NewItem@CSFToolbar@@MEAAXPEFBU_ITEMID_CHILD@@@Z
    virtual void v_NewItem(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnOpen@CSFToolbar@@MEAAJHH@Z
    virtual long v_OnOpen(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_TBIndexToDPAIndex@CSFToolbar@@MEAAHH@Z
    virtual int v_TBIndexToDPAIndex(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSFToolbar@@MEAA@XZ
    virtual ~CSFToolbar();
};
