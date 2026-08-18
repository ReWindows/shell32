#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 120 member(s).
class CPropertyControlBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPropertyControlBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustWindowRectPCB@CPropertyControlBase@@UEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long AdjustWindowRectPCB(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPropertyControlBase@@UEAAJPEAUHWND__@@PEBUtagRECT@@1H@Z
    virtual long Create(HWND__*, tagRECT const *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CPropertyControlBase@@UEAAJXZ
    virtual long Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayText@CPropertyControlBase@@UEAAJPEAPEAG@Z
    virtual long GetDisplayText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawFlags@CPropertyControlBase@@UEAAJPEAH@Z
    virtual long GetDrawFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CPropertyControlBase@@UEAAJPEAH@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormatFlags@CPropertyControlBase@@UEAAJPEAW4PROPDESC_FORMAT_FLAGS@@@Z
    virtual long GetFormatFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CPropertyControlBase@@UEAAJW4PROPCTL_RECT_TYPE@@PEAUHDC__@@PEBUtagSIZE@@PEAU4@@Z
    virtual long GetSize(int, HDC__*, tagSIZE const *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CPropertyControlBase@@UEAAJPEAH@Z
    virtual long GetState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTooltipInfo@CPropertyControlBase@@UEAAJPEAUHDC__@@PEBUtagSIZE@@PEAH@Z
    virtual long GetTooltipInfo(HDC__*, tagSIZE const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CPropertyControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetValue(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CPropertyControlBase@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVisibleContent@CPropertyControlBase@@UEAAJXZ
    virtual long HasVisibleContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPropertyControlBase@@UEAAJPEAUIUnknown@@W4tagPROPDESC_CONTROL_TYPE@@@Z
    virtual long Initialize(IUnknown *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?InvokeDefaultAction@CPropertyControlBase@@UEAAJXZ
    virtual long InvokeDefaultAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsModified@CPropertyControlBase@@UEAAJPEAH@Z
    virtual long IsModified(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CPropertyControlBase@@UEAAJXZ
    virtual long OnDPIChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPropertyControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPropertyControlBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CPropertyControlBase@@UEAAJHH@Z
    virtual long SetFlags(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFont@CPropertyControlBase@@UEAAJPEAUHFONT__@@@Z
    virtual long SetFont(HFONT__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFormatFlags@CPropertyControlBase@@UEAAJW4PROPDESC_FORMAT_FLAGS@@@Z
    virtual long SetFormatFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModified@CPropertyControlBase@@UEAAJH@Z
    virtual long SetModified(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CPropertyControlBase@@UEAAJPEBUtagRECT@@0@Z
    virtual long SetPosition(tagRECT const *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CPropertyControlBase@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextColor@CPropertyControlBase@@UEAAJK@Z
    virtual long SetTextColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CPropertyControlBase@@UEAAJPEAUIUnknown@@@Z
    virtual long SetValue(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowTheme@CPropertyControlBase@@UEAAJPEBG0@Z
    virtual long SetWindowTheme(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowlessParentWindow@CPropertyControlBase@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindowlessParentWindow(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?TranslateAcceleratorIO@CPropertyControlBase@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CPropertyControlBase@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?ValidationFailed@CPropertyControlBase@@UEAAJPEBG@Z
    virtual long ValidationFailed(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowlessDraw@CPropertyControlBase@@UEAAJPEAUHDC__@@PEBUtagRECT@@H@Z
    virtual long WindowlessDraw(HDC__*, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetWindow@CPropertyControlBase@@UEAAPEAUHWND__@@XZ
    virtual HWND__* v_GetWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnGetName@CPropertyControlBase@@UEAAJPEAPEAG@Z
    virtual long v_OnGetName(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnGetRole@CPropertyControlBase@@UEAAJXZ
    virtual long v_OnGetRole();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnGetValue@CPropertyControlBase@@UEAAJPEAPEAG@Z
    virtual long v_OnGetValue(unsigned short * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPropertyControlBase@@IEAA@HH@Z
    CPropertyControlBase(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccPropServices@CPropertyControlBase@@IEAAJPEAPEAUIAccPropServices@@@Z
    long GetAccPropServices(IAccPropServices * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFont@CPropertyControlBase@@IEAAPEAUHFONT__@@PEAU2@@Z
    HFONT__* GetFont(HFONT__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleExpandCollapse@CPropertyControlBase@@IEAAHPEAUHWND__@@I_K_JPEA_J@Z
    int HandleExpandCollapse(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActiveKeyDown@CPropertyControlBase@@IEAAHPEAUHWND__@@IHI@Z
    int OnActiveKeyDown(HWND__*, unsigned int, int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccName@CPropertyControlBase@@IEAAXPEAUHWND__@@@Z
    void SetAccName(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProvidedFont@CPropertyControlBase@@IEAAXPEAUHFONT__@@@Z
    void SetProvidedFont(HFONT__*);
    // Category: Method | Source: PE Export
    // Symbol: ?v_AdjustWindowRect@CPropertyControlBase@@MEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long v_AdjustWindowRect(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_AllowDrawBorders@CPropertyControlBase@@MEAAHH@Z
    virtual int v_AllowDrawBorders(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_BaseWindowProc@CPropertyControlBase@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_BaseWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?v_CanExpand@CPropertyControlBase@@MEAAHXZ
    virtual int v_CanExpand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DrawBorderAndAdjustRect@CPropertyControlBase@@MEAAXPEAUHDC__@@PEAUtagRECT@@H@Z
    virtual void v_DrawBorderAndAdjustRect(HDC__*, tagRECT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DrawContent@CPropertyControlBase@@MEAAJPEAUHDC__@@PEAUtagRECT@@HH@Z
    virtual long v_DrawContent(HDC__*, tagRECT *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_ExpandNow@CPropertyControlBase@@MEAAXPEAUHWND__@@H@Z
    virtual void v_ExpandNow(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetBorderSize@CPropertyControlBase@@MEAAXPEAU_MARGINS@@PEAUHDC__@@H@Z
    virtual void v_GetBorderSize(_MARGINS *, HDC__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetDrawClientRect@CPropertyControlBase@@MEAAXPEAUHWND__@@PEAUHDC__@@PEAUtagRECT@@@Z
    virtual void v_GetDrawClientRect(HWND__*, HDC__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetDrawTextFlags@CPropertyControlBase@@MEAAIHHPEAUHDC__@@@Z
    virtual unsigned int v_GetDrawTextFlags(int, int, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetInternalPadding@CPropertyControlBase@@MEAAXPEAUHWND__@@PEAUHDC__@@HPEAU_MARGINS@@@Z
    virtual void v_GetInternalPadding(HWND__*, HDC__*, int, _MARGINS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetTooltipMaxRect@CPropertyControlBase@@MEAAJPEAUHWND__@@PEAUtagRECT@@@Z
    virtual long v_GetTooltipMaxRect(HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_HasTooltip@CPropertyControlBase@@MEAAHXZ
    virtual int v_HasTooltip();
    // Category: Method | Source: PE Export
    // Symbol: ?v_IsExpanded@CPropertyControlBase@@MEAAHXZ
    virtual int v_IsExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsModified@CPropertyControlBase@@MEAAHXZ
    virtual int v_IsModified();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnBaseSetCursor@CPropertyControlBase@@MEAAHXZ
    virtual int v_OnBaseSetCursor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnReadOnlyToggle@CPropertyControlBase@@MEAAXH@Z
    virtual void v_OnReadOnlyToggle(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropertyControlBase@@MEAA@XZ
    virtual ~CPropertyControlBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BaseDrawContent@CPropertyControlBase@@AEAAJPEAUHDC__@@PEAUtagRECT@@HH@Z
    long _BaseDrawContent(HDC__*, tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBaseWindow@CPropertyControlBase@@AEAAJPEAUHWND__@@PEBUtagRECT@@@Z
    long _CreateBaseWindow(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DelayedExpand@CPropertyControlBase@@AEAAXPEAUHWND__@@H@Z
    void _DelayedExpand(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableTooltip@CPropertyControlBase@@AEAAXXZ
    void _EnableTooltip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCheckMouseTrackingTimer@CPropertyControlBase@@AEAAXPEAUHWND__@@@Z
    void _EnsureCheckMouseTrackingTimer(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBorderSize@CPropertyControlBase@@AEAAXPEAU_MARGINS@@PEAUHDC__@@H@Z
    void _GetBorderSize(_MARGINS *, HDC__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDelayedExpandMsg@CPropertyControlBase@@AEAAIXZ
    unsigned int _GetDelayedExpandMsg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSystemFont@CPropertyControlBase@@AEAAPEAUHFONT__@@XZ
    HFONT__* _GetSystemFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HookMouse@CPropertyControlBase@@AEAAHPEAUHWND__@@H@Z
    int _HookMouse(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MouseProc@CPropertyControlBase@@AEAA_JH_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z
    int64_t _MouseProc(int, uint64_t, tagMOUSEHOOKSTRUCTEX *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NeedToTrackMouse@CPropertyControlBase@@AEAAHPEAUHWND__@@@Z
    int _NeedToTrackMouse(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBaseKeyDown@CPropertyControlBase@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _OnBaseKeyDown(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBaseKillFocus@CPropertyControlBase@@AEAAXPEAUHWND__@@0@Z
    void _OnBaseKillFocus(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBaseNotify@CPropertyControlBase@@AEAA_JPEAUHWND__@@HPEAUtagNMHDR@@PEAH@Z
    int64_t _OnBaseNotify(HWND__*, int, tagNMHDR *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBaseSetFocus@CPropertyControlBase@@AEAAXPEAUHWND__@@0@Z
    void _OnBaseSetFocus(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBaseSize@CPropertyControlBase@@AEAAXPEAUHWND__@@IHH@Z
    void _OnBaseSize(HWND__*, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBaseThemeChanged@CPropertyControlBase@@AEAAXPEAUHWND__@@@Z
    void _OnBaseThemeChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTimer@CPropertyControlBase@@AEAAXPEAUHWND__@@_K_J@Z
    void _OnTimer(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDesiredState@CPropertyControlBase@@AEAAXHH@Z
    void _SetDesiredState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldDrawBorders@CPropertyControlBase@@AEAAHH@Z
    int _ShouldDrawBorders(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTooltip@CPropertyControlBase@@AEAAXXZ
    void _UpdateTooltip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_BaseWindowProc@CPropertyControlBase@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_BaseWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MouseProc@CPropertyControlBase@@CA_JH_K_J@Z
    static int64_t s_MouseProc(int, uint64_t, int64_t);
};
