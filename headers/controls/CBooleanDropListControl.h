#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CBooleanDropListControl {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetIndexFromValue@CBooleanDropListControl@@MEAAJAEBUtagPROPVARIANT@@PEAI@Z
    virtual long v_GetIndexFromValue(tagPROPVARIANT const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetTextFromIndex@CBooleanDropListControl@@MEAAJIPEAPEAG@Z
    virtual long v_GetTextFromIndex(unsigned int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValueCount@CBooleanDropListControl@@MEAAJPEAI@Z
    virtual long v_GetValueCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValueFromIndex@CBooleanDropListControl@@MEAAJIPEAUtagPROPVARIANT@@@Z
    virtual long v_GetValueFromIndex(unsigned int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValueType@CBooleanDropListControl@@MEAAJIPEAW4PROPENUMTYPE@@@Z
    virtual long v_GetValueType(unsigned int, int *);
};
