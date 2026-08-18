#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CAggregateMultipleValues {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAggregateMultipleValues@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendValue@CAggregateMultipleValues@@UEAAJAEBUtagPROPVARIANT@@@Z
    virtual long AppendValue(tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteValue@CAggregateMultipleValues@@UEAAJAEBUtagPROPVARIANT@@@Z
    virtual long DeleteValue(tagPROPVARIANT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CAggregateMultipleValues@@UEAAJPEAH@Z
    virtual long GetCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyKey@CAggregateMultipleValues@@UEAAJPEAU_tagpropertykey@@@Z
    virtual long GetPropertyKey(_tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubValueFlags@CAggregateMultipleValues@@UEAAJHPEAH@Z
    virtual long GetSubValueFlags(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CAggregateMultipleValues@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long GetValue(tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAt@CAggregateMultipleValues@@UEAAJHPEAUtagPROPVARIANT@@@Z
    virtual long GetValueAt(int, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValue@CAggregateMultipleValues@@UEAAJAEBUtagPROPVARIANT@@PEAH@Z
    virtual long HasValue(tagPROPVARIANT const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitSubValueFlags@CAggregateMultipleValues@@UEAAJHH@Z
    virtual long InitSubValueFlags(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitValue@CAggregateMultipleValues@@UEAAJAEBUtagPROPVARIANT@@@Z
    virtual long InitValue(tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertValue@CAggregateMultipleValues@@UEAAJHAEBUtagPROPVARIANT@@@Z
    virtual long InsertValue(int, tagPROPVARIANT const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAggregateMultipleValues@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAggregateMultipleValues@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyKey@CAggregateMultipleValues@@UEAAJAEBU_tagpropertykey@@@Z
    virtual long SetPropertyKey(_tagpropertykey const &);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAggregateMultipleValues@@AEAA@XZ
    ~CAggregateMultipleValues();
};
