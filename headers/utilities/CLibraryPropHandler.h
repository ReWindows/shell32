#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 62 member(s).
class CLibraryPropHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPages@CLibraryPropHandler@@UEAAJP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPages(int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLibraryPropHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CLibraryPropHandler@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterFolder@CLibraryPropHandler@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long EnterFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FoundItem@CLibraryPropHandler@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long FoundItem(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CLibraryPropHandler@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLibraryPropHandler@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProgressDialog@CLibraryPropHandler@@UEAAJPEAPEAG0@Z
    virtual long InitializeProgressDialog(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LeaveFolder@CLibraryPropHandler@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long LeaveFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LibraryPropPageCallback@CLibraryPropHandler@@SAIPEAUHWND__@@IPEAU_PROPSHEETPAGEW@@@Z
    static unsigned int LibraryPropPageCallback(HWND__*, unsigned int, _PROPSHEETPAGEW *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLibraryPropHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLibraryPropHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ReplacePage@CLibraryPropHandler@@UEAAJIP6AHPEAU_PSP@@_J@Z1@Z
    virtual long ReplacePage(unsigned int, int ( *)(_PSP *, int64_t), int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkComplete@CLibraryPropHandler@@UEAAJJ@Z
    virtual long WalkComplete(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LibraryPropPageProcForPropPage@CLibraryPropHandler@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_LibraryPropPageProcForPropPage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetDefaultSaveLocationValue@CLibraryPropHandler@@UEAAJPEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long v_GetDefaultSaveLocationValue(_ITEMID_CHILD & volatile *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetDefaultSaveLocationValue@CLibraryPropHandler@@UEAAJPEFBU_ITEMID_CHILD@@K@Z
    virtual long v_SetDefaultSaveLocationValue(_ITEMID_CHILD & volatile *, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateSize@CLibraryPropHandler@@AEAAJXZ
    long _CalculateSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureExplorerBrowser@CLibraryPropHandler@@AEAAJXZ
    long _EnsureExplorerBrowser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillTemplateComboBox@CLibraryPropHandler@@AEAAXXZ
    void _FillTemplateComboBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIconColumnWidth@CLibraryPropHandler@@AEAAIXZ
    unsigned int _GetIconColumnWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDlgIconAndPath@CLibraryPropHandler@@AEAAXXZ
    void _InitDlgIconAndPath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsShared@CLibraryPropHandler@@AEAAHXZ
    int _IsShared();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LibraryPropPageProc@CLibraryPropHandler@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _LibraryPropPageProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnApply@CLibraryPropHandler@@AEAAJXZ
    long _OnApply();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInit@CLibraryPropHandler@@AEAAJXZ
    long _OnInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLibraryChanged@CLibraryPropHandler@@AEAAXXZ
    void _OnLibraryChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreLibraryLocations@CLibraryPropHandler@@AEAAJXZ
    long _RestoreLibraryLocations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDefaultSaveValue@CLibraryPropHandler@@AEAAJPEFBU_ITEMID_CHILD@@PEAUIPropertyStore@@AEBUtagPROPVARIANT@@@Z
    long _UpdateDefaultSaveValue(_ITEMID_CHILD & volatile *, IPropertyStore *, tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ApplyViewSettings@CLibraryPropHandler@@EEAAJXZ
    virtual long v_ApplyViewSettings();
    // Category: Method | Source: PE Export
    // Symbol: ?v_AsyncUpdateSupportStatuses@CLibraryPropHandler@@EEAAJXZ
    virtual long v_AsyncUpdateSupportStatuses();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_EnableAddLocationButton@CLibraryPropHandler@@EEAAXH@Z
    virtual void v_EnableAddLocationButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_EnableDefaultPublicSaveButton@CLibraryPropHandler@@EEAAXH@Z
    virtual void v_EnableDefaultPublicSaveButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_EnableDefaultSaveButton@CLibraryPropHandler@@EEAAXH@Z
    virtual void v_EnableDefaultSaveButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_EnableRemoveLocationButton@CLibraryPropHandler@@EEAAXH@Z
    virtual void v_EnableRemoveLocationButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetEmptyStringResourceID@CLibraryPropHandler@@EEAAIXZ
    virtual unsigned int v_GetEmptyStringResourceID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetLibraryManagementEntryPoint@CLibraryPropHandler@@EEAA?AW4LIBRARY_ADD_LOCATION_ENTRY_POINTS@@XZ
    virtual int v_GetLibraryManagementEntryPoint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetParentWindow@CLibraryPropHandler@@EEAAPEAUHWND__@@XZ
    virtual HWND__* v_GetParentWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InitViewPropertiesForItem@CLibraryPropHandler@@EEAAJPEAUIShellItem@@@Z
    virtual long v_InitViewPropertiesForItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnLibraryChanged@CLibraryPropHandler@@EEAAXXZ
    virtual void v_OnLibraryChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetFocusAddLocationButton@CLibraryPropHandler@@EEAAXXZ
    virtual void v_SetFocusAddLocationButton();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLibraryPropHandler@@EEAA@XZ
    virtual ~CLibraryPropHandler();
};
