#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 1 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class CElementWithIUnknown {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnknownFromElement@CElementWithIUnknown@@SAPEAUIUnknown@@PEAVElement@DirectUI@@@Z
    static IUnknown * GetUnknownFromElement(::DirectUI::Element *);
};
