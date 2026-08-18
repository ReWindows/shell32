#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CFileSysBindData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFileSysBindData@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileID@CFileSysBindData@@UEAAJPEAT_LARGE_INTEGER@@@Z
    virtual long GetFileID(_LARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFindData@CFileSysBindData@@UEAAJPEAU_WIN32_FIND_DATAW@@@Z
    virtual long GetFindData(_WIN32_FIND_DATAW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetJunctionCLSID@CFileSysBindData@@UEAAJPEAU_GUID@@@Z
    virtual long GetJunctionCLSID(_GUID *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFileSysBindData@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileSysBindData@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileID@CFileSysBindData@@UEAAJT_LARGE_INTEGER@@@Z
    virtual long SetFileID(_LARGE_INTEGER);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFindData@CFileSysBindData@@UEAAJPEBU_WIN32_FIND_DATAW@@@Z
    virtual long SetFindData(_WIN32_FIND_DATAW const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetJunctionCLSID@CFileSysBindData@@UEAAJAEBU_GUID@@@Z
    virtual long SetJunctionCLSID(_GUID const &);
};
