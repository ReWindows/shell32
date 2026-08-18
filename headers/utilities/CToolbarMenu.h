#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 29 member(s).
class CToolbarMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CToolbarMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CToolbarMenu@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CToolbarMenu@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CToolbarMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CToolbarMenu@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CallCBItem@CToolbarMenu@@UEAAJHI_K_J@Z
    virtual long v_CallCBItem(int, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Close@CToolbarMenu@@UEAAXXZ
    virtual void v_Close();
    // Category: Method | Source: PE Export
    // Symbol: ?v_CreateTrackPopup@CToolbarMenu@@UEAAJHAEBU_GUID@@PEAPEAX@Z
    virtual long v_CreateTrackPopup(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ExecItem@CToolbarMenu@@UEAAJH@Z
    virtual long v_ExecItem(int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_GetDragOverButton@CToolbarMenu@@UEAAHXZ
    virtual int v_GetDragOverButton();
    // Category: Method | Source: PE Export
    // Symbol: ?v_GetFlags@CToolbarMenu@@UEAAKH@Z
    virtual unsigned long v_GetFlags(int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_GetInfoTip@CToolbarMenu@@UEAAJHPEAGI@Z
    virtual long v_GetInfoTip(int, unsigned short *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_GetState@CToolbarMenu@@UEAAJHPEAUtagSMDATA@@@Z
    virtual long v_GetState(int, tagSMDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetSubMenu@CToolbarMenu@@UEAAJHPEBU_GUID@@AEBU2@PEAPEAX@Z
    virtual long v_GetSubMenu(int, _GUID const *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_Refresh@CToolbarMenu@@UEAAXXZ
    virtual void v_Refresh();
    // Category: Method | Source: PE Export
    // Symbol: ?v_SendMenuNotification@CToolbarMenu@@UEAAXIH@Z
    virtual void v_SendMenuNotification(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Show@CToolbarMenu@@UEAAXHH@Z
    virtual void v_Show(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_TrackingSubContextMenu@CToolbarMenu@@UEAAHXZ
    virtual int v_TrackingSubContextMenu();
    // Category: Method | Source: PE Export
    // Symbol: ?v_UpdateButtons@CToolbarMenu@@UEAAXH@Z
    virtual void v_UpdateButtons(int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_UpdateIconSize@CToolbarMenu@@UEAAHIH@Z
    virtual int v_UpdateIconSize(unsigned int, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateToolbar@CToolbarMenu@@MEAAJPEAUHWND__@@@Z
    virtual long CreateToolbar(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CToolbarMenu@@MEAAXPEAUtagSIZE@@@Z
    virtual void GetSize(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelMenu@CToolbarMenu@@IEAAXXZ
    void _CancelMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillToolbar@CToolbarMenu@@IEAAXXZ
    void _FillToolbar();
};
