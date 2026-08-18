#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 33 member(s).
class CCalendarControl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCalendarControl@@QEAA@XZ
    CCalendarControl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CCalendarControl@@UEAAJW4PROPCTL_RECT_TYPE@@PEAUHDC__@@PEBUtagSIZE@@PEAU4@@Z
    virtual long GetSize(int, HDC__*, tagSIZE const *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CCalendarControl@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FormatDisplayText@CCalendarControl@@AEAAJAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@1PEAPEAG@Z
    long _FormatDisplayText(_tagpropertykey const &, tagPROPVARIANT const *, tagPROPVARIANT const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDateRangeFromCondition@CCalendarControl@@AEAAJPEAUICondition@@PEAU_SYSTEMTIME@@1@Z
    long _GetDateRangeFromCondition(ICondition *, _SYSTEMTIME *, _SYSTEMTIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDates@CCalendarControl@@AEAAJPEAU_SYSTEMTIME@@0PEAH@Z
    long _GetDates(_SYSTEMTIME *, _SYSTEMTIME *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropVariant@CCalendarControl@@AEAAJPEAUtagPROPVARIANT@@@Z
    long _GetPropVariant(tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropVariantRange@CCalendarControl@@AEAAJPEAUtagPROPVARIANT@@0PEAH@Z
    long _GetPropVariantRange(tagPROPVARIANT *, tagPROPVARIANT *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyValue@CCalendarControl@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetPropertyValue(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFocus@CCalendarControl@@AEAAXH@Z
    void _OnFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyDown@CCalendarControl@@AEAA_JI_J@Z
    int64_t _OnKeyDown(unsigned int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CCalendarControl@@AEAA_JPEAUtagNMHDR@@PEAH@Z
    int64_t _OnNotify(tagNMHDR *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDates@CCalendarControl@@AEAAXPEAUHWND__@@@Z
    void _SetDates(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFilterValue@CCalendarControl@@AEAAJPEAUIFilterCondition@@@Z
    long _SetFilterValue(IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SiteCommit@CCalendarControl@@AEAAXH@Z
    void _SiteCommit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SubclassProc@CCalendarControl@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_SubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AdjustWindowRect@CCalendarControl@@EEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long v_AdjustWindowRect(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_BaseWindowProc@CCalendarControl@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_BaseWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Cancel@CCalendarControl@@EEAAXXZ
    virtual void v_Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Commit@CCalendarControl@@EEAAXXZ
    virtual void v_Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CreateActiveWindow@CCalendarControl@@EEAAPEAUHWND__@@PEAU2@PEBUtagRECT@@@Z
    virtual HWND__* v_CreateActiveWindow(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DestroyActiveWindow@CCalendarControl@@EEAAXXZ
    virtual void v_DestroyActiveWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetBorderSize@CCalendarControl@@EEAAXPEAU_MARGINS@@PEAUHDC__@@H@Z
    virtual void v_GetBorderSize(_MARGINS *, HDC__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetDrawClientRect@CCalendarControl@@EEAAXPEAUHWND__@@PEAUHDC__@@PEAUtagRECT@@@Z
    virtual void v_GetDrawClientRect(HWND__*, HDC__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValue@CCalendarControl@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetValue(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsModified@CCalendarControl@@EEAAHXZ
    virtual int v_IsModified();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnBaseSetCursor@CCalendarControl@@EEAAHXZ
    virtual int v_OnBaseSetCursor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetValue@CCalendarControl@@EEAAJPEAUIUnknown@@@Z
    virtual long v_SetValue(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCalendarControl@@EEAA@XZ
    virtual ~CCalendarControl();
};
