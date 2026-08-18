#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
namespace fc_tson {
class output_archive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finish@output_archive@fc_tson@@QEAAJXZ
    long finish();
    // Category: Method | Source: PDB Internal
    // Symbol: ?finishNode@output_archive@fc_tson@@QEAAXXZ
    void finishNode();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0output_archive@fc_tson@@QEAA@AEAVwrite_buffer@1@EW4output_flags@1@I@Z
    output_archive(WindissectOpaque &, unsigned char, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?startNode@output_archive@fc_tson@@QEAAXXZ
    void startNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_name@output_archive@fc_tson@@AEAA_N_N@Z
    bool write_name(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_string_bytes@output_archive@fc_tson@@AEAAX_KPEAX0@Z
    void write_string_bytes(uint64_t, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_type@output_archive@fc_tson@@AEAA_N_NW4archive_marker@details@2@@Z
    bool write_type(bool, int);
};
} // namespace fc_tson
