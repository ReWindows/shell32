#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 116 member(s).
class CMenuBand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMenuBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMenuBand@@QEAA@XZ
    CMenuBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeInitFlags@CMenuBand@@UEAAJKK@Z
    virtual long ChangeInitFlags(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CMenuBand@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CMenuBand@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoDefaultAction@CMenuBand@@UEAAJPEAUtagVARIANT@@@Z
    virtual long DoDefaultAction(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CMenuBand@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandInfo@CMenuBand@@UEAAJKKPEAUDESKBANDINFO@@@Z
    virtual long GetBandInfo(unsigned long, unsigned long, DESKBANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBottom@CMenuBand@@UEAAJPEAPEAVCMenuToolbarBase@@@Z
    virtual long GetBottom(CMenuToolbarBase * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassID@CMenuBand@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClient@CMenuBand@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetClient(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenu@CMenuBand@@UEAAJPEAPEAUHMENU__@@PEAPEAUHWND__@@PEAK@Z
    virtual long GetMenu(HMENU__* *, HWND__* *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenuInfo@CMenuBand@@UEAAJPEAPEAUIShellMenuCallback@@PEAI1PEAK@Z
    virtual long GetMenuInfo(IShellMenuCallback * *, unsigned int *, unsigned int *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMsgFilterCB@CMenuBand@@QEAA_JPEAUtagMSG@@H@Z
    int64_t GetMsgFilterCB(tagMSG *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentSite@CMenuBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetParentSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellFolder@CMenuBand@@UEAAJPEAKPEAPEAU_ITEMIDLIST_ABSOLUTE@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetShellFolder(unsigned long *, _ITEMIDLIST_ABSOLUTE * *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CMenuBand@@UEAAJPEAH000@Z
    virtual long GetState(int *, int *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CMenuBand@@UEAAJPEAUtagSMDATA@@@Z
    virtual long GetState(tagSMDATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubMenu@CMenuBand@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetSubMenu(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubMenu@CMenuBand@@UEAAJPEAUtagVARIANT@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetSubMenu(tagVARIANT *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTop@CMenuBand@@UEAAJPEAPEAVCMenuToolbarBase@@@Z
    virtual long GetTop(CMenuToolbarBase * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTracked@CMenuBand@@UEAAJPEAPEAVCMenuToolbarBase@@@Z
    virtual long GetTracked(CMenuToolbarBase * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CMenuBand@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CMenuBand@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMenuBand@@UEAAJPEAUIShellMenuCallback@@IIK@Z
    virtual long Initialize(IShellMenuCallback *, unsigned int, unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateItem@CMenuBand@@UEAAJPEAUtagSMDATA@@K@Z
    virtual long InvalidateItem(tagSMDATA *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CMenuBand@@UEAAJXZ
    virtual long IsEmpty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpanded@CMenuBand@@UEAAJXZ
    virtual long IsExpanded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMenuMessage@CMenuBand@@UEAAJPEAUtagMSG@@@Z
    virtual long IsMenuMessage(tagMSG *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CMenuBand@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?Load@CMenuBand@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPosRectChangeDB@CMenuBand@@UEAAJPEAUtagRECT@@@Z
    virtual long OnPosRectChangeDB(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelect@CMenuBand@@UEAAJK@Z
    virtual long OnSelect(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CMenuBand@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?Popup@CMenuBand@@UEAAJPEAU_POINTL@@PEAU_RECTL@@H@Z
    virtual long Popup(_POINTL *, _RECTL *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMenuBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CMenuBand@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMenuBand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeMenuBar@CMenuBand@@QEAAXXZ
    void ResizeMenuBar();
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CMenuBand@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClient@CMenuBand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetClient(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenu@CMenuBand@@UEAAJPEAUHMENU__@@PEAUHWND__@@K@Z
    virtual long SetMenu(HMENU__*, HWND__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenuToolbar@CMenuBand@@UEAAJPEAUIUnknown@@K@Z
    virtual long SetMenuToolbar(IUnknown *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinWidth@CMenuBand@@UEAAJH@Z
    virtual long SetMinWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoBorder@CMenuBand@@UEAAJH@Z
    virtual long SetNoBorder(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellFolder@CMenuBand@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAUHKEY__@@K@Z
    virtual long SetShellFolder(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, HKEY__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CMenuBand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSubMenu@CMenuBand@@UEAAJPEAUIMenuPopup@@H@Z
    virtual long SetSubMenu(IMenuPopup *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CMenuBand@@UEAAJPEBG@Z
    virtual long SetTheme(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToolbar@CMenuBand@@UEAAJPEAUHWND__@@K@Z
    virtual long SetToolbar(HWND__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrackMenuPopup@CMenuBand@@QEAAXPEAUIUnknown@@@Z
    void SetTrackMenuPopup(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTracked@CMenuBand@@QEAAHPEAVCMenuToolbarBase@@@Z
    int SetTracked(CMenuToolbarBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CMenuBand@@UEAAJH@Z
    virtual long ShowDW(int);
    // Category: Method | Source: PE Export
    // Symbol: ?TranslateAcceleratorIO@CMenuBand@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateMenuMessage@CMenuBand@@UEAAJPEAUtagMSG@@PEA_J@Z
    virtual long TranslateMenuMessage(tagMSG *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CMenuBand@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToolbar@CMenuBand@@AEAAJPEAVCMenuToolbarBase@@K@Z
    long _AddToolbar(CMenuToolbarBase *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallCB@CMenuBand@@AEAAJK_K_J@Z
    long _CallCB(unsigned long, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanAutoExpand@CMenuBand@@AEAAHXZ
    int _CanAutoExpand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelMode@CMenuBand@@AEAAXK@Z
    void _CancelMode(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnterMenuMode@CMenuBand@@AEAAJH@Z
    long _EnterMenuMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExitMenuMode@CMenuBand@@AEAAXH@Z
    void _ExitMenuMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFontMetrics@CMenuBand@@AEAAXXZ
    void _GetFontMetrics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAccelerators@CMenuBand@@AEAAJPEAUtagMSG@@@Z
    long _HandleAccelerators(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CMenuBand@@AEAAJK@Z
    long _Initialize(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnActivate@CMenuBand@@AEAAXPEAUtagMSG@@@Z
    void _OnActivate(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnExpandChange@CMenuBand@@AEAAXK@Z
    void _OnExpandChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSelectArrow@CMenuBand@@AEAAXH@Z
    void _OnSelectArrow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSysChar@CMenuBand@@AEAAJPEBUtagMSG@@H@Z
    long _OnSysChar(tagMSG const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessMenuPaneMessages@CMenuBand@@AEAAJPEBUtagMSG@@@Z
    long _ProcessMenuPaneMessages(tagMSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDefaultAutoExpandState@CMenuBand@@AEAAXXZ
    void _SetDefaultAutoExpandState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SiteSetSubMenu@CMenuBand@@AEAAJPEAUIMenuPopup@@H@Z
    long _SiteSetSubMenu(IMenuPopup *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubMenuOnSelect@CMenuBand@@AEAAJK@Z
    long _SubMenuOnSelect(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UIActivateIOAndHandleExpand@CMenuBand@@AEAAJHPEAUtagMSG@@H@Z
    long _UIActivateIOAndHandleExpand(int, tagMSG *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateButtons@CMenuBand@@AEAAXH@Z
    void _UpdateButtons(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMenuBand@@EEAA@XZ
    virtual ~CMenuBand();
};
