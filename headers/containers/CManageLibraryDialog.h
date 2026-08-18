#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 39 member(s).
class CManageLibraryDialog {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CManageLibraryDialog@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CManageLibraryDialog@@QEAA@XZ
    CManageLibraryDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CManageLibraryDialog@@SAJPEAUIShellItem@@PEBG1W4LIBRARYMANAGEDIALOGOPTIONS@@PEAPEAVElement@DirectUI@@PEAUHINSTANCE__@@@Z
    static long Create(IShellItem *, unsigned short const *, unsigned short const *, int, ::DirectUI::Element * *, HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@CManageLibraryDialog@@UEAAXPEAVElement@DirectUI@@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CManageLibraryDialog@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDialog@CManageLibraryDialog@@SAJPEAUIShellItem@@PEAUHWND__@@PEBG2W4LIBRARYMANAGEDIALOGOPTIONS@@@Z
    static long ShowDialog(IShellItem *, HWND__*, unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetDefaultSaveLocationValue@CManageLibraryDialog@@UEAAJPEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long v_GetDefaultSaveLocationValue(_ITEMID_CHILD & volatile *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetDefaultSaveLocationValue@CManageLibraryDialog@@UEAAJPEFBU_ITEMID_CHILD@@K@Z
    virtual long v_SetDefaultSaveLocationValue(_ITEMID_CHILD & volatile *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManageLibraryDialog@@UEAA@XZ
    virtual ~CManageLibraryDialog();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommand@CManageLibraryDialog@@MEAA_J_K_J@Z
    virtual int64_t OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CManageLibraryDialog@@MEAA_J_K_J@Z
    virtual int64_t OnDestroy(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CManageLibraryDialog@@MEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetDlgCode@CManageLibraryDialog@@MEAAXPEAUtagMSG@@PEA_J@Z
    virtual void OnGetDlgCode(tagMSG *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHelp@CManageLibraryDialog@@MEAA_JXZ
    virtual int64_t OnHelp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitDialog@CManageLibraryDialog@@MEAA_J_K_J@Z
    virtual int64_t OnInitDialog(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DialogProc@CManageLibraryDialog@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DialogProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?v_ApplyViewSettings@CManageLibraryDialog@@MEAAJXZ
    virtual long v_ApplyViewSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AsyncUpdateSupportStatuses@CManageLibraryDialog@@MEAAJXZ
    virtual long v_AsyncUpdateSupportStatuses();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_EnableAddLocationButton@CManageLibraryDialog@@MEAAXH@Z
    virtual void v_EnableAddLocationButton(int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_EnableDefaultPublicSaveButton@CManageLibraryDialog@@MEAAXH@Z
    virtual void v_EnableDefaultPublicSaveButton(int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_EnableDefaultSaveButton@CManageLibraryDialog@@MEAAXH@Z
    virtual void v_EnableDefaultSaveButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_EnableRemoveLocationButton@CManageLibraryDialog@@MEAAXH@Z
    virtual void v_EnableRemoveLocationButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetEmptyStringResourceID@CManageLibraryDialog@@MEAAIXZ
    virtual unsigned int v_GetEmptyStringResourceID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetLibraryManagementEntryPoint@CManageLibraryDialog@@MEAA?AW4LIBRARY_ADD_LOCATION_ENTRY_POINTS@@XZ
    virtual int v_GetLibraryManagementEntryPoint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetParentWindow@CManageLibraryDialog@@MEAAPEAUHWND__@@XZ
    virtual HWND__* v_GetParentWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InitViewPropertiesForItem@CManageLibraryDialog@@MEAAJPEAUIShellItem@@@Z
    virtual long v_InitViewPropertiesForItem(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnLibraryChanged@CManageLibraryDialog@@MEAAXXZ
    virtual void v_OnLibraryChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetFocusAddLocationButton@CManageLibraryDialog@@MEAAXXZ
    virtual void v_SetFocusAddLocationButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMainElementWidth@CManageLibraryDialog@@AEAAXXZ
    void UpdateMainElementWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeKeyboardHook@CManageLibraryDialog@@AEAAXXZ
    void _InitializeKeyboardHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeLocations@CManageLibraryDialog@@AEAAJXZ
    long _InitializeLocations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MessageHookProc@CManageLibraryDialog@@CA_JH_K_J@Z
    static int64_t s_MessageHookProc(int, uint64_t, int64_t);
};
