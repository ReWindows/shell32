#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CPropertyStoreHelper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z
    CPropertyStoreHelper(IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPropertiesFrom@CPropertyStoreHelper@@QEAAJPEAUIPropertyStore@@PEBU_tagpropertykey@@K_N@Z
    long CopyPropertiesFrom(IPropertyStore *, _tagpropertykey const *, unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPropertiesFrom@CPropertyStoreHelper@@QEAAJPEAUIPropertyStore@@PEBQEBU_tagpropertykey@@K_N@Z
    long CopyPropertiesFrom(IPropertyStore *, _tagpropertykey const * const *, unsigned long, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropertyStoreHelper@@QEAA@XZ
    ~CPropertyStoreHelper();
};
