#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
namespace fc {
class details {
public:
    class config_info;
    class config_parser;
    class property_ignore;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?change_time_letter@details@fc@@YADW4change_time@2@@Z
    char change_time_letter(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_feature_node@details@fc@@YA_NPEBDAEAIAEAUchange_profile@2@@Z
    bool is_feature_node(char const *, unsigned int &, ::fc::change_profile &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?key_cmp@details@fc@@YAHPEBD0@Z
    int key_cmp(char const *, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?key_cmp@details@fc@@YAHPEBG0@Z
    int key_cmp(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_fc_string_tag@details@fc@@YA?AUstring_tag@fc_tson@@PEBG@Z
    WindissectOpaque make_fc_string_tag(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?module_address@details@fc@@YAXXZ
    void module_address();
    // Category: Method | Source: PDB Internal
    // Symbol: ?update_flags@details@fc@@YAXAEAW4property_flags@12@W4312@_N@Z
    void update_flags(int &, int, bool);
};
} // namespace fc
