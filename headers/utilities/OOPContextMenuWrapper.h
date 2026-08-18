#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
class OOPContextMenuWrapper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@OOPContextMenuWrapper@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@OOPContextMenuWrapper@@UEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@OOPContextMenuWrapper@@UEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@OOPContextMenuWrapper@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@OOPContextMenuWrapper@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OOPContextMenuWrapper@@QEAA@XZ
    OOPContextMenuWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@OOPContextMenuWrapper@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@OOPContextMenuWrapper@@QEAAJU_GUID@@@Z
    long RuntimeClassInitialize(_GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OOPContextMenuWrapper@@UEAA@XZ
    virtual ~OOPContextMenuWrapper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreHBITMAPsCreatedDuringRemoteCalls@OOPContextMenuWrapper@@AEAAJPEAUHMENU__@@II@Z
    long StoreHBITMAPsCreatedDuringRemoteCalls(HMENU__*, unsigned int, unsigned int);
};
