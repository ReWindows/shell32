#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CItemPositioning {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDragPointsToDataObj@CItemPositioning@@QEAAXXZ
    void AddDragPointsToDataObj();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionItems@CItemPositioning@@QEAAXXZ
    void PositionItems();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeOffsets@CItemPositioning@@AEAAHPEAUtagPOINT@@@Z
    int _ComputeOffsets(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DropPositionPoints@CItemPositioning@@AEAAXPEAUtagPOINT@@@Z
    void _DropPositionPoints(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DropScalePoints@CItemPositioning@@AEAAXPEAUtagPOINT@@@Z
    void _DropScalePoints(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPoints@CItemPositioning@@AEAAPEAUtagPOINT@@W4DPIWP@1@@Z
    tagPOINT * _GetPoints(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionItems@CItemPositioning@@AEAAXPEAUtagPOINT@@@Z
    void _PositionItems(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionItemsWithPoints@CItemPositioning@@AEAAXW4DPIWP@1@@Z
    void _PositionItemsWithPoints(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScaleIfNeeded@CItemPositioning@@AEAAXPEAUtagPOINT@@@Z
    void _ScaleIfNeeded(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScalePoints@CItemPositioning@@AEAAXPEAUtagPOINT@@U2@1@Z
    void _ScalePoints(tagPOINT *, tagPOINT, tagPOINT);
};
