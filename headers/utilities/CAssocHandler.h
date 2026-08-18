#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class CAssocHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AdjustPromptCount@CAssocHandler@@SAXPEBG0W4PromptAdjustment@1@W4ASSOC_FILTER@@@Z
    static void s_AdjustPromptCount(unsigned short const *, unsigned short const *, int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetPromptCountAndKey@CAssocHandler@@CAJPEBG0PEAKPEAPEAUHKEY__@@PEAGK@Z
    static long s_GetPromptCountAndKey(unsigned short const *, unsigned short const *, unsigned long *, HKEY__* *, unsigned short *, unsigned long);
};
