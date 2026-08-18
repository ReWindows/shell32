#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
namespace fc_tson {
class read_buffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?advance@read_buffer@fc_tson@@QEAAPEAEXZ
    unsigned char * advance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?consume_n@read_buffer@fc_tson@@QEAA_NPEAX_K@Z
    bool consume_n(void *, uint64_t);
};
} // namespace fc_tson
