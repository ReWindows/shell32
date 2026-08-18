#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 88 member(s).
class CScopeDialog {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CScopeDialog@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CScopeDialog@@UEAAJPEAUIScopeDialogEvents@@@Z
    virtual long Advise(IScopeDialogEvents *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootItems@CScopeDialog@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetRootItems(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScope@CScopeDialog@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetScope(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubQueries@CScopeDialog@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSubQueries(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?IncludeObject@CScopeDialog@@UEAAJPEAUIShellView@@PEFBU_ITEMID_CHILD@@@Z
    virtual long IncludeObject(IShellView *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertRoot@CScopeDialog@@UEAAJPEAUIShellItem@@KKPEAUIShellItemFilter@@@Z
    virtual long InsertRoot(IShellItem *, unsigned long, unsigned long, IShellItemFilter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAfterContextMenu@CScopeDialog@@UEAAJPEAUIShellItem@@PEAUIContextMenu@@AEBU_GUID@@PEAPEAX@Z
    virtual long OnAfterContextMenu(IShellItem *, IContextMenu *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnAfterExpand@CScopeDialog@@UEAAJPEAUIShellItem@@@Z
    virtual long OnAfterExpand(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnBeforeContextMenu@CScopeDialog@@UEAAJPEAUIShellItem@@AEBU_GUID@@PEAPEAX@Z
    virtual long OnBeforeContextMenu(IShellItem *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnBeforeExpand@CScopeDialog@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeforeExpand(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeItemDelete@CScopeDialog@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeforeItemDelete(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeStateImageChange@CScopeDialog@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeforeStateImageChange(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginLabelEdit@CScopeDialog@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeginLabelEdit(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDefaultCommand@CScopeDialog@@UEAAJPEAUIShellView@@@Z
    virtual long OnDefaultCommand(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoDefaultAccessibilityAction@CScopeDialog@@UEAAJPEAUIShellItem@@@Z
    virtual long OnDoDefaultAccessibilityAction(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndLabelEdit@CScopeDialog@@UEAAJPEAUIShellItem@@@Z
    virtual long OnEndLabelEdit(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAccessibilityRole@CScopeDialog@@UEAAJPEAUIShellItem@@PEAUtagVARIANT@@@Z
    virtual long OnGetAccessibilityRole(IShellItem *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetDefaultAccessibilityAction@CScopeDialog@@UEAAJPEAUIShellItem@@PEAPEAG@Z
    virtual long OnGetDefaultAccessibilityAction(IShellItem *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetDefaultIconIndex@CScopeDialog@@UEAAJPEAUIShellItem@@PEAH1@Z
    virtual long OnGetDefaultIconIndex(IShellItem *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetToolTip@CScopeDialog@@UEAAJPEAUIShellItem@@PEAGH@Z
    virtual long OnGetToolTip(IShellItem *, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemAdded@CScopeDialog@@UEAAJPEAUIShellItem@@H@Z
    virtual long OnItemAdded(IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemClick@CScopeDialog@@UEAAJPEAUIShellItem@@KK@Z
    virtual long OnItemClick(IShellItem *, unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemDeleted@CScopeDialog@@UEAAJPEAUIShellItem@@H@Z
    virtual long OnItemDeleted(IShellItem *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemStateChanged@CScopeDialog@@UEAAJPEAUIShellItem@@KK@Z
    virtual long OnItemStateChanged(IShellItem *, unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemStateChanging@CScopeDialog@@UEAAJPEAUIShellItem@@KK@Z
    virtual long OnItemStateChanging(IShellItem *, unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnKeyboardInput@CScopeDialog@@UEAAJI_K_J@Z
    virtual long OnKeyboardInput(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyItemCommit@CScopeDialog@@UEAAJPEAUIShellItem@@@Z
    virtual long OnPropertyItemCommit(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSelectionChanged@CScopeDialog@@UEAAJPEAUIShellItemArray@@@Z
    virtual long OnSelectionChanged(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateChange@CScopeDialog@@UEAAJPEAUIShellView@@K@Z
    virtual long OnStateChange(IShellView *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CScopeDialog@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CScopeDialog@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CScopeDialog@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllRoots@CScopeDialog@@UEAAJXZ
    virtual long RemoveAllRoots();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRoot@CScopeDialog@@UEAAJPEAUIShellItem@@@Z
    virtual long RemoveRoot(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOptions@CScopeDialog@@UEAAJW4SCOPE_DIALOG_OPTIONS@@@Z
    virtual long SetOptions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScope@CScopeDialog@@UEAAJPEAUIScope@@@Z
    virtual long SetScope(IScope *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSubQueries@CScopeDialog@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSubQueries(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitle@CScopeDialog@@UEAAJPEBG@Z
    virtual long SetTitle(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIInfo@CScopeDialog@@UEAAJPEAUIScopeDialogUIInfo@@@Z
    virtual long SetUIInfo(IScopeDialogUIInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CScopeDialog@@UEAAJPEAUHWND__@@@Z
    virtual long Show(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CScopeDialog@@UEAAJXZ
    virtual long Unadvise();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItemToBasket@CScopeDialog@@AEAAJPEAUIShellItem@@@Z
    long _AddItemToBasket(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPathToTree@CScopeDialog@@AEAAJXZ
    long _AddPathToTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyCurrentScope@CScopeDialog@@AEAAJXZ
    long _ApplyCurrentScope();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyUIInfo@CScopeDialog@@AEAAXXZ
    void _ApplyUIInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearControls@CScopeDialog@@AEAAJXZ
    long _ClearControls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVirtualFolderRootItem@CScopeDialog@@AEAAJXZ
    long _CreateVirtualFolderRootItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisplayNewScope@CScopeDialog@@AEAAJXZ
    long _DisplayNewScope();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DlgProc@CScopeDialog@@AEAAHI_K_J@Z
    int _DlgProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EditWndProc@CScopeDialog@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _EditWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindItemInView@CScopeDialog@@AEAAJPEAUIFolderView2@@PEAUIShellItem@@PEAPEAU_ITEMID_CHILD@@@Z
    long _FindItemInView(IFolderView2*, IShellItem *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindTreeItem@CScopeDialog@@AEAAJPEAUIShellItem@@PEAPEAU2@@Z
    long _FindTreeItem(IShellItem *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropvarForExclusion@CScopeDialog@@AEAAJPEAUIShellItem@@0PEAUtagPROPVARIANT@@@Z
    long _GetPropvarForExclusion(IShellItem *, IShellItem *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSearchIDListPropStore@CScopeDialog@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetSearchIDListPropStore(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitExplorerBrowser@CScopeDialog@@AEAAJXZ
    long _InitExplorerBrowser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitTree@CScopeDialog@@AEAAJXZ
    long _InitTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeSubQueries@CScopeDialog@@AEAAJPEAUIShellItemArray@@@Z
    long _InitializeSubQueries(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsNetworkFolder@CScopeDialog@@AEAAHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    int _IsNetworkFolder(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadActionStrings@CScopeDialog@@AEAAJXZ
    long _LoadActionStrings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeItemVisible@CScopeDialog@@AEAAJPEAUIShellItem@@0@Z
    long _MakeItemVisible(IShellItem *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ModifyExclusion@CScopeDialog@@AEAAJW4PKA_FLAGS@@PEAUIShellItem@@PEAUIScopeItem@@@Z
    long _ModifyExclusion(int, IShellItem *, IScopeItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ModifyExclusionOnItem@CScopeDialog@@AEAAJW4PKA_FLAGS@@PEAUIFolderView2@@PEBU_ITEMID_CHILD@@UtagPROPVARIANT@@@Z
    long _ModifyExclusionOnItem(int, IFolderView2*, _ITEMID_CHILD const *, tagPROPVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDestroyDlg@CScopeDialog@@AEAAXXZ
    void _OnDestroyDlg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitDlg@CScopeDialog@@AEAAXXZ
    void _OnInitDlg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveAll@CScopeDialog@@AEAAJXZ
    long _RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveItemFromDataObjectsAndBasket@CScopeDialog@@AEAAJPEAUIShellItem@@PEAH@Z
    long _RemoveItemFromDataObjectsAndBasket(IShellItem *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveSelectedBasketItem@CScopeDialog@@AEAAJXZ
    long _RemoveSelectedBasketItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupColumns@CScopeDialog@@AEAAJPEAUIFolderView2@@@Z
    long _SetupColumns(IFolderView2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBasket@CScopeDialog@@AEAAJXZ
    long _UpdateBasket();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateChildren@CScopeDialog@@AEAAJPEAUIShellItem@@H@Z
    long _UpdateChildren(IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateScopeEnumAndBasket@CScopeDialog@@AEAAJH@Z
    long _UpdateScopeEnumAndBasket(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidatePath@CScopeDialog@@AEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    long _ValidatePath(unsigned short const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DlgProc@CScopeDialog@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EditWndProc@CScopeDialog@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_EditWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScopeDialog@@AEAA@XZ
    ~CScopeDialog();
};
