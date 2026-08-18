#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
namespace fc_tson {
class callback_parser {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@callback_parser@fc_tson@@AEAAJAEAW4archive_marker@details@2@PEBD@Z
    long parse(int &, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@callback_parser@fc_tson@@AEAAJXZ
    long parse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse_until@callback_parser@fc_tson@@AEAAJW4archive_marker@details@2@@Z
    long parse_until(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_string@callback_parser@fc_tson@@AEAAJPEBDIPEAGG@Z
    long save_string(char const *, unsigned int, unsigned short *, unsigned short);
};
} // namespace fc_tson
