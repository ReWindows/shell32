#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CBitBucketData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@CBitBucketData@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long GetData(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryGetData@CBitBucketData@@UEAAJPEAUtagFORMATETC@@@Z
    virtual long QueryGetData(tagFORMATETC *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitBucketData@@EEAA@XZ
    virtual ~CBitBucketData();
};
