#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
namespace DirectUI {
class Layout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@Layout@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void Attach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@Layout@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void Detach(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@Layout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdd@Layout@DirectUI@@UEAAXPEAVElement@2@PEAPEAV32@I@Z
    virtual void OnAdd(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutPosChanged@Layout@DirectUI@@UEAAXPEAVElement@2@0HH@Z
    virtual void OnLayoutPosChanged(::DirectUI::Element *, ::DirectUI::Element *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemove@Layout@DirectUI@@UEAAXPEAVElement@2@PEAPEAV32@I@Z
    virtual void OnRemove(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
};
} // namespace DirectUI
