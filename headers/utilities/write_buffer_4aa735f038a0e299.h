#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace fc_tson {
class write_buffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?push_back@write_buffer@fc_tson@@QEAA_NPEBX_K@Z
    bool push_back(void const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_position@write_buffer@fc_tson@@QEAAX_K@Z
    void set_position(uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?reserve@write_buffer@fc_tson@@AEAA_N_K@Z
    bool reserve(uint64_t);
};
} // namespace fc_tson
