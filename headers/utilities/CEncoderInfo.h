#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CEncoderInfo {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEncoderInfo@@UEAA@XZ
    virtual ~CEncoderInfo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDataFormatFromPath@CEncoderInfo@@IEAAJPEBGPEAU_GUID@@@Z
    long _GetDataFormatFromPath(unsigned short const *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEncoderFromFormat@CEncoderInfo@@IEAAJAEBU_GUID@@PEAU2@@Z
    long _GetEncoderFromFormat(_GUID const &, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEncoderList@CEncoderInfo@@IEAAJXZ
    long _GetEncoderList();
};
