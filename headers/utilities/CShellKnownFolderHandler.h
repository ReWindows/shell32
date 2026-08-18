#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CShellKnownFolderHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellKnownFolderHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellKnownFolderHandler@@QEAA@XZ
    CShellKnownFolderHandler();
    // Category: Method | Source: PE Export
    // Symbol: ?CanRedirectFolder@CShellKnownFolderHandler@@UEAAJAEBU_GUID@@PEBG@Z
    virtual long CanRedirectFolder(_GUID const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FolderCreated@CShellKnownFolderHandler@@UEAAJAEBU_GUID@@PEBG@Z
    virtual long FolderCreated(_GUID const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FolderRemoved@CShellKnownFolderHandler@@UEAAJAEBU_GUID@@PEBG@Z
    virtual long FolderRemoved(_GUID const &, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PostRedirectFolder@CShellKnownFolderHandler@@UEAAJAEBU_GUID@@JPEBG@Z
    virtual long PostRedirectFolder(_GUID const &, long, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreRedirectFolder@CShellKnownFolderHandler@@UEAAJAEBU_GUID@@PEBG@Z
    virtual long PreRedirectFolder(_GUID const &, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellKnownFolderHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellKnownFolderHandler@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CommonInitUninit@CShellKnownFolderHandler@@AEAAJHAEBU_GUID@@PEBG@Z
    long _CommonInitUninit(int, _GUID const &, unsigned short const *);
};
