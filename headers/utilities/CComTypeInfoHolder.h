#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
namespace ATL {
class CComTypeInfoHolder {
public:
    class stringdispid;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CComTypeInfoHolder@ATL@@SAX_K@Z
    static void Cleanup(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTI@CComTypeInfoHolder@ATL@@QEAAJK@Z
    long EnsureTI(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CComTypeInfoHolder@ATL@@QEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTI@CComTypeInfoHolder@ATL@@QEAAJK@Z
    long GetTI(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CComTypeInfoHolder@ATL@@QEAAJIKPEAPEAUITypeInfo@@@Z
    long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadNameCache@CComTypeInfoHolder@ATL@@QEAAJPEAUITypeInfo@@@Z
    long LoadNameCache(ITypeInfo *);
};
} // namespace ATL
