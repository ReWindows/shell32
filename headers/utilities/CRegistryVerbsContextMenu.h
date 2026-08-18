#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 92 member(s).
class CRegistryVerbsContextMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPages@CRegistryVerbsContextMenu@@UEAAJP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPages(int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRegistryVerbsContextMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRegistryVerbsContextMenu@@QEAA@P6AJPEAUIDataObject@@P6AHPEAU_PSP@@_J@Z2@Z@Z
    CRegistryVerbsContextMenu(long ( *)(IDataObject *, int ( *)(_PSP *, int64_t), int64_t));
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CRegistryVerbsContextMenu@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssocElement@CRegistryVerbsContextMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetAssocElement(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CRegistryVerbsContextMenu@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbAssocObject@CRegistryVerbsContextMenu@@QEAAJPEBGW4ASSOCQUERY@@AEBU_GUID@@PEAPEAX@Z
    long GetVerbAssocObject(unsigned short const *, int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CRegistryVerbsContextMenu@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@CRegistryVerbsContextMenu@@UEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@CRegistryVerbsContextMenu@@UEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRegistryVerbsContextMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CRegistryVerbsContextMenu@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVerbSupported@CRegistryVerbsContextMenu@@UEAAJPEBGPEAH@Z
    virtual long IsVerbSupported(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreating@CRegistryVerbsContextMenu@@UEAAJPEAUICreateProcessInputs@@@Z
    virtual long OnCreating(ICreateProcessInputs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreatingError@CRegistryVerbsContextMenu@@UEAAJJPEAUICreateProcessInputs@@@Z
    virtual long OnCreatingError(long, ICreateProcessInputs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CRegistryVerbsContextMenu@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRegistryVerbsContextMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CRegistryVerbsContextMenu@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRegistryVerbsContextMenu@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ReplacePage@CRegistryVerbsContextMenu@@UEAAJIP6AHPEAU_PSP@@_J@Z1@Z
    virtual long ReplacePage(unsigned int, int ( *)(_PSP *, int64_t), int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssocElement@CRegistryVerbsContextMenu@@UEAAJPEAUIAssociationElement@@@Z
    virtual long SetAssocElement(IAssociationElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInvokeVerbs@CRegistryVerbsContextMenu@@UEAAJQEBQEBGI@Z
    virtual long SetInvokeVerbs(unsigned short const * const * const, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CRegistryVerbsContextMenu@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldConsiderCurrentFolderAsSelection@CRegistryVerbsContextMenu@@AEAA_NI@Z
    bool ShouldConsiderCurrentFolderAsSelection(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddFirstItemToCommandArray@CRegistryVerbsContextMenu@@AEAAJIPEAVCMenuMatchCommand@@@Z
    long _AddFirstItemToCommandArray(unsigned int, CMenuMatchCommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToRecentDocs@CRegistryVerbsContextMenu@@AEAAXI@Z
    void _AddToRecentDocs(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AreSelectionCommandsUniform@CRegistryVerbsContextMenu@@AEAAHIK@Z
    int _AreSelectionCommandsUniform(unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CRegistryVerbsContextMenu@@AEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareItemToCommandArray@CRegistryVerbsContextMenu@@AEAAJIIPEAVCMenuMatchCommand@@@Z
    long _CompareItemToCommandArray(unsigned int, unsigned int, CMenuMatchCommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAssocObject@CRegistryVerbsContextMenu@@AEAAJXZ
    long _EnsureAssocObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSubMenuHandler@CRegistryVerbsContextMenu@@AEAAJH@Z
    long _EnsureSubMenuHandler(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureVerbs@CRegistryVerbsContextMenu@@AEAAJI@Z
    long _EnsureVerbs(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Execute@CRegistryVerbsContextMenu@@AEAAJPEAU_CMINVOKECOMMANDINFOEX@@I@Z
    long _Execute(_CMINVOKECOMMANDINFOEX *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindIndex@CRegistryVerbsContextMenu@@AEAAIPEBG@Z
    unsigned int _FindIndex(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppSource@CRegistryVerbsContextMenu@@AEAAJPEBGPEAPEAUIQuerySource@@@Z
    long _GetAppSource(unsigned short const *, IQuerySource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAssocObject@CRegistryVerbsContextMenu@@AEAAJPEAPEAUIAssociationElement@@@Z
    long _GetAssocObject(IAssociationElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCommandStringFromSubMenu@CRegistryVerbsContextMenu@@AEAAJ_KIPEAIPEADI@Z
    long _GetCommandStringFromSubMenu(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHandlerActivationModel@CRegistryVerbsContextMenu@@AEAA?AW4ACTIVATION_MODEL@@I@Z
    int _GetHandlerActivationModel(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHandlerMultiSelectModel@CRegistryVerbsContextMenu@@AEAA?AW4MULTI_SELECT_MODEL@@IW4ACTIVATION_MODEL@@@Z
    int _GetHandlerMultiSelectModel(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHelpText@CRegistryVerbsContextMenu@@AEAAJIIPEADI@Z
    long _GetHelpText(unsigned int, unsigned int, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIcon@CRegistryVerbsContextMenu@@AEAAJIPEAGI@Z
    long _GetIcon(unsigned int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItem@CRegistryVerbsContextMenu@@AEAAJIAEBU_GUID@@PEAPEAX@Z
    long _GetItem(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemCount@CRegistryVerbsContextMenu@@AEAAKXZ
    unsigned long _GetItemCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMenuString@CRegistryVerbsContextMenu@@AEAAHIIPEAGI@Z
    int _GetMenuString(unsigned int, unsigned int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellItemArray@CRegistryVerbsContextMenu@@AEAAJPEAPEAUIShellItemArray@@_N@Z
    long _GetShellItemArray(IShellItemArray * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTypeOfItem@CRegistryVerbsContextMenu@@AEAAJIPEAGI@Z
    long _GetTypeOfItem(unsigned int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVerb@CRegistryVerbsContextMenu@@AEAAPEBGI@Z
    unsigned short const * _GetVerb(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeCommandFromSubMenu@CRegistryVerbsContextMenu@@AEAAJPEAU_CMINVOKECOMMANDINFOEX@@@Z
    long _InvokeCommandFromSubMenu(_CMINVOKECOMMANDINFOEX *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAsyncStateHandler@CRegistryVerbsContextMenu@@AEAAHI@Z
    int _IsAsyncStateHandler(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDefaultVerb@CRegistryVerbsContextMenu@@AEAAHI@Z
    int _IsDefaultVerb(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRestricted@CRegistryVerbsContextMenu@@AEAAHI@Z
    int _IsRestricted(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsValuePresent@CRegistryVerbsContextMenu@@AEAAHIPEBG@Z
    int _IsValuePresent(unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsVisible@CRegistryVerbsContextMenu@@AEAAHHI@Z
    int _IsVisible(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldRemoveVerb@CRegistryVerbsContextMenu@@AEAAHI@Z
    int _ShouldRemoveVerb(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartGetStateTask@CRegistryVerbsContextMenu@@AEAAJPEAUHMENU__@@II@Z
    long _StartGetStateTask(HMENU__*, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SupportsSelectionMode@CRegistryVerbsContextMenu@@AEAAHI@Z
    int _SupportsSelectionMode(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SupportsType@CRegistryVerbsContextMenu@@AEAAHI@Z
    int _SupportsType(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VerbCount@CRegistryVerbsContextMenu@@AEAAIXZ
    unsigned int _VerbCount();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRegistryVerbsContextMenu@@EEAA@XZ
    virtual ~CRegistryVerbsContextMenu();
};
