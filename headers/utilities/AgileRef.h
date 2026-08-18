#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace Microsoft::WRL {
class AgileRef {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AgileRef@WRL@Microsoft@@QEAA@$$QEAV012@@Z
    AgileRef(::Microsoft::WRL::AgileRef &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AgileRef@WRL@Microsoft@@QEAA@XZ
    AgileRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@AgileRef@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAUIUnknown@@@Z
    long CopyTo(_GUID const &, IUnknown * *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AgileRef@WRL@Microsoft@@QEAA@XZ
    ~AgileRef();
};
} // namespace Microsoft::WRL
