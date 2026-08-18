#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CPropertyValue {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPropertyValue@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPropertyValue@@QEAA@XZ
    CPropertyValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyKey@CPropertyValue@@UEAAJPEAU_tagpropertykey@@@Z
    virtual long GetPropertyKey(_tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CPropertyValue@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long GetValue(tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitValue@CPropertyValue@@UEAAJAEBUtagPROPVARIANT@@@Z
    virtual long InitValue(tagPROPVARIANT const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPropertyValue@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPropertyValue@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyKey@CPropertyValue@@UEAAJAEBU_tagpropertykey@@@Z
    virtual long SetPropertyKey(_tagpropertykey const &);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropertyValue@@AEAA@XZ
    ~CPropertyValue();
};
