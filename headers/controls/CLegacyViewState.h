#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CLegacyViewState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFromPropertyBag@CLegacyViewState@@QEAAJPEAVCListViewHost@@PEAUIPropertyBag@@@Z
    long LoadFromPropertyBag(CListViewHost *, IPropertyBag *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLegacyViewState@@QEAA@XZ
    ~CLegacyViewState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStreamSize@CLegacyViewState@@AEAAKPEAUIStream@@@Z
    unsigned long _GetStreamSize(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertOrderItem@CLegacyViewState@@AEAAJPEFBU_ITEMID_CHILD@@H@Z
    long _InsertOrderItem(_ITEMID_CHILD & volatile *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadOrderBlob@CLegacyViewState@@AEAAXPEAVCListViewHost@@KPEAUIStream@@@Z
    void _LoadOrderBlob(CListViewHost *, unsigned long, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadPositionBlob@CLegacyViewState@@AEAAXKPEAUIStream@@@Z
    void _LoadPositionBlob(unsigned long, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncOrder@CLegacyViewState@@AEAAHPEAVCListViewHost@@@Z
    int _SyncOrder(CListViewHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncPositions@CLegacyViewState@@AEAAHPEAVCListViewHost@@@Z
    int _SyncPositions(CListViewHost *);
};
