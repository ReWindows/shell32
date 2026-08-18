#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CPartialPropertyChangeOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPartialPropertyChangeOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyToPropVariant@CPartialPropertyChangeOperation@@UEAAJAEBUtagPROPVARIANT@@PEAU2@@Z
    virtual long ApplyToPropVariant(tagPROPVARIANT const &, tagPROPVARIANT *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPartialPropertyChangeOperation@@QEAA@XZ
    CPartialPropertyChangeOperation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfo@CPartialPropertyChangeOperation@@UEAAJPEAW4PKA_FLAGS@@PEAU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetInfo(int *, _tagpropertykey *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyKey@CPartialPropertyChangeOperation@@UEAAJPEAU_tagpropertykey@@@Z
    virtual long GetPropertyKey(_tagpropertykey *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPartialPropertyChangeOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPartialPropertyChangeOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyKey@CPartialPropertyChangeOperation@@UEAAJAEBU_tagpropertykey@@@Z
    virtual long SetPropertyKey(_tagpropertykey const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyUnmodifiedValues@CPartialPropertyChangeOperation@@AEAAJPEAUIMultipleValues@@PEAPEAU2@PEAH@Z
    long _CopyUnmodifiedValues(IMultipleValues *, IMultipleValues * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertValues@CPartialPropertyChangeOperation@@AEAAJPEAUIMultipleValues@@H@Z
    long _InsertValues(IMultipleValues *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPartialPropertyChangeOperation@@AEAA@XZ
    ~CPartialPropertyChangeOperation();
};
