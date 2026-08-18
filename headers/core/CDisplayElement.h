#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
class CDisplayElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDisplayElement@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CDisplayElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentSize@CDisplayElement@@UEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHotZone@CDisplayElement@@QEAAXHPEAUtagRECT@@@Z
    void GetHotZone(int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTargetInfo@CDisplayElement@@QEAAJPEAUIUnknown@@PEAUIPropertyDescription@@PEAUIPropertyDescriptionPriv@@W4TARGETINFO_DRAWING_OPTIONS_FLAGS@@@Z
    long InitializeTargetInfo(IUnknown *, IPropertyDescription *, IPropertyDescriptionPriv *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CDisplayElement@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CDisplayElement@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@CDisplayElement@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CDisplayElement@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@CDisplayElement@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CDisplayElement@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentValue@CDisplayElement@@QEAAJPEAUIUnknown@@@Z
    long SetCurrentValue(IUnknown *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddDisplayText@CDisplayElement@@IEAAJPEAUIPropertyDescription@@@Z
    long _AddDisplayText(IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddDrawControl@CDisplayElement@@IEAAJPEAUIPropertyDescription@@AEBU_GUID@@@Z
    long _AddDrawControl(IPropertyDescription *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFont@CDisplayElement@@IEAAXPEAUHDC__@@PEAPEAUHFONT__@@PEAPEAVFontCache@DirectUI@@@Z
    void _InitFont(HDC__*, HFONT__* *, ::DirectUI::FontCache * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetThemeOnControl@CDisplayElement@@IEAAXPEAVValue@DirectUI@@@Z
    void _SetThemeOnControl(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UninitFont@CDisplayElement@@IEAAXPEAUHDC__@@PEAUHFONT__@@PEAVFontCache@DirectUI@@@Z
    void _UninitFont(HDC__*, HFONT__*, ::DirectUI::FontCache *);
};
