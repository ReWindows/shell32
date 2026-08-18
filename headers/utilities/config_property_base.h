#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
namespace fc {
class config_property_base {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?description@config_property_base@fc@@IEBAPEBDXZ
    char const * description() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ensure_initialized@config_property_base@fc@@IEAAXXZ
    void ensure_initialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ensure_initialized_without_impression@config_property_base@fc@@IEAA_NXZ
    bool ensure_initialized_without_impression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?report_explicit_impression@config_property_base@fc@@IEAA_NW4impression_kind@2@@Z
    bool report_explicit_impression(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?report_explicit_impression_if_cached@config_property_base@fc@@IEAAXXZ
    void report_explicit_impression_if_cached();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_flight_id@config_property_base@fc@@IEAAXI_N@Z
    void set_flight_id(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_impression_reporting_flag@config_property_base@fc@@IEAAXW4impression_kind@2@@Z
    void set_impression_reporting_flag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?type@config_property_base@fc@@IEBAPEBDXZ
    char const * type() const;
};
} // namespace fc
