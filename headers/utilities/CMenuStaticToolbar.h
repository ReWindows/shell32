#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 64 member(s).
class CMenuStaticToolbar {
public:
    class CMenuStaticData;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMenuStaticToolbar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMenuStaticToolbar@@QEAA@PEAVCMenuBand@@PEAUHMENU__@@PEAUHWND__@@IKH@Z
    CMenuStaticToolbar(CMenuBand *, HMENU__*, HWND__*, unsigned int, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateToolbar@CMenuStaticToolbar@@UEAAJPEAUHWND__@@@Z
    virtual long CreateToolbar(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenu@CMenuStaticToolbar@@UEAAJPEAPEAUHMENU__@@PEAPEAUHWND__@@PEAK@Z
    virtual long GetMenu(HMENU__* *, HWND__* *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectDDT@CMenuStaticToolbar@@UEAAJ_KAEBU_GUID@@PEAPEAX@Z
    virtual long GetObjectDDT(uint64_t, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CMenuStaticToolbar@@UEAAXPEAUtagSIZE@@@Z
    virtual void GetSize(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowsDDT@CMenuStaticToolbar@@UEAAJPEAPEAUHWND__@@0@Z
    virtual long GetWindowsDDT(HWND__* *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestDDT@CMenuStaticToolbar@@UEAAJIPEAUtagPOINT@@PEA_KPEAK@Z
    virtual long HitTestDDT(unsigned int, tagPOINT *, uint64_t *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CMenuStaticToolbar@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDropDDT@CMenuStaticToolbar@@UEAAJPEAUIDropTarget@@PEAUIDataObject@@PEAKU_POINTL@@2@Z
    virtual long OnDropDDT(IDropTarget *, IDataObject *, unsigned long *, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CMenuStaticToolbar@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMenuStaticToolbar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMenuStaticToolbar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenu@CMenuStaticToolbar@@UEAAJPEAUHMENU__@@PEAUHWND__@@K@Z
    virtual long SetMenu(HMENU__*, HWND__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CMenuStaticToolbar@@UEAAXPEAUHWND__@@@Z
    virtual void SetParent(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPos@CMenuStaticToolbar@@UEAAXPEAUtagSIZE@@PEAUtagRECT@@K@Z
    virtual void SetWindowPos(tagSIZE *, tagRECT *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?ShowAmpersand@CMenuStaticToolbar@@UEAAHXZ
    virtual int ShowAmpersand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Close@CMenuStaticToolbar@@UEAAXXZ
    virtual void v_Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InvalidateItem@CMenuStaticToolbar@@UEAAJPEAUtagSMDATA@@K@Z
    virtual long v_InvalidateItem(tagSMDATA *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnCustomDraw@CMenuStaticToolbar@@UEAA_JPEAUtagNMCUSTOMDRAWINFO@@@Z
    virtual int64_t v_OnCustomDraw(tagNMCUSTOMDRAWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnDeleteButton@CMenuStaticToolbar@@UEAAXPEAX@Z
    virtual void v_OnDeleteButton(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnEmptyToolbar@CMenuStaticToolbar@@UEAAXXZ
    virtual void v_OnEmptyToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SendMenuNotification@CMenuStaticToolbar@@UEAAXIH@Z
    virtual void v_SendMenuNotification(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Show@CMenuStaticToolbar@@UEAAXHH@Z
    virtual void v_Show(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_TrackingSubContextMenu@CMenuStaticToolbar@@UEAAHXZ
    virtual int v_TrackingSubContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UpdateButtons@CMenuStaticToolbar@@UEAAXH@Z
    virtual void v_UpdateButtons(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UpdateIconSize@CMenuStaticToolbar@@UEAAHIH@Z
    virtual int v_UpdateIconSize(unsigned int, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallCB@CMenuStaticToolbar@@IEAAJIK_K_J@Z
    long CallCB(unsigned int, unsigned long, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckSeparators@CMenuStaticToolbar@@IEAAXXZ
    void _CheckSeparators();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePager@CMenuStaticToolbar@@IEAAPEAUHWND__@@PEAU2@@Z
    HWND__* _CreatePager(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DefWindowProc@CMenuStaticToolbar@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t _DefWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillToolbar@CMenuStaticToolbar@@IEAAXXZ
    void _FillToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IDToData@CMenuStaticToolbar@@IEAAPEAVCMenuStaticData@1@H@Z
    WindissectOpaque * _IDToData(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Insert@CMenuStaticToolbar@@IEAAXHPEAUtagMENUITEMINFOW@@@Z
    void _Insert(int, tagMENUITEMINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAccelerator@CMenuStaticToolbar@@IEAA_JPEAUtagNMCHAR@@@Z
    int64_t _OnAccelerator(tagNMCHAR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnChange@CMenuStaticToolbar@@MEAAJPEBU_ITEMIDLIST_ABSOLUTE@@J00_J@Z
    virtual long _OnChange(_ITEMIDLIST_ABSOLUTE const *, long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenu@CMenuStaticToolbar@@IEAA_J_K_J@Z
    int64_t _OnContextMenu(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetDispInfo@CMenuStaticToolbar@@IEAAXPEAUtagNMHDR@@H@Z
    void _OnGetDispInfo(tagNMHDR *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHotItemChange@CMenuStaticToolbar@@MEAA_JPEAUtagNMTBHOTITEM@@@Z
    virtual int64_t _OnHotItemChange(tagNMTBHOTITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CMenuStaticToolbar@@MEAA_JPEAUtagNMHDR@@@Z
    virtual int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CallCBItem@CMenuStaticToolbar@@MEAAJHI_K_J@Z
    virtual long v_CallCBItem(int, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CreateTrackPopup@CMenuStaticToolbar@@MEAAJHAEBU_GUID@@PEAPEAX@Z
    virtual long v_CreateTrackPopup(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ExecItem@CMenuStaticToolbar@@MEAAJH@Z
    virtual long v_ExecItem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ForwardMouseMessage@CMenuStaticToolbar@@MEAAXI_K_J@Z
    virtual void v_ForwardMouseMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetDragOverButton@CMenuStaticToolbar@@MEAAHXZ
    virtual int v_GetDragOverButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetFlags@CMenuStaticToolbar@@MEAAKH@Z
    virtual unsigned long v_GetFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetInfoTip@CMenuStaticToolbar@@MEAAJHPEAGI@Z
    virtual long v_GetInfoTip(int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetState@CMenuStaticToolbar@@MEAAJHPEAUtagSMDATA@@@Z
    virtual long v_GetState(int, tagSMDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetSubMenu@CMenuStaticToolbar@@MEAAJHPEBU_GUID@@AEBU2@PEAPEAX@Z
    virtual long v_GetSubMenu(int, _GUID const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Refresh@CMenuStaticToolbar@@MEAAXXZ
    virtual void v_Refresh();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMenuStaticToolbar@@MEAA@XZ
    virtual ~CMenuStaticToolbar();
};
