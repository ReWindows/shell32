#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class CFontPropertySetStg {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFontPropertySetStg@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFontPropertySetStg@@QEAA@XZ
    CFontPropertySetStg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CFontPropertySetStg@@UEAAJXZ
    virtual long Commit();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CFontPropertySetStg@@UEAAJAEBU_GUID@@PEBU2@KKPEAPEAUIPropertyStorage@@@Z
    virtual long Create(_GUID const &, _GUID const *, unsigned long, unsigned long, IPropertyStorage * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Delete@CFontPropertySetStg@@UEAAJAEBU_GUID@@@Z
    virtual long Delete(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enum@CFontPropertySetStg@@UEAAJPEAPEAUIEnumSTATPROPSETSTG@@@Z
    virtual long Enum(IEnumSTATPROPSETSTG * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CFontPropertySetStg@@UEAAJKPEAU_tagpropertykey@@@Z
    virtual long GetAt(unsigned long, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CFontPropertySetStg@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CFontPropertySetStg@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFontPropertySetStg@@UEAAJPEBGK@Z
    virtual long Initialize(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CFontPropertySetStg@@UEAAJAEBU_GUID@@KPEAPEAUIPropertyStorage@@@Z
    virtual long Open(_GUID const &, unsigned long, IPropertyStorage * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFontPropertySetStg@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFontPropertySetStg@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CFontPropertySetStg@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetValue(_tagpropertykey const &, tagPROPVARIANT const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCFontProps@CFontPropertySetStg@@AEAAJPEBG@Z
    long _CreateCFontProps(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFontPropertySetStg@@AEAA@XZ
    ~CFontPropertySetStg();
};
