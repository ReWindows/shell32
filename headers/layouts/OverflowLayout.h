#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
namespace DirectUI {
class OverflowLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@OverflowLayout@DirectUI@@SAJPEAPEAVLayout@2@@Z
    static long Create(::DirectUI::Layout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoLayout@OverflowLayout@DirectUI@@UEAAXPEAVElement@2@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@OverflowLayout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdd@OverflowLayout@DirectUI@@UEAAXPEAVElement@2@PEAPEAV32@I@Z
    virtual void OnAdd(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutPosChanged@OverflowLayout@DirectUI@@UEAAXPEAVElement@2@0HH@Z
    virtual void OnLayoutPosChanged(::DirectUI::Element *, ::DirectUI::Element *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemove@OverflowLayout@DirectUI@@UEAAXPEAVElement@2@PEAPEAV32@I@Z
    virtual void OnRemove(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesiredSize@OverflowLayout@DirectUI@@UEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PlaceInLayout@OverflowLayout@DirectUI@@AEAA_NPEAVElement@2@UtagSIZE@@0PEAUMARGINFLAGS@2@PEAUtagRECT@@3PEAU4@PEBU6@@Z
    bool _PlaceInLayout(::DirectUI::Element *, tagSIZE, ::DirectUI::Element *, ::DirectUI::MARGINFLAGS *, tagRECT *, tagRECT *, tagSIZE *, tagRECT const *);
};
} // namespace DirectUI
