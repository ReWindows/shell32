#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
namespace fc {
class config_props {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?report_impression@config_props@fc@@UEBAXXZ
    virtual void report_impression() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_impression_reporting@config_props@fc@@UEBAXW4impression_kind@2@@Z
    virtual void set_impression_reporting(int) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?validate@config_props@fc@@MEAA?AUvalidate_result@2@XZ
    virtual ::fc::validate_result validate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?compare@config_props@fc@@EEBAHPEAX@Z
    virtual int compare(void *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ensure_store_initialized@config_props@fc@@EEAA_NXZ
    virtual bool ensure_store_initialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?find@config_props@fc@@EEAAPEAUvproperty@details@2@PEBD@Z
    virtual WindissectOpaque * find(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?generate_suppressed_impressions@config_props@fc@@EEAAXXZ
    virtual void generate_suppressed_impressions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?register_property@config_props@fc@@EEAAXPEAUvproperty@details@2@@Z
    virtual void register_property(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?report_store_impression@config_props@fc@@EEAA_NIPEBDW4impression_kind@2@@Z
    virtual bool report_store_impression(unsigned int, char const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?serialize_config@config_props@fc@@EEAAXAEAVoutput_archive@fc_tson@@@Z
    virtual void serialize_config(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?validate@config_props@fc@@EEAAJAEAI@Z
    virtual long validate(unsigned int &);
};
} // namespace fc
