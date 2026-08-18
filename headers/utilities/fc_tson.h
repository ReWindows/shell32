#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class fc_tson {
public:
    class callback_parser;
    class output_archive;
    class read_buffer;
    class write_buffer;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_tson_string@fc_tson@@YA_NPEBDAEA_K@Z
    bool is_tson_string(char const *, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?tson_size_to_marker@fc_tson@@YAI_K@Z
    unsigned int tson_size_to_marker(uint64_t);
};
