#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CTypedDataThumbnailHandler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnail@CTypedDataThumbnailHandler@@UEAAJIPEAPEAUHBITMAP__@@PEAW4WTS_ALPHATYPE@@@Z
    virtual long GetThumbnail(unsigned int, HBITMAP__* *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTypedDataThumbnailHandler@@UEAAJPEAUIShellItem@@K@Z
    virtual long Initialize(IShellItem *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTypedDataThumbnailHandler@@UEAA@XZ
    virtual ~CTypedDataThumbnailHandler();
};
