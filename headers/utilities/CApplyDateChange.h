#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CApplyDateChange {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CApplyDateChange@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyToPropVariant@CApplyDateChange@@UEAAJAEBUtagPROPVARIANT@@PEAU2@@Z
    virtual long ApplyToPropVariant(tagPROPVARIANT const &, tagPROPVARIANT *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplyDateChange@@QEAA@AEBU_tagpropertykey@@U_FILETIME@@@Z
    CApplyDateChange(_tagpropertykey const &, _FILETIME);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyKey@CApplyDateChange@@UEAAJPEAU_tagpropertykey@@@Z
    virtual long GetPropertyKey(_tagpropertykey *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CApplyDateChange@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CApplyDateChange@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyKey@CApplyDateChange@@UEAAJAEBU_tagpropertykey@@@Z
    virtual long SetPropertyKey(_tagpropertykey const &);
};
