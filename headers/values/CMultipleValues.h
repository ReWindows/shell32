#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CMultipleValues {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMultipleValues@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendValue@CMultipleValues@@UEAAJAEBUtagPROPVARIANT@@@Z
    virtual long AppendValue(tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteValue@CMultipleValues@@UEAAJAEBUtagPROPVARIANT@@@Z
    virtual long DeleteValue(tagPROPVARIANT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CMultipleValues@@UEAAJPEAH@Z
    virtual long GetCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyKey@CMultipleValues@@UEAAJPEAU_tagpropertykey@@@Z
    virtual long GetPropertyKey(_tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CMultipleValues@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long GetValue(tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAt@CMultipleValues@@UEAAJHPEAUtagPROPVARIANT@@@Z
    virtual long GetValueAt(int, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValue@CMultipleValues@@UEAAJAEBUtagPROPVARIANT@@PEAH@Z
    virtual long HasValue(tagPROPVARIANT const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitValue@CMultipleValues@@UEAAJAEBUtagPROPVARIANT@@@Z
    virtual long InitValue(tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertValue@CMultipleValues@@UEAAJHAEBUtagPROPVARIANT@@@Z
    virtual long InsertValue(int, tagPROPVARIANT const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMultipleValues@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMultipleValues@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyKey@CMultipleValues@@UEAAJAEBU_tagpropertykey@@@Z
    virtual long SetPropertyKey(_tagpropertykey const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureIndividualValuesArray@CMultipleValues@@AEAAJXZ
    long _EnsureIndividualValuesArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ClearPropVariant@CMultipleValues@@CAHPEAUtagPROPVARIANT@@PEAX@Z
    static int s_ClearPropVariant(tagPROPVARIANT *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMultipleValues@@AEAA@XZ
    ~CMultipleValues();
};
