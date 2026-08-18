#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CCPLSearchTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCPLSearchTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPromptText@CCPLSearchTarget@@UEAAJPEAGI@Z
    virtual long GetPromptText(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetFlags@CCPLSearchTarget@@UEAAJW4SEARCHTARGETFLAGS@@PEAW42@@Z
    virtual long GetTargetFlags(int, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCPLSearchTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CCPLSearchTarget@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCPLSearchTarget@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCPLSearchTarget@@AEAA@XZ
    CCPLSearchTarget();
};
