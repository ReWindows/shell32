#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class ForceSyncShellExecuteService {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?QueryService@ForceSyncShellExecuteService@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
};
