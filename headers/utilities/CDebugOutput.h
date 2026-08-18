#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CDebugOutput {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDebugOutput@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDebugOutput@@QEAA@XZ
    CDebugOutput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopIndent@CDebugOutput@@UEAAJXZ
    virtual long PopIndent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushIndent@CDebugOutput@@UEAAJXZ
    virtual long PushIndent();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDebugOutput@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDebugOutput@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteLine@CDebugOutput@@UEAAJPEBG@Z
    virtual long WriteLine(unsigned short const *);
};
