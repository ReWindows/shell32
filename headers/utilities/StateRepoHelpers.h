#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class StateRepoHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringFromPropValue@StateRepoHelpers@@YAJPEAUIInspectable@@PEAPEAUHSTRING__@@@Z
    long GetStringFromPropValue(IInspectable *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupInPropertySet@StateRepoHelpers@@YAJPEAUIInspectable@@PEBGAEBU_GUID@@PEAPEAX@Z
    long LookupInPropertySet(IInspectable *, unsigned short const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupStringInPropertySet@StateRepoHelpers@@YAJPEAUIInspectable@@PEBGPEAPEAUHSTRING__@@@Z
    long LookupStringInPropertySet(IInspectable *, unsigned short const *, HSTRING__* *);
};
