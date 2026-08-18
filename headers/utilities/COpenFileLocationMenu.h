#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
class COpenFileLocationMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COpenFileLocationMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@COpenFileLocationMenu@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@COpenFileLocationMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@COpenFileLocationMenu@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@COpenFileLocationMenu@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COpenFileLocationMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COpenFileLocationMenu@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLocationItem@COpenFileLocationMenu@@AEAAJ_NPEAPEAUIShellItem2@@PEA_N@Z
    long _GetLocationItem(bool, IShellItem2* *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenFileLocation@COpenFileLocationMenu@@AEAAJH@Z
    long _OpenFileLocation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldShow@COpenFileLocationMenu@@AEAAHI@Z
    int _ShouldShow(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenFileLocationMenu@@EEAA@XZ
    virtual ~COpenFileLocationMenu();
};
