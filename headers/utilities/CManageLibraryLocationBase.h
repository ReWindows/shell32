#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 46 member(s).
class CManageLibraryLocationBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CManageLibraryLocationBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIDsOfNames@CManageLibraryLocationBase@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfo@CManageLibraryLocationBase@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfoCount@CManageLibraryLocationBase@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PE Export
    // Symbol: ?IncludeObject@CManageLibraryLocationBase@@UEAAJPEAUIShellView@@PEFBU_ITEMID_CHILD@@@Z
    virtual long IncludeObject(IShellView *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CManageLibraryLocationBase@@QEAAJPEAUIShellItem@@@Z
    long Initialize(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CManageLibraryLocationBase@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentSaveLocation@CManageLibraryLocationBase@@QEAAHPEAUIShellItem@@W4SAVE_LOCATION_TYPE@@@Z
    int IsCurrentSaveLocation(IShellItem *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIthItemInView@CManageLibraryLocationBase@@QEAAHW4ITHITEM@@PEAUIShellItem@@@Z
    int IsIthItemInView(int, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDefaultCommand@CManageLibraryLocationBase@@UEAAJPEAUIShellView@@@Z
    virtual long OnDefaultCommand(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMoveUpDown@CManageLibraryLocationBase@@QEAAXH@Z
    void OnMoveUpDown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveItem@CManageLibraryLocationBase@@QEAAJPEAUIShellItem@@@Z
    long OnRemoveItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetDefaultSaveItem@CManageLibraryLocationBase@@QEAAJPEAUIShellItem@@W4SAVE_LOCATION_TYPE@@H@Z
    long OnSetDefaultSaveItem(IShellItem *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateChange@CManageLibraryLocationBase@@UEAAJPEAUIShellView@@K@Z
    virtual long OnStateChange(IShellView *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CManageLibraryLocationBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CManageLibraryLocationBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CManageLibraryLocationBase@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItemToView@CManageLibraryLocationBase@@IEAAJPEAUIShellItem@@@Z
    long _AddItemToView(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeDefaultSave@CManageLibraryLocationBase@@IEAAJPEAUIShellItem@@W4SAVE_LOCATION_TYPE@@H@Z
    long _ChangeDefaultSave(IShellItem *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConnectShellView@CManageLibraryLocationBase@@IEAAXXZ
    void _ConnectShellView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSaveLocation@CManageLibraryLocationBase@@IEAAXW4SAVE_LOCATION_TYPE@@@Z
    void _EnsureSaveLocation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultSaveType@CManageLibraryLocationBase@@IEAA?AW4DEFAULT_SAVE_TYPE@@XZ
    int _GetDefaultSaveType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetResultsFolderInfo@CManageLibraryLocationBase@@IEAAJPEAH0PEAPEAUIShellItemArray@@@Z
    long _GetResultsFolderInfo(int *, int *, IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItem@CManageLibraryLocationBase@@IEAAJPEAHPEAPEAUIShellItem@@@Z
    long _GetSelectedItem(int *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAddLocation@CManageLibraryLocationBase@@IEAAXXZ
    void _HandleAddLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAddLocationHelper@CManageLibraryLocationBase@@IEAAJPEAUIShellItem@@@Z
    long _HandleAddLocationHelper(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleRemoveLocation@CManageLibraryLocationBase@@IEAAXXZ
    void _HandleRemoveLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSetDefaultSave@CManageLibraryLocationBase@@IEAAXW4SAVE_LOCATION_TYPE@@@Z
    void _HandleSetDefaultSave(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasDefaultSaveInView@CManageLibraryLocationBase@@IEAAHW4SAVE_LOCATION_TYPE@@@Z
    int _HasDefaultSaveInView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsItemDefaultSave@CManageLibraryLocationBase@@IEAAHPEAUIShellItem@@W4SAVE_LOCATION_TYPE@@@Z
    int _IsItemDefaultSave(IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSetSaveLocationErrorMessage@CManageLibraryLocationBase@@IEAAJPEAUIShellItem@@W4SAVE_LOCATION_TYPE@@JPEAGI@Z
    long _LoadSetSaveLocationErrorMessage(IShellItem *, int, long, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDestroy@CManageLibraryLocationBase@@IEAAXXZ
    void _OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOK@CManageLibraryLocationBase@@IEAAJXZ
    long _OnOK();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateLocationExplorer@CManageLibraryLocationBase@@IEAAJXZ
    long _PopulateLocationExplorer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReportSQMEvents@CManageLibraryLocationBase@@IEAAXXZ
    void _ReportSQMEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItemDefaultSave@CManageLibraryLocationBase@@IEAAJPEAUIShellItem@@W4SAVE_LOCATION_TYPE@@H@Z
    long _SetItemDefaultSave(IShellItem *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUpExplorerBrowser@CManageLibraryLocationBase@@IEAAJXZ
    long _SetUpExplorerBrowser();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManageLibraryLocationBase@@MEAA@XZ
    virtual ~CManageLibraryLocationBase();
};
