#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 45 member(s).
class CFolderMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFolderMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CFolderMenu@@SAJPEAUIShellFolder@@IHPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IShellFolder *, unsigned int, int, HWND__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CFolderMenu@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@CFolderMenu@@UEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@CFolderMenu@@UEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFolderMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CFolderMenu@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskComplete@CFolderMenu@@UEAAJIK@Z
    virtual long OnTaskComplete(unsigned int, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnTaskStart@CFolderMenu@@UEAAJXZ
    virtual long OnTaskStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CFolderMenu@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFolderMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CFolderMenu@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFolderMenu@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnumExplorerCommand@CFolderMenu@@UEAAJPEAUIEnumExplorerCommand@@@Z
    virtual long SetEnumExplorerCommand(IEnumExplorerCommand *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFolderMenu@@AEAA@PEAUIShellFolder@@IHPEAUHWND__@@@Z
    CFolderMenu(IShellFolder *, unsigned int, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItemByCommandId@CFolderMenu@@AEAAPEBUFOLDERMENUITEMDATA@@PEAUHMENU__@@I@Z
    FOLDERMENUITEMDATA const * FindItemByCommandId(HMENU__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItemByVerbName@CFolderMenu@@AEAAPEBUFOLDERMENUITEMDATA@@PEAUHMENU__@@PEBU_CMINVOKECOMMANDINFO@@@Z
    FOLDERMENUITEMDATA const * FindItemByVerbName(HMENU__*, _CMINVOKECOMMANDINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllocFolderMenuItemData@CFolderMenu@@AEAAJPEAUIExplorerCommand@@PEAUIShellItemArray@@W4ICONSTATE@1@PEAPEAUFOLDERMENUITEMDATA@@@Z
    long _AllocFolderMenuItemData(IExplorerCommand *, IShellItemArray *, int, FOLDERMENUITEMDATA * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComposeMenuFromCommandFolder@CFolderMenu@@AEAAJPEAUIShellFolder@@PEAUIShellItemArray@@PEAUHMENU__@@IIIPEAII@Z
    long _ComposeMenuFromCommandFolder(IShellFolder *, IShellItemArray *, HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComposeMenuFromEnumCommand@CFolderMenu@@AEAAJPEAUIEnumExplorerCommand@@PEAUIShellItemArray@@PEAUHMENU__@@IIIPEAI@Z
    long _ComposeMenuFromEnumCommand(IEnumExplorerCommand *, IShellItemArray *, HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTaskScheduler@CFolderMenu@@AEAAJXZ
    long _EnsureTaskScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRightSideAndTotalCommand@CFolderMenu@@AEAAJPEAUIEnumIDList@@PEAUIShellFolder@@PEAUIShellItemArray@@PEAI3@Z
    long _GetRightSideAndTotalCommand(IEnumIDList *, IShellFolder *, IShellItemArray *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelection@CFolderMenu@@AEAAJPEAPEAUIShellItemArray@@@Z
    long _GetSelection(IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertCommandToMenu@CFolderMenu@@AEAAJPEAUIExplorerCommand@@PEAUIShellItemArray@@PEAUHMENU__@@IIIPEAIPEAW4CommandMenuFlags@@W4ICONSTATE@1@3@Z
    long _InsertCommandToMenu(IExplorerCommand *, IShellItemArray *, HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int *, int *, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchMenuItem@CFolderMenu@@AEAAJPEAUHMENU__@@GPEA_J@Z
    long _MatchMenuItem(HMENU__*, unsigned short, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBackgroundTaskMenuItem@CFolderMenu@@AEAAJPEAUHMENU__@@IK@Z
    long _UpdateBackgroundTaskMenuItem(HMENU__*, unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FreeMenuItemData@CFolderMenu@@CAHPEAUFOLDERMENUITEMDATA@@PEAX@Z
    static int s_FreeMenuItemData(FOLDERMENUITEMDATA *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFolderMenu@@EEAA@XZ
    virtual ~CFolderMenu();
};
