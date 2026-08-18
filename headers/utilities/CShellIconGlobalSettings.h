#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CShellIconGlobalSettings {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellIconGlobalSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellIconGlobalSettings@@QEAA@XZ
    CShellIconGlobalSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableIconOverlaysForProcess@CShellIconGlobalSettings@@UEAAJXZ
    virtual long DisableIconOverlaysForProcess();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellIconGlobalSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellIconGlobalSettings@@UEAAKXZ
    virtual unsigned long Release();
};
