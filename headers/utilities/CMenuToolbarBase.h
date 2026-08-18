#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 69 member(s).
class CMenuToolbarBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMenuToolbarBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateToolbar@CMenuToolbarBase@@UEAAJPEAUHWND__@@@Z
    virtual long CreateToolbar(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyToolbar@CMenuToolbarBase@@QEAAXXZ
    void EmptyToolbar();
    // Category: Method | Source: PE Export
    // Symbol: ?Expand@CMenuToolbarBase@@UEAAXH@Z
    virtual void Expand(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenu@CMenuToolbarBase@@UEAAJPEAPEAUHMENU__@@PEAPEAUHWND__@@PEAK@Z
    virtual long GetMenu(HMENU__* *, HWND__* *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellFolder@CMenuToolbarBase@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetShellFolder(_ITEMIDLIST_ABSOLUTE * *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CMenuToolbarBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CMenuToolbarBase@@UEAAXPEAUtagSIZE@@@Z
    virtual void GetSize(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubMenu@CMenuToolbarBase@@QEAAJHPEBU_GUID@@AEBU2@PEAPEAX@Z
    long GetSubMenu(int, _GUID const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValidHotItem@CMenuToolbarBase@@QEAAHHHHK@Z
    int GetValidHotItem(int, int, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NegotiateSize@CMenuToolbarBase@@UEAAXXZ
    virtual void NegotiateSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CMenuToolbarBase@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopupClose@CMenuToolbarBase@@QEAAXXZ
    void PopupClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopupHelper@CMenuToolbarBase@@QEAAXHH@Z
    void PopupHelper(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopupOpen@CMenuToolbarBase@@QEAAJH@Z
    long PopupOpen(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionSubmenu@CMenuToolbarBase@@QEAAJH@Z
    long PositionSubmenu(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostPopup@CMenuToolbarBase@@QEAAXHHH@Z
    void PostPopup(int, int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMenuToolbarBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMenuToolbarBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHotItem@CMenuToolbarBase@@QEAAHHHHK@Z
    int SetHotItem(int, int, int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyboardCue@CMenuToolbarBase@@QEAAXXZ
    void SetKeyboardCue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenu@CMenuToolbarBase@@UEAAJPEAUHMENU__@@PEAUHWND__@@K@Z
    virtual long SetMenu(HMENU__*, HWND__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenuBandMetrics@CMenuToolbarBase@@QEAAXPEAVCMenuBandMetrics@@@Z
    void SetMenuBandMetrics(CMenuBandMetrics *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CMenuToolbarBase@@UEAAXPEAUHWND__@@@Z
    virtual void SetParent(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CMenuToolbarBase@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CMenuToolbarBase@@QEAAJPEBG@Z
    long SetTheme(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToTop@CMenuToolbarBase@@QEAAXH@Z
    void SetToTop(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPos@CMenuToolbarBase@@UEAAXPEAUtagSIZE@@PEAUtagRECT@@K@Z
    virtual void SetWindowPos(tagSIZE *, tagRECT *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?ShowAmpersand@CMenuToolbarBase@@UEAAHXZ
    virtual int ShowAmpersand();
    // Category: Method | Source: PE Export
    // Symbol: ?ShowFlyout@CMenuToolbarBase@@UEAAXXZ
    virtual void ShowFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Close@CMenuToolbarBase@@UEAAXXZ
    virtual void v_Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ForwardMouseMessage@CMenuToolbarBase@@UEAAXI_K_J@Z
    virtual void v_ForwardMouseMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?v_InvalidateItem@CMenuToolbarBase@@UEAAJPEAUtagSMDATA@@K@Z
    virtual long v_InvalidateItem(tagSMDATA *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnDeleteButton@CMenuToolbarBase@@UEAAXPEAX@Z
    virtual void v_OnDeleteButton(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnEmptyToolbar@CMenuToolbarBase@@UEAAXXZ
    virtual void v_OnEmptyToolbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Show@CMenuToolbarBase@@UEAAXHH@Z
    virtual void v_Show(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMenuToolbarBase@@UEAA@XZ
    virtual ~CMenuToolbarBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DefWindowProcMB@CMenuToolbarBase@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t _DefWindowProcMB(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?_DeleteItem@CMenuToolbarBase@@MEAAJH@Z
    virtual long _DeleteItem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawChevron@CMenuToolbarBase@@IEAAXPEAUHDC__@@PEAUtagRECT@@HH@Z
    void _DrawChevron(HDC__*, tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawMenuArrowGlyph@CMenuToolbarBase@@IEAAXPEAUHDC__@@PEBUtagRECT@@K@Z
    void _DrawMenuArrowGlyph(HDC__*, tagRECT const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawMenuGlyph@CMenuToolbarBase@@IEAAXPEAUHDC__@@PEAUHFONT__@@PEBUtagRECT@@DKPEBUtagSIZE@@@Z
    void _DrawMenuGlyph(HDC__*, HFONT__*, tagRECT const *, char, unsigned long, tagSIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DropDownOrExec@CMenuToolbarBase@@IEAA_JIH@Z
    int64_t _DropDownOrExec(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireEvent@CMenuToolbarBase@@IEAAXE@Z
    void _FireEvent(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlashChevron@CMenuToolbarBase@@MEAAXXZ
    virtual void _FlashChevron();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleObscuredItem@CMenuToolbarBase@@IEAAHH@Z
    int _HandleObscuredItem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitParentsTheme@CMenuToolbarBase@@IEAAXXZ
    void _InitParentsTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDropDown@CMenuToolbarBase@@MEAA_JPEAUtagNMTOOLBARW@@@Z
    virtual int64_t _OnDropDown(tagNMTOOLBARW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDupAccelerator@CMenuToolbarBase@@IEAA_JPEAUtagNMTBDUPACCELERATOR@@@Z
    int64_t _OnDupAccelerator(tagNMTBDUPACCELERATOR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHotItemChange@CMenuToolbarBase@@MEAA_JPEAUtagNMTBHOTITEM@@@Z
    virtual int64_t _OnHotItemChange(tagNMTBHOTITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKey@CMenuToolbarBase@@IEAAHHII@Z
    int _OnKey(int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CMenuToolbarBase@@MEAA_JPEAUtagNMHDR@@@Z
    virtual int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTimer@CMenuToolbarBase@@MEAA_J_K@Z
    virtual int64_t _OnTimer(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWrapAccelerator@CMenuToolbarBase@@IEAA_JPEAUtagNMTBWRAPACCELERATOR@@@Z
    int64_t _OnWrapAccelerator(tagNMTBWRAPACCELERATOR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWrapHotItem@CMenuToolbarBase@@IEAA_JPEBUtagNMTBWRAPHOTITEM@@@Z
    int64_t _OnWrapHotItem(tagNMTBWRAPHOTITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaintButton3D@CMenuToolbarBase@@IEAAXPEAUHDC__@@HPEBUtagRECT@@K@Z
    void _PaintButton3D(HDC__*, int, tagRECT const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PressBtn@CMenuToolbarBase@@IEAAXHH@Z
    void _PressBtn(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshTheme@CMenuToolbarBase@@IEAAXXZ
    void _RefreshTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFontMetrics@CMenuToolbarBase@@MEAAXXZ
    virtual void _SetFontMetrics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMenuBand@CMenuToolbarBase@@IEAAJPEAUIShellMenu@@@Z
    long _SetMenuBand(IShellMenu *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTimer@CMenuToolbarBase@@IEAAHH@Z
    int _SetTimer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToolbarState@CMenuToolbarBase@@MEAAXXZ
    virtual void _SetToolbarState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CalcWidth@CMenuToolbarBase@@MEAAXPEAH0@Z
    virtual void v_CalcWidth(int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnCustomDraw@CMenuToolbarBase@@MEAA_JPEAUtagNMCUSTOMDRAWINFO@@@Z
    virtual int64_t v_OnCustomDraw(tagNMCUSTOMDRAWINFO *);
};
