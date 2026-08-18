#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
class CContextMenuExtensionImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CContextMenuExtensionImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContextMenuExtensionImpl@@QEAA@XZ
    CContextMenuExtensionImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CContextMenuExtensionImpl@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@CContextMenuExtensionImpl@@UEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@CContextMenuExtensionImpl@@UEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CContextMenuExtensionImpl@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CContextMenuExtensionImpl@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CContextMenuExtensionImpl@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CContextMenuExtensionImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContextMenuExtensionImpl@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CContextMenuExtensionImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z
    long GetItem(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_OnQueryContextMenu@CContextMenuExtensionImpl@@MEAAJPEAUHMENU__@@I@Z
    virtual long _OnQueryContextMenu(HMENU__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultMenu@CContextMenuExtensionImpl@@MEAAHPEAI@Z
    virtual int get_DefaultMenu(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContextMenuExtensionImpl@@MEAA@XZ
    virtual ~CContextMenuExtensionImpl();
};
