#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CreateObjectTaskServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CreateObjectTaskServer@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LockServer@CreateObjectTaskServer@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Method | Source: PE Export
    // Symbol: ?Pause@CreateObjectTaskServer@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PE Export
    // Symbol: ?Resume@CreateObjectTaskServer@@UEAAJXZ
    virtual long Resume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CreateObjectTaskServer@@UEAAJPEAUIUnknown@@PEAG@Z
    virtual long Start(IUnknown *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CreateObjectTaskServer@@UEAAJPEAJ@Z
    virtual long Stop(long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateObjectTaskServer@@UEAA@XZ
    virtual ~CreateObjectTaskServer();
};
