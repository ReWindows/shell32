#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 33 member(s).
namespace fc::details {
class config_parser {
public:
    class stack;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finish@config_parser@details@fc@@UEAAJXZ
    virtual long finish();
    // Category: Method | Source: PDB Internal
    // Symbol: ?finish_array@config_parser@details@fc@@UEAAJXZ
    virtual long finish_array();
    // Category: Method | Source: PDB Internal
    // Symbol: ?finish_object@config_parser@details@fc@@UEAAJXZ
    virtual long finish_object();
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDI0@Z
    virtual long save_value(char const *, unsigned int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDI0_K@Z
    virtual long save_value(char const *, unsigned int, char const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDID@Z
    virtual long save_value(char const *, unsigned int, char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDIE@Z
    virtual long save_value(char const *, unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDI_N@Z
    virtual long save_value(char const *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDIF@Z
    virtual long save_value(char const *, unsigned int, short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDIG@Z
    virtual long save_value(char const *, unsigned int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDIH@Z
    virtual long save_value(char const *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDIJ@Z
    virtual long save_value(char const *, unsigned int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDII@Z
    virtual long save_value(char const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDIK@Z
    virtual long save_value(char const *, unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDIM@Z
    virtual long save_value(char const *, unsigned int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDIN@Z
    virtual long save_value(char const *, unsigned int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDI_J@Z
    virtual long save_value(char const *, unsigned int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?save_value@config_parser@details@fc@@UEAAJPEBDI_K@Z
    virtual long save_value(char const *, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?start_array@config_parser@details@fc@@UEAAJPEBDI_K@Z
    virtual long start_array(char const *, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?start_object@config_parser@details@fc@@UEAAJPEBDI@Z
    virtual long start_object(char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?start_parse@config_parser@details@fc@@UEAAJW4output_flags@fc_tson@@I@Z
    virtual long start_parse(int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?write_minmax@config_parser@details@fc@@UEAAJPEBDNN@Z
    virtual long write_minmax(char const *, double, double);
    // Category: Method | Source: PE Export
    // Symbol: ?write_minmax@config_parser@details@fc@@UEAAJPEBD_J1@Z
    virtual long write_minmax(char const *, int64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?write_next_info@config_parser@details@fc@@UEAAJPEBD0W4nvpd_flags@fc_tson@@0G0G@Z
    virtual long write_next_info(char const *, char const *, int, char const *, unsigned short, char const *, unsigned short);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?error@config_parser@details@fc@@AEAAJJW4__FC_Report_Kind@@IPEBD@Z
    long error(long, int, unsigned int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?find_property@config_parser@details@fc@@AEAAJPEBDIAEAPEAUvproperty@23@@Z
    long find_property(char const *, unsigned int, WindissectOpaque * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?flight_id_ignored@config_parser@details@fc@@AEAA_NI@Z
    bool flight_id_ignored(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?in_array@config_parser@details@fc@@AEBA_NXZ
    bool in_array() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?push_array@config_parser@details@fc@@AEAAJPEAUvproperty@23@IPEBD@Z
    long push_array(WindissectOpaque *, unsigned int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?push_obj@config_parser@details@fc@@AEAAJPEAUvproperty_container@23@IPEBD@Z
    long push_obj(WindissectOpaque *, unsigned int, char const *);
};
} // namespace fc::details
