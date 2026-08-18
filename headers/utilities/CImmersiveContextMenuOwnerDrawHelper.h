#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CImmersiveContextMenuOwnerDrawHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@UEAAHPEAUHWND__@@I_K_JPEAHPEAW4GRID_HOW_SELECTED_FLAGS@@@Z
    virtual int ContextMenuWndProc(HWND__*, unsigned int, uint64_t, int64_t, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z
    static bool s_ContextMenuWndProc(HWND__*, unsigned int, uint64_t, int64_t, bool *, int *);
};
