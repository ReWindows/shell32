#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 96 member(s).
class CRatingsControl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRatingsControl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustWindowRectPCB@CRatingsControl@@UEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long AdjustWindowRectPCB(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRatingsControl@@QEAA@XZ
    CRatingsControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRatingsControl@@UEAAJPEAUHWND__@@PEBUtagRECT@@1H@Z
    virtual long Create(HWND__*, tagRECT const *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CRatingsControl@@UEAAJXZ
    virtual long Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayText@CRatingsControl@@UEAAJPEAPEAG@Z
    virtual long GetDisplayText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawFlags@CRatingsControl@@UEAAJPEAH@Z
    virtual long GetDrawFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CRatingsControl@@UEAAJPEAH@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormatFlags@CRatingsControl@@UEAAJPEAW4PROPDESC_FORMAT_FLAGS@@@Z
    virtual long GetFormatFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CRatingsControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CRatingsControl@@UEAAJW4PROPCTL_RECT_TYPE@@PEAUHDC__@@PEBUtagSIZE@@PEAU4@@Z
    virtual long GetSize(int, HDC__*, tagSIZE const *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CRatingsControl@@UEAAJPEAH@Z
    virtual long GetState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTooltipInfo@CRatingsControl@@UEAAJPEAUHDC__@@PEBUtagSIZE@@PEAH@Z
    virtual long GetTooltipInfo(HDC__*, tagSIZE const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CRatingsControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetValue(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CRatingsControl@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasVisibleContent@CRatingsControl@@UEAAJXZ
    virtual long HasVisibleContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRatingsControl@@UEAAJPEAUIUnknown@@W4tagPROPDESC_CONTROL_TYPE@@@Z
    virtual long Initialize(IUnknown *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?InvokeDefaultAction@CRatingsControl@@UEAAJXZ
    virtual long InvokeDefaultAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsModified@CRatingsControl@@UEAAJPEAH@Z
    virtual long IsModified(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CRatingsControl@@UEAAJXZ
    virtual long OnDPIChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRatingsControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRatingsControl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CRatingsControl@@UEAAJHH@Z
    virtual long SetFlags(int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFont@CRatingsControl@@UEAAJPEAUHFONT__@@@Z
    virtual long SetFont(HFONT__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFormatFlags@CRatingsControl@@UEAAJW4PROPDESC_FORMAT_FLAGS@@@Z
    virtual long SetFormatFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModified@CRatingsControl@@UEAAJH@Z
    virtual long SetModified(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CRatingsControl@@UEAAJPEBUtagRECT@@0@Z
    virtual long SetPosition(tagRECT const *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CRatingsControl@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTextColor@CRatingsControl@@UEAAJK@Z
    virtual long SetTextColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CRatingsControl@@UEAAJPEAUIUnknown@@@Z
    virtual long SetValue(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowTheme@CRatingsControl@@UEAAJPEBG0@Z
    virtual long SetWindowTheme(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowlessParentWindow@CRatingsControl@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindowlessParentWindow(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?TranslateAcceleratorIO@CRatingsControl@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CRatingsControl@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?ValidationFailed@CRatingsControl@@UEAAJPEBG@Z
    virtual long ValidationFailed(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowlessDraw@CRatingsControl@@UEAAJPEAUHDC__@@PEBUtagRECT@@H@Z
    virtual long WindowlessDraw(HDC__*, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetWindow@CRatingsControl@@UEAAPEAUHWND__@@XZ
    virtual HWND__* v_GetWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnGetDescription@CRatingsControl@@UEAAJPEAPEAG@Z
    virtual long v_OnGetDescription(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnGetHelp@CRatingsControl@@UEAAJPEAPEAG@Z
    virtual long v_OnGetHelp(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnGetName@CRatingsControl@@UEAAJPEAPEAG@Z
    virtual long v_OnGetName(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnGetRole@CRatingsControl@@UEAAJXZ
    virtual long v_OnGetRole();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnGetValue@CRatingsControl@@UEAAJPEAPEAG@Z
    virtual long v_OnGetValue(unsigned short * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateEditWindow@CRatingsControl@@AEAAJPEAUHWND__@@PEBUtagRECT@@@Z
    long _CreateEditWindow(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Draw@CRatingsControl@@AEAAXPEAUHDC__@@AEBURatingValue@@PEBUtagRECT@@H@Z
    void _Draw(HDC__*, RatingValue const &, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawEditStars@CRatingsControl@@AEAAXPEAUHDC__@@AEBURatingValue@@PEBUtagRECT@@H@Z
    void _DrawEditStars(HDC__*, RatingValue const &, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawRestStars@CRatingsControl@@AEAAXPEAUHDC__@@AEBURatingValue@@PEBUtagRECT@@H@Z
    void _DrawRestStars(HDC__*, RatingValue const &, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EditWindowProc@CRatingsControl@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _EditWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCheckMouseTrackingTimer@CRatingsControl@@AEAAXPEAUHWND__@@@Z
    void _EnsureCheckMouseTrackingTimer(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStarsFromPoint@CRatingsControl@@AEAAHHH@Z
    int _GetStarsFromPoint(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KeyDownSetStars@CRatingsControl@@AEAAXH@Z
    void _KeyDownSetStars(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NeedToTrackMouse@CRatingsControl@@AEAAHPEAUHWND__@@@Z
    int _NeedToTrackMouse(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEraseBackground@CRatingsControl@@AEAA_JPEAUHWND__@@PEAUHDC__@@@Z
    int64_t _OnEraseBackground(HWND__*, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyDown@CRatingsControl@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _OnKeyDown(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLButtonUp@CRatingsControl@@AEAAXPEAUHWND__@@HHI@Z
    void _OnLButtonUp(HWND__*, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseMove@CRatingsControl@@AEAAXPEAUHWND__@@HHI@Z
    void _OnMouseMove(HWND__*, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPaint@CRatingsControl@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _OnPaint(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReloadImages@CRatingsControl@@AEAAJXZ
    long _ReloadImages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDesiredState@CRatingsControl@@AEAAXHH@Z
    void _SetDesiredState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDrawIncr@CRatingsControl@@AEAAXPEAJ0PEBUtagRECT@@PEAUHDC__@@@Z
    void _SetDrawIncr(long *, long *, tagRECT const *, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStars@CRatingsControl@@AEAAJAEBURatingValue@@@Z
    long _SetStars(RatingValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetVisibleStars@CRatingsControl@@AEAAXAEBURatingValue@@@Z
    void _SetVisibleStars(RatingValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EditWindowProc@CRatingsControl@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_EditWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRatingsControl@@EEAA@XZ
    virtual ~CRatingsControl();
};
