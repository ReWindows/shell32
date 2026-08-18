#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CDeferredCollectionNotifier {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDeferredCollectionNotifier@@QEAA@XZ
    CDeferredCollectionNotifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDeferredCollectionNotifier@@QEAAJPEAUIItemCollection@@PEAUIUnknown@@@Z
    long RuntimeClassInitialize(IItemCollection *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CDeferredCollectionNotifier@@QEAAJXZ
    long Unadvise();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeferredCollectionNotifier@@UEAA@XZ
    virtual ~CDeferredCollectionNotifier();
};
