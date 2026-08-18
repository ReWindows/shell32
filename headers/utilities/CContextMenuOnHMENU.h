#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CContextMenuOnHMENU {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CContextMenuOnHMENU@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContextMenuOnHMENU@@QEAA@PEAUHMENU__@@PEAUHWND__@@@Z
    CContextMenuOnHMENU(HMENU__*, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CContextMenuOnHMENU@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@CContextMenuOnHMENU@@UEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@CContextMenuOnHMENU@@UEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CContextMenuOnHMENU@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CContextMenuOnHMENU@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CContextMenuOnHMENU@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContextMenuOnHMENU@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlipMenu@CContextMenuOnHMENU@@AEAAXPEAUHMENU__@@H@Z
    void _FlipMenu(HMENU__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RebaseMenu@CContextMenuOnHMENU@@AEAAXPEAUHMENU__@@@Z
    void _RebaseMenu(HMENU__*);
};
