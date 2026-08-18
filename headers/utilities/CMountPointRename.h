#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CMountPointRename {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMountPointRename@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMountPointRename@@QEAA@XZ
    CMountPointRename();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMountPointRename@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMountPointRename@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rename@CMountPointRename@@UEAAJPEBG0@Z
    virtual long Rename(unsigned short const *, unsigned short const *);
};
