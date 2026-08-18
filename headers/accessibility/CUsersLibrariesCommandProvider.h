#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CUsersLibrariesCommandProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUsersLibrariesCommandProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUsersLibrariesCommandProvider@@QEAA@XZ
    CUsersLibrariesCommandProvider();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCommand@CUsersLibrariesCommandProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetCommand(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommands@CUsersLibrariesCommandProvider@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetCommands(IUnknown *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUsersLibrariesCommandProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUsersLibrariesCommandProvider@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CanCreateNewLibrary@CUsersLibrariesCommandProvider@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long s_CanCreateNewLibrary(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OnNewLibrary@CUsersLibrariesCommandProvider@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long s_OnNewLibrary(IUnknown *, IShellItemArray *, IBindCtx *);
};
