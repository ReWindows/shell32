#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CIconOverlayAdorner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBounds@CIconOverlayAdorner@@UEAAJPEAUtagRECT@@0@Z
    virtual long ComputeBounds(tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CIconOverlayAdorner@@SAJHW4Position@1@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CIconOverlayAdorner@@UEAAJPEAUHDC__@@@Z
    virtual long Draw(HDC__*);
};
