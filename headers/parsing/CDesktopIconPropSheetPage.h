#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CDesktopIconPropSheetPage {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDesktopIconPropSheetPage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CDesktopIconPropSheetPage@@QEAAJPEAUIPropertyBag@@PEAH1@Z
    long IsDirty(IPropertyBag *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadState@CDesktopIconPropSheetPage@@QEAAJPEAUIPropertyBag@@@Z
    long LoadState(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommand@CDesktopIconPropSheetPage@@QEAAXPEAUHWND__@@GG0@Z
    void OnCommand(HWND__*, unsigned short, unsigned short, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotify@CDesktopIconPropSheetPage@@QEAAXPEAUHWND__@@_KPEAUtagNMHDR@@@Z
    void OnNotify(HWND__*, uint64_t, tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingChange@CDesktopIconPropSheetPage@@QEAAXPEAUHWND__@@_J@Z
    void OnSettingChange(HWND__*, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDesktopIconPropSheetPage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDesktopIconPropSheetPage@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateListView@CDesktopIconPropSheetPage@@IEAAPEAUHWND__@@PEAU2@@Z
    HWND__* _CreateListView(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadDeskIconState@CDesktopIconPropSheetPage@@IEAAJPEAUIPropertyBag@@@Z
    long _LoadDeskIconState(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadIconState@CDesktopIconPropSheetPage@@IEAAJPEAUIPropertyBag@@@Z
    long _LoadIconState(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeDeskIconState@CDesktopIconPropSheetPage@@IEAAJPEAUIPropertyBag@@@Z
    long _MergeDeskIconState(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeIconState@CDesktopIconPropSheetPage@@IEAAJPEAUIPropertyBag@@@Z
    long _MergeIconState(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitDesktopOptionsUI@CDesktopIconPropSheetPage@@IEAAJPEAUHWND__@@@Z
    long _OnInitDesktopOptionsUI(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDesktopIconsUI@CDesktopIconPropSheetPage@@IEAAJPEAUHWND__@@@Z
    long _UpdateDesktopIconsUI(HWND__*);
};
