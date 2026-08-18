#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CMappingData {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMappingData@@QEAA@XZ
    CMappingData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMappingData@@QEAAJW4CONFLICT_FILTER@@PEAUIConflictInterruptFilter@@PEAUIConflictDialogData@@PEAVCSafeElementProxy@@@Z
    long Initialize(int, IConflictInterruptFilter *, IConflictDialogData *, CSafeElementProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CMappingData@@QEBAJKPEAUINDIVIDUAL_CONFLICT_MAPPING_DATA@@@Z
    long Map(unsigned long, INDIVIDUAL_CONFLICT_MAPPING_DATA *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnMap@CMappingData@@QEBAJKPEAK@Z
    long UnMap(unsigned long, unsigned long *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMappingData@@QEAA@XZ
    ~CMappingData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeData@CMappingData@@AEAAXXZ
    void _FreeData();
};
