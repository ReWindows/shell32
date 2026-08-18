#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CToolbarBand {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CToolbarBand@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CToolbarBand@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHotItemChange@CToolbarBand@@IEAA_JPEAUtagNMTBHOTITEM@@@Z
    int64_t _OnHotItemChange(tagNMTBHOTITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CToolbarBand@@MEAA_JPEAUtagNMHDR@@@Z
    virtual int64_t _OnNotify(tagNMHDR *);
};
