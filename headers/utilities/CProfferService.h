#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CProfferService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProfferService@CProfferService@@UEAAJAEBU_GUID@@PEAUIServiceProvider@@PEAK@Z
    virtual long ProfferService(_GUID const &, IServiceProvider *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CProfferService@@QEAAJAEBU_GUID@@0PEAPEAX@Z
    long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeService@CProfferService@@UEAAJK@Z
    virtual long RevokeService(unsigned long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProfferService@@IEAA@XZ
    CProfferService();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProfferService@@IEAA@XZ
    ~CProfferService();
};
