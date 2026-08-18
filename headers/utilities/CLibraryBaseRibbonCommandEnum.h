#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CLibraryBaseRibbonCommandEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLibraryBaseRibbonCommandEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLibraryBaseRibbonCommandEnum@@QEAA@XZ
    CLibraryBaseRibbonCommandEnum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CLibraryBaseRibbonCommandEnum@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long Clone(IEnumExplorerCommand * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLibraryBaseRibbonCommandEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLibraryBaseRibbonCommandEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CLibraryBaseRibbonCommandEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CLibraryBaseRibbonCommandEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
};
