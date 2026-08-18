#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace DirectUI {
class Value {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtomZero@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetAtomZero();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolFalse@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetBoolFalse();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolTrue@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetBoolTrue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIntZero@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetIntZero();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringNull@Value@DirectUI@@SAPEAV12@XZ
    static Value * GetStringNull();
};
} // namespace DirectUI
