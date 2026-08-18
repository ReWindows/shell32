#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CEnumeratedDropListControl {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetIndexFromValue@CEnumeratedDropListControl@@MEAAJAEBUtagPROPVARIANT@@PEAI@Z
    virtual long v_GetIndexFromValue(tagPROPVARIANT const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetTextFromIndex@CEnumeratedDropListControl@@MEAAJIPEAPEAG@Z
    virtual long v_GetTextFromIndex(unsigned int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValue@CEnumeratedDropListControl@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetValue(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValueCount@CEnumeratedDropListControl@@MEAAJPEAI@Z
    virtual long v_GetValueCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValueFromIndex@CEnumeratedDropListControl@@MEAAJIPEAUtagPROPVARIANT@@@Z
    virtual long v_GetValueFromIndex(unsigned int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValueType@CEnumeratedDropListControl@@MEAAJIPEAW4PROPENUMTYPE@@@Z
    virtual long v_GetValueType(unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetValue@CEnumeratedDropListControl@@MEAAJPEAUIUnknown@@@Z
    virtual long v_SetValue(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumeratedDropListControl@@MEAA@XZ
    virtual ~CEnumeratedDropListControl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePropEnumTypeList@CEnumeratedDropListControl@@AEAAJXZ
    long _EnsurePropEnumTypeList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFilterCondPropVars@CEnumeratedDropListControl@@AEAAJPEAUIFilterCondition@@PEAUtagPROPVARIANT@@1@Z
    long _GetFilterCondPropVars(IFilterCondition *, tagPROPVARIANT *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFilterCondition@CEnumeratedDropListControl@@AEAAJPEAPEAUIFilterCondition@@@Z
    long _GetFilterCondition(IFilterCondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFilterCondition@CEnumeratedDropListControl@@AEAAJPEAUIFilterCondition@@@Z
    long _SetFilterCondition(IFilterCondition *);
};
