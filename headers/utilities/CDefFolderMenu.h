#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 83 member(s).
class CDefFolderMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDefFolderMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDefFolderMenu@@QEAA@XZ
    CDefFolderMenu();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CDefFolderMenu@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CDefFolderMenu@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenuIds@CDefFolderMenu@@UEAAJPEAI0@Z
    virtual long GetMenuIds(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenuRestrictions@CDefFolderMenu@@UEAAJW4DEFAULT_FOLDER_MENU_RESTRICTIONS@@PEAW42@@Z
    virtual long GetMenuRestrictions(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CDefFolderMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSelection(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CDefFolderMenu@@UEAAJPEAUIContextMenuForProgInvoke@@@Z
    virtual long GetState(IContextMenuForProgInvoke *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CDefFolderMenu@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@CDefFolderMenu@@UEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@CDefFolderMenu@@UEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDefFolderMenu@@QEAAJPEBUDEFCONTEXTMENU@@@Z
    long Initialize(DEFCONTEXTMENU const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDefFolderMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDefFolderMenu@@UEAAJPEAUHWND__@@PEAUIContextMenuCB@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@IPEBQEFBU_ITEMID_CHILD@@PEAUIUnknown@@IPEBQEAUHKEY__@@@Z
    virtual long Initialize(HWND__*, IContextMenuCB *, _ITEMIDLIST_ABSOLUTE const *, IShellFolder *, unsigned int, _ITEMID_CHILD & volatile * const *, IUnknown *, unsigned int, HKEY__* const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CDefFolderMenu@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHandlerAvailable@CDefFolderMenu@@UEAAJAEBU_GUID@@@Z
    virtual long IsHandlerAvailable(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskComplete@CDefFolderMenu@@UEAAJIK@Z
    virtual long OnTaskComplete(unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskStart@CDefFolderMenu@@UEAAJXZ
    virtual long OnTaskStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CDefFolderMenu@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDefFolderMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CDefFolderMenu@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CDefFolderMenu@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDefFolderMenu@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandlerClsid@CDefFolderMenu@@UEAAJAEBU_GUID@@@Z
    virtual long SetHandlerClsid(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInvokeVerbs@CDefFolderMenu@@UEAAJQEBQEBGI@Z
    virtual long SetInvokeVerbs(unsigned short const * const * const, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenuRestrictions@CDefFolderMenu@@UEAAJW4DEFAULT_FOLDER_MENU_RESTRICTIONS@@@Z
    virtual long SetMenuRestrictions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CDefFolderMenu@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSelection(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CDefFolderMenu@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrokerFilesForAppSiloVerb@CDefFolderMenu@@AEAAJAEBU_CMINVOKECOMMANDINFOEX@@@Z
    long BrokerFilesForAppSiloVerb(_CMINVOKECOMMANDINFOEX const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddHandlersToDCA@CDefFolderMenu@@AEAAXAEAV?$CDSA@I@@H@Z
    void _AddHandlersToDCA(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToRecentDocs@CDefFolderMenu@@AEAAXXZ
    void _AddToRecentDocs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AttributesOfItems@CDefFolderMenu@@AEAAKK@Z
    unsigned long _AttributesOfItems(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindVerbByMenuText@CDefFolderMenu@@AEAAJPEAUIContextMenu@@PEBGPEAUHMENU__@@PEAI@Z
    long _FindVerbByMenuText(IContextMenu *, unsigned short const *, HMENU__*, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAssocElementsAndKeys@CDefFolderMenu@@AEAAXXZ
    void _GetAssocElementsAndKeys();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHandlerInfoFromPartialSelection@CDefFolderMenu@@AEAAXPEAU_CMINVOKECOMMANDINFO@@PEAW4DEFAULT_FOLDER_MENU_RESTRICTIONS@@PEAU_GUID@@@Z
    void _GetHandlerInfoFromPartialSelection(_CMINVOKECOMMANDINFO *, int *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMenuVerb@CDefFolderMenu@@AEAAJPEAUHMENU__@@HHHPEAGK@Z
    long _GetMenuVerb(HMENU__*, int, int, int, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandlePartialSelectionInvoke@CDefFolderMenu@@AEAAJPEAU_CMINVOKECOMMANDINFO@@W4SELECTIONFLAG@1@@Z
    long _HandlePartialSelectionInvoke(_CMINVOKECOMMANDINFO *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDropTarget@CDefFolderMenu@@AEAAJXZ
    long _InitDropTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFileCommands@CDefFolderMenu@@AEAAKPEAUHMENU__@@II@Z
    unsigned long _InitFileCommands(HMENU__*, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsResourceVerbBeingInvoked@CDefFolderMenu@@AEAA?AW4TRIBIT@@XZ
    int _IsResourceVerbBeingInvoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KillTimerAndSetCursor@CDefFolderMenu@@CAX_KPEBG@Z
    static void _KillTimerAndSetCursor(uint64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessEditPaste@CDefFolderMenu@@AEAAJPEAUHWND__@@H@Z
    long _ProcessEditPaste(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessLink@CDefFolderMenu@@AEAAJPEAUHWND__@@PEBGK@Z
    long _ProcessLink(HWND__*, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessRename@CDefFolderMenu@@AEAAJXZ
    long _ProcessRename();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMenuDefault@CDefFolderMenu@@AEAAXPEAUHMENU__@@II@Z
    void _SetMenuDefault(HMENU__*, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TimerProc@CDefFolderMenu@@CAXPEAUHWND__@@I_KK@Z
    static void _TimerProc(HWND__*, unsigned int, uint64_t, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnduplicateVerbs@CDefFolderMenu@@AEAAXPEAUHMENU__@@HH@Z
    void _UnduplicateVerbs(HMENU__*, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDefFolderMenu@@EEAA@XZ
    virtual ~CDefFolderMenu();
};
