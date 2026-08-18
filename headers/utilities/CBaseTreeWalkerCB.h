#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CBaseTreeWalkerCB {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBaseTreeWalkerCB@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBaseTreeWalkerCB@@QEAA@XZ
    CBaseTreeWalkerCB();
    // Category: Method | Source: PE Export
    // Symbol: ?EnterFolder@CBaseTreeWalkerCB@@UEAAJPEBGPEBUTREEWALKERSTATS@@PEBU_WIN32_FIND_DATAW@@@Z
    virtual long EnterFolder(unsigned short const *, TREEWALKERSTATS const *, _WIN32_FIND_DATAW const *);
    // Category: Method | Source: PE Export
    // Symbol: ?FoundFile@CBaseTreeWalkerCB@@UEAAJPEBGPEBUTREEWALKERSTATS@@PEBU_WIN32_FIND_DATAW@@_K@Z
    virtual long FoundFile(unsigned short const *, TREEWALKERSTATS const *, _WIN32_FIND_DATAW const *, uint64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleError@CBaseTreeWalkerCB@@UEAAJPEBGPEBUTREEWALKERSTATS@@J@Z
    virtual long HandleError(unsigned short const *, TREEWALKERSTATS const *, long);
    // Category: Method | Source: PE Export
    // Symbol: ?LeaveFolder@CBaseTreeWalkerCB@@UEAAJPEBGPEBUTREEWALKERSTATS@@@Z
    virtual long LeaveFolder(unsigned short const *, TREEWALKERSTATS const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBaseTreeWalkerCB@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBaseTreeWalkerCB@@UEAAKXZ
    virtual unsigned long Release();
};
