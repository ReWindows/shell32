#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
class CVersionPropertyStore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVersionPropertyStore@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVersionPropertyStore@@QEAA@XZ
    CVersionPropertyStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CVersionPropertyStore@@UEAAJXZ
    virtual long Commit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CVersionPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z
    virtual long GetAt(unsigned long, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassIdentity@CVersionPropertyStore@@UEAAJPEAPEAG@Z
    virtual long GetClassIdentity(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CVersionPropertyStore@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CVersionPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVersionPropertyStore@@UEAAJPEBGK@Z
    virtual long Initialize(unsigned short const *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPropertyWritable@CVersionPropertyStore@@UEAAJAEBU_tagpropertykey@@@Z
    virtual long IsPropertyWritable(_tagpropertykey const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVersionPropertyStore@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVersionPropertyStore@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CVersionPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetValue(_tagpropertykey const &, tagPROPVARIANT const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VerQueryValue@CVersionPropertyStore@@AEAAJPEBGHPEAPEAXPEAI@Z
    long _VerQueryValue(unsigned short const *, int, void * *, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVersionPropertyStore@@AEAA@XZ
    ~CVersionPropertyStore();
};
