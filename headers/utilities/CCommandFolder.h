#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 59 member(s).
class CCommandFolder {
public:
    class CExplorerCommandInfo;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCommandFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CCommandFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CCommandFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommandFolder@@QEAA@XZ
    CCommandFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CCommandFolder@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    virtual long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CCommandFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CCommandFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CCommandFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PE Export
    // Symbol: ?EnumSearches@CCommandFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CCommandFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CCommandFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandsFromSite@CCommandFolder@@QEAAJPEAUIUnknown@@@Z
    long GetCommandsFromSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CCommandFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumn@CCommandFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CCommandFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CCommandFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CCommandFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CCommandFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CCommandFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CCommandFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCommandFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CCommandFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@CCommandFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCommandFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCommandFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CCommandFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustPosition@CCommandFolder@@AEAAXXZ
    void _AdjustPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendCommands@CCommandFolder@@AEAAJPEAUIEnumExplorerCommand@@@Z
    long _AppendCommands(IEnumExplorerCommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendFolderTypeCommands@CCommandFolder@@AEAAJPEAUIUnknown@@@Z
    long _AppendFolderTypeCommands(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendLegacyCommands@CCommandFolder@@AEAAJPEAUIEnumUICommand@@@Z
    long _AppendLegacyCommands(IEnumUICommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendOrganizeCommand@CCommandFolder@@AEAAJPEAUIUnknown@@@Z
    long _AppendOrganizeCommand(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendRightSideCommands@CCommandFolder@@AEAAJPEAUIUnknown@@@Z
    long _AppendRightSideCommands(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFolder@CCommandFolder@@AEAAJPEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    long _CreateFolder(_ITEMID_CHILD & volatile *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumFolderCommandsForCFD@CCommandFolder@@AEAAJPEAUIUnknown@@@Z
    long _EnumFolderCommandsForCFD(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumFolderCommandsForExplorer@CCommandFolder@@AEAAJPEAUIUnknown@@@Z
    long _EnumFolderCommandsForExplorer(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumLegacyCommands@CCommandFolder@@AEAAJPEAUIShellFolderViewCB@@@Z
    long _EnumLegacyCommands(IShellFolderViewCB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindByGUID@CCommandFolder@@AEAAJAEBU_GUID@@PEAPEAUIExplorerCommand@@PEAI@Z
    long _FindByGUID(_GUID const &, IExplorerCommand * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAttributes@CCommandFolder@@AEAAKPEFBU_ITEMID_CHILD@@K@Z
    unsigned long _GetAttributes(_ITEMID_CHILD & volatile *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCommandFromItemID@CCommandFolder@@AEAAJPEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    long _GetCommandFromItemID(_ITEMID_CHILD & volatile *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetView@CCommandFolder@@AEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    long _GetView(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeItem@CCommandFolder@@AEAAJPEAUIDataObject@@@Z
    long _InvokeItem(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnduplicateCommands@CCommandFolder@@AEAAXXZ
    void _UnduplicateCommands();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommandFolder@@EEAA@XZ
    virtual ~CCommandFolder();
};
