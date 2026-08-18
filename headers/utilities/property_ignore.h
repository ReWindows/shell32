#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 29 member(s).
namespace fc::details {
class property_ignore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?append_object@property_ignore@details@fc@@UEAAPEAUvproperty_container@23@I@Z
    virtual WindissectOpaque * append_object(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?compare@property_ignore@details@fc@@UEBAHPEAX@Z
    virtual int compare(void *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ensure_store_initialized@property_ignore@details@fc@@UEAA_NXZ
    virtual bool ensure_store_initialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?find@property_ignore@details@fc@@UEAAPEAUvproperty@23@PEBD@Z
    virtual WindissectOpaque * find(char const *);
    // Category: Method | Source: PE Export
    // Symbol: ?generate_suppressed_impressions@property_ignore@details@fc@@UEAAXXZ
    virtual void generate_suppressed_impressions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_name@property_ignore@details@fc@@UEAAPEBDXZ
    virtual char const * get_name();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_next@property_ignore@details@fc@@UEAAPEAPEAUvproperty@23@XZ
    virtual WindissectOpaque * * get_next();
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_array_merge_capable@property_ignore@details@fc@@UEAA_N_K@Z
    virtual bool is_array_merge_capable(uint64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?register_property@property_ignore@details@fc@@UEAAXPEAUvproperty@23@@Z
    virtual void register_property(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?report_impression@property_ignore@details@fc@@UEBAXXZ
    virtual void report_impression() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?report_store_impression@property_ignore@details@fc@@UEAA_NIPEBDW4impression_kind@3@@Z
    virtual bool report_store_impression(unsigned int, char const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?serialize_config@property_ignore@details@fc@@UEAAXAEAVoutput_archive@fc_tson@@@Z
    virtual void serialize_config(WindissectOpaque &);
    // Category: Method | Source: PE Export
    // Symbol: ?set_flight_id@property_ignore@details@fc@@UEAAXI_N@Z
    virtual void set_flight_id(unsigned int, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?set_impression_reporting@property_ignore@details@fc@@UEBAXW4impression_kind@3@@Z
    virtual void set_impression_reporting(int) const;
    // Category: Method | Source: PE Export
    // Symbol: ?start_array@property_ignore@details@fc@@UEAAJI_K0@Z
    virtual long start_array(unsigned int, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?start_object@property_ignore@details@fc@@UEAAPEAUvproperty_container@23@I@Z
    virtual WindissectOpaque * start_object(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?validate@property_ignore@details@fc@@UEAAJAEAI@Z
    virtual long validate(unsigned int &);
    // Category: Method | Source: PE Export
    // Symbol: ?write_value@property_ignore@details@fc@@UEAAJIN@Z
    virtual long write_value(unsigned int, double);
    // Category: Method | Source: PE Export
    // Symbol: ?write_value@property_ignore@details@fc@@UEAAJIPEBD_K@Z
    virtual long write_value(unsigned int, char const *, uint64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?write_value@property_ignore@details@fc@@UEAAJI_J@Z
    virtual long write_value(unsigned int, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?write_value@property_ignore@details@fc@@UEAAJI_K@Z
    virtual long write_value(unsigned int, uint64_t);
};
} // namespace fc::details
