#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class CheckboxContentElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CheckboxContentElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ShowFocusRectOnKeywithinProp@CheckboxContentElement@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ShowFocusRectOnKeywithinProp();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CheckboxContentElement@@UEAA@XZ
    virtual ~CheckboxContentElement();
};
