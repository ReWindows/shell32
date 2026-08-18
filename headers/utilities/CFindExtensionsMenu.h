#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CFindExtensionsMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFindExtensionsMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFindExtensionsMenu@@QEAA@XZ
    CFindExtensionsMenu();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCommandString@CFindExtensionsMenu@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFindExtensionsMenu@@QEAA_NPEAUHMENU__@@II@Z
    bool Initialize(HMENU__*, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CFindExtensionsMenu@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryContextMenu@CFindExtensionsMenu@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFindExtensionsMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFindExtensionsMenu@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddStatic@CFindExtensionsMenu@@AEAAIPEAUHMENU__@@IIPEAUHKEY__@@@Z
    unsigned int _AddStatic(HMENU__*, unsigned int, unsigned int, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddVerbs@CFindExtensionsMenu@@AEAAIPEAUHKEY__@@PEAU_QCMINFO@@@Z
    unsigned int _AddVerbs(HKEY__*, _QCMINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeStatic@CFindExtensionsMenu@@AEAAXI@Z
    void _InvokeStatic(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFindExtensionsMenu@@AEAA@XZ
    ~CFindExtensionsMenu();
};
