#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CEnumPropStg {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumPropStg@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumPropStg@@QEAA@XZ
    CEnumPropStg();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumPropStg@@QEAA@PEBV0@@Z
    CEnumPropStg(CEnumPropStg const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumPropStg@@UEAAJPEAPEAUIEnumSTATPROPSTG@@@Z
    virtual long Clone(IEnumSTATPROPSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CEnumPropStg@@QEAAJAEBU_GUID@@QEBQEBU_tagpropertykey@@I@Z
    long Initialize(_GUID const &, _tagpropertykey const * const * const, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumPropStg@@UEAAJKPEAUtagSTATPROPSTG@@PEAK@Z
    virtual long Next(unsigned long, tagSTATPROPSTG *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumPropStg@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumPropStg@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumPropStg@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumPropStg@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumPropStg@@AEAA@XZ
    ~CEnumPropStg();
};
