#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CSyncStatusHandler {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSyncStatusHandler@@QEAA@XZ
    CSyncStatusHandler();
    // Category: Method | Source: PE Export
    // Symbol: ?Commit@CSyncStatusHandler@@UEAAJXZ
    virtual long Commit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CSyncStatusHandler@@UEAAJKPEAU_tagpropertykey@@@Z
    virtual long GetAt(unsigned long, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CSyncStatusHandler@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CSyncStatusHandler@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSyncStatusHandler@@UEAAJPEAUIShellItem@@K@Z
    virtual long Initialize(IShellItem *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetValue@CSyncStatusHandler@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetValue(_tagpropertykey const &, tagPROPVARIANT const &);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSyncStatusHandler@@EEAA@XZ
    virtual ~CSyncStatusHandler();
};
