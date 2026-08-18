#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 58 member(s).
class CBrowseForFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBrowseForFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayDialog@CBrowseForFolder@@QEAAPEAU_ITEMIDLIST_ABSOLUTE@@PEAUBFSF@@@Z
    _ITEMIDLIST_ABSOLUTE * DisplayDialog(BFSF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnumFlags@CBrowseForFolder@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAUHWND__@@PEAK@Z
    virtual long GetEnumFlags(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, HWND__* *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAfterContextMenu@CBrowseForFolder@@UEAAJPEAUIShellItem@@PEAUIContextMenu@@AEBU_GUID@@PEAPEAX@Z
    virtual long OnAfterContextMenu(IShellItem *, IContextMenu *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnAfterExpand@CBrowseForFolder@@UEAAJPEAUIShellItem@@@Z
    virtual long OnAfterExpand(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnBeforeContextMenu@CBrowseForFolder@@UEAAJPEAUIShellItem@@AEBU_GUID@@PEAPEAX@Z
    virtual long OnBeforeContextMenu(IShellItem *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnBeforeExpand@CBrowseForFolder@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeforeExpand(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnBeforeItemDelete@CBrowseForFolder@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeforeItemDelete(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnBeforeStateImageChange@CBrowseForFolder@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeforeStateImageChange(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginLabelEdit@CBrowseForFolder@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeginLabelEdit(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndLabelEdit@CBrowseForFolder@@UEAAJPEAUIShellItem@@@Z
    virtual long OnEndLabelEdit(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetDefaultIconIndex@CBrowseForFolder@@UEAAJPEAUIShellItem@@PEAH1@Z
    virtual long OnGetDefaultIconIndex(IShellItem *, int *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetToolTip@CBrowseForFolder@@UEAAJPEAUIShellItem@@PEAGH@Z
    virtual long OnGetToolTip(IShellItem *, unsigned short *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemAdded@CBrowseForFolder@@UEAAJPEAUIShellItem@@H@Z
    virtual long OnItemAdded(IShellItem *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemClick@CBrowseForFolder@@UEAAJPEAUIShellItem@@KK@Z
    virtual long OnItemClick(IShellItem *, unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemDeleted@CBrowseForFolder@@UEAAJPEAUIShellItem@@H@Z
    virtual long OnItemDeleted(IShellItem *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemStateChanged@CBrowseForFolder@@UEAAJPEAUIShellItem@@KK@Z
    virtual long OnItemStateChanged(IShellItem *, unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemStateChanging@CBrowseForFolder@@UEAAJPEAUIShellItem@@KK@Z
    virtual long OnItemStateChanging(IShellItem *, unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnKeyboardInput@CBrowseForFolder@@UEAAJI_K_J@Z
    virtual long OnKeyboardInput(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyItemCommit@CBrowseForFolder@@UEAAJPEAUIShellItem@@@Z
    virtual long OnPropertyItemCommit(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CBrowseForFolder@@UEAAJPEAUIShellItemArray@@@Z
    virtual long OnSelectionChanged(IShellItemArray *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBrowseForFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBrowseForFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilter@CBrowseForFolder@@UEAAJPEAUIUnknown@@@Z
    virtual long SetFilter(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShow@CBrowseForFolder@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@@Z
    virtual long ShouldShow(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowseForDirDlgProc@CBrowseForFolder@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t BrowseForDirDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNewFolder@CBrowseForFolder@@AEAAHPEAUHWND__@@@Z
    int _CreateNewFolder(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DlgProc@CBrowseForFolder@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _DlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesFilterAllow@CBrowseForFolder@@AEAAHPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    int _DoesFilterAllow(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesMatchFilter@CBrowseForFolder@@AEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@H@Z
    long _DoesMatchFilter(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitAutoComplete@CBrowseForFolder@@AEAAJPEAUHWND__@@@Z
    long _InitAutoComplete(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OfferToPrepPath@CBrowseForFolder@@AEAAJPEAGK@Z
    long _OfferToPrepPath(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CBrowseForFolder@@AEAA_JPEAUHWND__@@H0I@Z
    int64_t _OnCommand(HWND__*, int, HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreateNameSpace@CBrowseForFolder@@AEAAHPEAUHWND__@@PEAUtagRECT@@@Z
    int _OnCreateNameSpace(HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDestroyNameSpace@CBrowseForFolder@@AEAAHXZ
    int _OnDestroyNameSpace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitDialog@CBrowseForFolder@@AEAAJPEAUHWND__@@@Z
    long _OnInitDialog(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitSize@CBrowseForFolder@@AEAAJPEAUHWND__@@@Z
    long _OnInitSize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLoadSize@CBrowseForFolder@@AEAAJPEAUHWND__@@@Z
    long _OnLoadSize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOK@CBrowseForFolder@@AEAAHXZ
    int _OnOK();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPidlNavigation@CBrowseForFolder@@AEAAJPEAUIShellItem@@K@Z
    long _OnPidlNavigation(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSaveSize@CBrowseForFolder@@AEAAJPEAUHWND__@@@Z
    long _OnSaveSize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetExpandedPath@CBrowseForFolder@@AEAAJPEBG@Z
    long _OnSetExpandedPath(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetExpandedPidl@CBrowseForFolder@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _OnSetExpandedPidl(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetSelectPathW@CBrowseForFolder@@AEAAJPEBG@Z
    long _OnSetSelectPathW(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetSelectPidl@CBrowseForFolder@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _OnSetSelectPidl(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSizeDialog@CBrowseForFolder@@AEAAJPEAUHWND__@@KK@Z
    long _OnSizeDialog(HWND__*, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTreeSelectChange@CBrowseForFolder@@AEAAJK@Z
    long _OnTreeSelectChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessEditChangeOnOK@CBrowseForFolder@@AEAAJH@Z
    long _ProcessEditChangeOnOK(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDialogSize@CBrowseForFolder@@AEAAJPEAUHWND__@@KK@Z
    long _SetDialogSize(HWND__*, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldShow@CBrowseForFolder@@AEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@H@Z
    long _ShouldShow(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SizeControls@CBrowseForFolder@@AEAAPEAXPEAUHWND__@@PEAXUtagRECT@@HH@Z
    void * _SizeControls(HWND__*, void *, tagRECT, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBrowseForFolder@@AEAA@XZ
    ~CBrowseForFolder();
};
