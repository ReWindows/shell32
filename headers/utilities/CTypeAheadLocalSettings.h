#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CTypeAheadLocalSettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CTypeAheadLocalSettings@@SAXAEAUTYPEAHEAD_LOCAL_SETTINGS@@@Z
    static void Destroy(TYPEAHEAD_LOCAL_SETTINGS &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTypeAheadLocalSettings@@QEAAJPEBUTYPEAHEAD_LOCAL_SETTINGS@@@Z
    long Init(TYPEAHEAD_LOCAL_SETTINGS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Marshal@CTypeAheadLocalSettings@@QEAAJXZ
    long Marshal();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTypeAheadLocalSettings@@QEAA@XZ
    ~CTypeAheadLocalSettings();
};
