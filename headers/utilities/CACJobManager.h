#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CACJobManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CACJobManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CACJobManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CACJobManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSearch@CACJobManager@@QEAAHPEBU_ITEMIDLIST_ABSOLUTE@@PEBGPEAUIEnumString@@PEAUIACList@@KKPEAUIAutoCompTestHook@@@Z
    int StartSearch(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, IEnumString *, IACList *, unsigned long, unsigned long, IAutoCompTestHook *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopSearch@CACJobManager@@QEAAXXZ
    void StopSearch();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CACJobManager@@UEAA@XZ
    virtual ~CACJobManager();
};
