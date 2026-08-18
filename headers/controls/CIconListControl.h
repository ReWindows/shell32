#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 56 member(s).
class CIconListControl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CIconListControl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIconListControl@@QEAA@XZ
    CIconListControl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTooltipInfo@CIconListControl@@UEAAJPEAUHDC__@@PEBUtagSIZE@@PEAH@Z
    virtual long GetTooltipInfo(HDC__*, tagSIZE const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVisibleContent@CIconListControl@@UEAAJXZ
    virtual long HasVisibleContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CIconListControl@@UEAAJXZ
    virtual long OnDPIChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CIconListControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CIconListControl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconDisplayLimit@CIconListControl@@UEAAXH@Z
    virtual void SetIconDisplayLimit(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconDisplayMinimum@CIconListControl@@UEAAXH@Z
    virtual void SetIconDisplayMinimum(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconSize@CIconListControl@@UEAAXH@Z
    virtual void SetIconSize(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRTLLayout@CIconListControl@@UEAAXH@Z
    virtual void SetRTLLayout(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateSize@CIconListControl@@AEAAXXZ
    void CalculateSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyImagelists@CIconListControl@@AEAAXXZ
    void DestroyImagelists();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImagelists@CIconListControl@@AEAAJXZ
    long LoadImagelists();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddIconToList@CIconListControl@@AEAAJPEAUIImageList@@PEAG@Z
    long _AddIconToList(IImageList *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToolTipToList@CIconListControl@@AEAAXPEAUIPropertyDescription@@PEAUIPropertyStore@@@Z
    void _AddToolTipToList(IPropertyDescription *, IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToolTips@CIconListControl@@AEAAJXZ
    long _AddToolTips();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearValues@CIconListControl@@AEAAXXZ
    void _ClearValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyDescriptionListFromStore@CIconListControl@@AEAAJPEAUIPropertyStore@@PEAPEAUIPropertyDescriptionList@@PEAI@Z
    long _GetPropertyDescriptionListFromStore(IPropertyStore *, IPropertyDescriptionList * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyStoreFromValue@CIconListControl@@AEAAJPEAPEAUIPropertyStore@@@Z
    long _GetPropertyStoreFromValue(IPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeLists@CIconListControl@@AEAAJI@Z
    long _InitializeLists(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AdjustWindowRect@CIconListControl@@EEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long v_AdjustWindowRect(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_AllowDrawBorders@CIconListControl@@EEAAHH@Z
    virtual int v_AllowDrawBorders(int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_Cancel@CIconListControl@@EEAAXXZ
    virtual void v_Cancel();
    // Category: Method | Source: PE Export
    // Symbol: ?v_Commit@CIconListControl@@EEAAXXZ
    virtual void v_Commit();
    // Category: Method | Source: PE Export
    // Symbol: ?v_CreateActiveWindow@CIconListControl@@EEAAPEAUHWND__@@PEAU2@PEBUtagRECT@@@Z
    virtual HWND__* v_CreateActiveWindow(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DestroyActiveWindow@CIconListControl@@EEAAXXZ
    virtual void v_DestroyActiveWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DrawContent@CIconListControl@@EEAAJPEAUHDC__@@PEAUtagRECT@@HH@Z
    virtual long v_DrawContent(HDC__*, tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValue@CIconListControl@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetValue(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_HasTooltip@CIconListControl@@EEAAHXZ
    virtual int v_HasTooltip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetValue@CIconListControl@@EEAAJPEAUIUnknown@@@Z
    virtual long v_SetValue(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIconListControl@@EEAA@XZ
    virtual ~CIconListControl();
};
