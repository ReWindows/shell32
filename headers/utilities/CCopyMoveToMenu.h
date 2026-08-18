#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
class CCopyMoveToMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCopyMoveToMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCopyMoveToMenu@@QEAA@I@Z
    CCopyMoveToMenu(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCommandString@CCopyMoveToMenu@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEnumFlags@CCopyMoveToMenu@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAUHWND__@@PEAK@Z
    virtual long GetEnumFlags(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, HWND__* *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCopyMoveToMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CCopyMoveToMenu@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CCopyMoveToMenu@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCopyMoveToMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCopyMoveToMenu@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShow@CCopyMoveToMenu@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@@Z
    virtual long ShouldShow(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateDialogTitle@CCopyMoveToMenu@@AEAAXPEAGI@Z
    void _GenerateDialogTitle(unsigned short *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCopyMoveToMenu@@EEAA@XZ
    virtual ~CCopyMoveToMenu();
};
