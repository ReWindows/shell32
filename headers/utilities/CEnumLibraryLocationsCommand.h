#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class CEnumLibraryLocationsCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumLibraryLocationsCommand@@UEAAJKPEAPEAUIExplorerCommand@@PEAK@Z
    virtual long Next(unsigned long, IExplorerCommand * *, unsigned long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLocations@CEnumLibraryLocationsCommand@@AEAAJXZ
    long _EnsureLocations();
};
