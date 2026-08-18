#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class ImmersiveContextMenuHelper {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z
    long ApplyOwnerDrawToMenu(HMENU__*, HWND__*, tagPOINT *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z
    bool CanApplyOwnerDrawToMenu(HMENU__*, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z
    ContextMenuRenderingData * GetContextMenuDataForItem(HWND__*, uint64_t, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentThemeForOverrides@ImmersiveContextMenuHelper@@YAPEAXPEAUHWND__@@W4ImmersiveContextMenuOptions@@_N@Z
    void * GetCurrentThemeForOverrides(HWND__*, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z
    void HandleMergedMenus(HMENU__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveContextMenuOptions@@@Z
    long OverrideBackgroundColor(HMENU__*, HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z
    void RemoveOwnerDrawFromMenu(HMENU__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseDarkTheme@ImmersiveContextMenuHelper@@YA_NW4ImmersiveContextMenuOptions@@@Z
    bool ShouldUseDarkTheme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreContextMenuDataForItem@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@_KIPEAUContextMenuRenderingData@@@Z
    long StoreContextMenuDataForItem(HWND__*, uint64_t, unsigned int, ContextMenuRenderingData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z
    unsigned int _GetDpiForMonitorFromPoint(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagMENUITEMINFOW@@PEBGPEAUtagPOINT@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUContextMenuRenderingData@@W4ImmersiveContextMenuOptions@@PEAPEAU7@@Z
    long _GetRenderingDataForMenuItem(int, tagMENUITEMINFOW, unsigned short const *, tagPOINT *, WindissectOpaque &, ContextMenuRenderingData *, int, ContextMenuRenderingData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z
    void _RemoveOwnerDrawFromMenuWorker(HMENU__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveParentArrayFromWindow@ImmersiveContextMenuHelper@@YAXPEAUHWND__@@@Z
    void _RemoveParentArrayFromWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RetrieveParentArrayFromWindow@ImmersiveContextMenuHelper@@YAPEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUHWND__@@@Z
    WindissectOpaque * _RetrieveParentArrayFromWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StoreParentArrayOnWindow@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@PEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z
    long _StoreParentArrayOnWindow(HWND__*, WindissectOpaque *);
};
