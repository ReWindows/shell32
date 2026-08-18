#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class CMetadataLabel {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMetadataLabel@@QEAA@XZ
    CMetadataLabel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CMetadataLabel@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CMetadataLabel@@SAJXZ
    static long Register();
};
