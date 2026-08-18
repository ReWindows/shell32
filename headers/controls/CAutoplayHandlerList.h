#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CAutoplayHandlerList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CAutoplayHandlerList@@UEAAJPEAUIAutoplayHandler@@@Z
    virtual long Add(IAutoplayHandler *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAutoplayHandlerList@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CAutoplayHandlerList@@UEAAJHPEAPEAUIAutoplayHandler@@@Z
    virtual long GetAt(int, IAutoplayHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CAutoplayHandlerList@@UEAAJPEAH@Z
    virtual long GetCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@CAutoplayHandlerList@@UEAAJPEBGPEAH@Z
    virtual long GetIndex(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAutoplayHandlerList@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDuplicateCommand@CAutoplayHandlerList@@QEAAJPEBGPEAH@Z
    long IsDuplicateCommand(unsigned short const *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAutoplayHandlerList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutoplayHandlerList@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CAutoplayHandlerList@@UEAAJH@Z
    virtual long Remove(int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoplayHandlerList@@AEAA@XZ
    ~CAutoplayHandlerList();
};
