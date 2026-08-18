#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 38 member(s).
class CContextMenuOnContextMenuArray {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CContextMenuOnContextMenuArray@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CContextMenuOnContextMenuArray@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenuRestrictions@CContextMenuOnContextMenuArray@@UEAAJW4DEFAULT_FOLDER_MENU_RESTRICTIONS@@PEAW42@@Z
    virtual long GetMenuRestrictions(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@CContextMenuOnContextMenuArray@@UEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@CContextMenuOnContextMenuArray@@UEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CContextMenuOnContextMenuArray@@QEAAJQEAPEAUIContextMenu@@I@Z
    long Initialize(IContextMenu * * const, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CContextMenuOnContextMenuArray@@UEAAJPEAUHWND__@@PEAUIContextMenuCB@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@IPEBQEFBU_ITEMID_CHILD@@PEAUIUnknown@@IPEBQEAUHKEY__@@@Z
    virtual long Initialize(HWND__*, IContextMenuCB *, _ITEMIDLIST_ABSOLUTE const *, IShellFolder *, unsigned int, _ITEMID_CHILD & volatile * const *, IUnknown *, unsigned int, HKEY__* const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CContextMenuOnContextMenuArray@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CContextMenuOnContextMenuArray@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CContextMenuOnContextMenuArray@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CContextMenuOnContextMenuArray@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CContextMenuOnContextMenuArray@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContextMenuOnContextMenuArray@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandlerClsid@CContextMenuOnContextMenuArray@@UEAAJAEBU_GUID@@@Z
    virtual long SetHandlerClsid(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInvokeVerbs@CContextMenuOnContextMenuArray@@UEAAJQEBQEBGI@Z
    virtual long SetInvokeVerbs(unsigned short const * const * const, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenuRestrictions@CContextMenuOnContextMenuArray@@UEAAJW4DEFAULT_FOLDER_MENU_RESTRICTIONS@@@Z
    virtual long SetMenuRestrictions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CContextMenuOnContextMenuArray@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContextMenuOnContextMenuArray@@IEAA@XZ
    CContextMenuOnContextMenuArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueryNthContextMenu@CContextMenuOnContextMenuArray@@MEAAJIPEAUHMENU__@@IIII@Z
    virtual long _QueryNthContextMenu(unsigned int, HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContextMenuOnContextMenuArray@@MEAA@XZ
    virtual ~CContextMenuOnContextMenuArray();
};
