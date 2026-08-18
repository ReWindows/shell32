#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class ColumnBalancingLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ColumnBalancingLayout@@SAJPEAPEAVLayout@DirectUI@@@Z
    static long Create(::DirectUI::Layout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoLayout@ColumnBalancingLayout@@UEAAXPEAVElement@DirectUI@@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesiredSize@ColumnBalancingLayout@@UEAA?AUtagSIZE@@PEAVElement@DirectUI@@HHPEAVSurface@4@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ColumnBalancingLayout@@UEAA@XZ
    virtual ~ColumnBalancingLayout();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateDesiredSizeMetrics@ColumnBalancingLayout@@IEAAXPEAVElement@DirectUI@@HHPEAVSurface@3@PEAH2@Z
    void _CalculateDesiredSizeMetrics(::DirectUI::Element *, int, int, ::DirectUI::Surface *, int *, int *);
};
