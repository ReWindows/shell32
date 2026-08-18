#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
namespace OOBE::Health::details {
class OOBEScenarioEvents {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OOBEScenarioEvents@details@Health@OOBE@@QEAA@XZ
    OOBEScenarioEvents();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OOBEScenarioEvents@details@Health@OOBE@@QEAA@XZ
    ~OOBEScenarioEvents();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@OOBEScenarioEvents@details@Health@OOBE@@AEAAJXZ
    long Evaluate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageIdentifier@OOBEScenarioEvents@details@Health@OOBE@@AEAAJPEAPEAG@Z
    long GetImageIdentifier(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadInfo@OOBEScenarioEvents@details@Health@OOBE@@AEAAXAEAUHealthInfoHeader@234@HAEA_N1PEBG@Z
    void ReadInfo(::OOBE::Health::details::HealthInfoHeader &, int, bool &, bool &, unsigned short const *);
};
} // namespace OOBE::Health::details
