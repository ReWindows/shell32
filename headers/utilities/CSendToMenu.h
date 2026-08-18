#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 49 member(s).
class CSendToMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSendToMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSendToMenu@@QEAA@XZ
    CSendToMenu();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CSendToMenu@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWrappedMenu@CSendToMenu@@SAJPEAUIUnknown@@PEAUIDataObject@@W4DEFAULT_FOLDER_MENU_RESTRICTIONS@@PEAPEAV1@@Z
    static long CreateWrappedMenu(IUnknown *, IDataObject *, int, CSendToMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterFolder@CSendToMenu@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long EnterFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FoundItem@CSendToMenu@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long FoundItem(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCommandString@CSendToMenu@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CSendToMenu@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@CSendToMenu@@UEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@CSendToMenu@@UEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSendToMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProgressDialog@CSendToMenu@@UEAAJPEAPEAG0@Z
    virtual long InitializeProgressDialog(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CSendToMenu@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveFolder@CSendToMenu@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long LeaveFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CSendToMenu@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSendToMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CSendToMenu@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSendToMenu@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWrappedMenu@CSendToMenu@@QEAAXXZ
    void ReleaseWrappedMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkComplete@CSendToMenu@@UEAAJJ@Z
    virtual long WalkComplete(long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSendToItem@CSendToMenu@@AEAAXPEAUIShellItem2@@@Z
    void _AddSendToItem(IShellItem2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllowSendTo@CSendToMenu@@AEAAHPEAUIDataObject@@@Z
    int _AllowSendTo(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ContinueWalk@CSendToMenu@@AEAAJXZ
    long _ContinueWalk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoDragDrop@CSendToMenu@@AEAAJPEAUHWND__@@PEAUIDropTarget@@KW4EXPLORER_COMMAND_SQM_ID@@PEBG@Z
    long _DoDragDrop(HWND__*, IDropTarget *, unsigned long, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindVerbOnWrappedMenu@CSendToMenu@@AEAAJPEBGPEAPEAUIShellItem@@@Z
    long _FindVerbOnWrappedMenu(unsigned short const *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemData@CSendToMenu@@AEAAPEBUSENDTOITEM@@I@Z
    SENDTOITEM const * _GetItemData(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetKeyState@CSendToMenu@@AEAAKXZ
    unsigned long _GetKeyState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitMenuPopup@CSendToMenu@@AEAAJXZ
    long _InitMenuPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeWrappedMenu@CSendToMenu@@AEAAJPEAUIUnknown@@PEAUIDataObject@@W4DEFAULT_FOLDER_MENU_RESTRICTIONS@@@Z
    long _InitializeWrappedMenu(IUnknown *, IDataObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeDropOnShellItem@CSendToMenu@@AEAAJPEAUIShellItem@@PEAUHWND__@@W4EXPLORER_COMMAND_SQM_ID@@@Z
    long _InvokeDropOnShellItem(IShellItem *, HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDropTarget@CSendToMenu@@AEAAHPEAUIShellItem2@@@Z
    int _IsDropTarget(IShellItem2*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSendToMenu@@EEAA@XZ
    virtual ~CSendToMenu();
};
