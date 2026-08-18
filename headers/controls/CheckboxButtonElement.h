#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
class CheckboxButtonElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?CheckboxElementMouseWithinProp@CheckboxButtonElement@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * CheckboxElementMouseWithinProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CheckboxButtonElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GlyphAspectProp@CheckboxButtonElement@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * GlyphAspectProp();
};
