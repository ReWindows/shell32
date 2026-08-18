#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CImpIDispatch {
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CImpIDispatch@@IEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CImpIDispatch@@IEAAJIKPEAPEAUITypeInfo@@@Z
    long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CImpIDispatch@@IEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImpIDispatch@@MEAA@XZ
    virtual ~CImpIDispatch();
};
