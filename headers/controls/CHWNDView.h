#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
// Base evidence: DirectUI::HWNDElement (likely; classinfo-template-instantiation).
class CHWNDView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTooltip@CHWNDView@@UEAAXPEAVElement@DirectUI@@K@Z
    virtual void ActivateTooltip(::DirectUI::Element *, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHWNDView@@QEAA@XZ
    CHWNDView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHWNDView@@SAJPEAUHWND__@@PEAVElement@DirectUI@@PEAKPEAPEAV34@@Z
    static long Create(HWND__*, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CHWNDView@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CHWNDView@@QEAAHPEAUtagMSG@@@Z
    int Navigate(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CHWNDView@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CHWNDView@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@CHWNDView@@UEAAXPEAVElement@DirectUI@@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@CHWNDView@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHWNDView@@UEAA@XZ
    virtual ~CHWNDView();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindAppropriateElement@CHWNDView@@IEAAPEAVElement@DirectUI@@PEAV23@PEAUHWND__@@@Z
    ::DirectUI::Element * _FindAppropriateElement(::DirectUI::Element *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldDoDefaultActionOnEnter@CHWNDView@@IEAA_NPEAVElement@DirectUI@@@Z
    bool _ShouldDoDefaultActionOnEnter(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FindInputObjectWithFocus@CHWNDView@@KAXPEAUIUnknown@@_J@Z
    static void s_FindInputObjectWithFocus(IUnknown *, int64_t);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentElement@CHWNDView@@CAPEAVElement@DirectUI@@PEAV23@H@Z
    static ::DirectUI::Element * GetAdjacentElement(::DirectUI::Element *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameForElement@CHWNDView@@CAPEAVElement@DirectUI@@PEAV23@@Z
    static ::DirectUI::Element * GetFrameForElement(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateWithF6@CHWNDView@@CA_NPEAVElement@DirectUI@@H@Z
    static bool NavigateWithF6(::DirectUI::Element *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTooltipTheme@CHWNDView@@AEAAXXZ
    void SetTooltipTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextScaleFontForTooltipWindow@CHWNDView@@AEAAXXZ
    void TextScaleFontForTooltipWindow();
};
