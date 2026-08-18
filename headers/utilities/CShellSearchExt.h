#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CShellSearchExt {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellSearchExt@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellSearchExt@@QEAA@XZ
    CShellSearchExt();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCommandString@CShellSearchExt@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CShellSearchExt@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CShellSearchExt@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryContextMenu@CShellSearchExt@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellSearchExt@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellSearchExt@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CShellSearchExt@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellSearchExt@@MEAA@XZ
    virtual ~CShellSearchExt();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchDSQuery@CShellSearchExt@@AEAAJPEAUHWND__@@AEBU_GUID@@@Z
    long _LaunchDSQuery(HWND__*, _GUID const &);
};
