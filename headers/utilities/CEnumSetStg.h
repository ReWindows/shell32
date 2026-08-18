#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CEnumSetStg {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumSetStg@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumSetStg@@QEAA@PEBV0@@Z
    CEnumSetStg(CEnumSetStg const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumSetStg@@QEAA@XZ
    CEnumSetStg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumSetStg@@UEAAJPEAPEAUIEnumSTATPROPSETSTG@@@Z
    virtual long Clone(IEnumSTATPROPSETSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CEnumSetStg@@QEAAJQEBQEBU_tagpropertykey@@IK@Z
    long Initialize(_tagpropertykey const * const * const, unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumSetStg@@UEAAJKPEAUtagSTATPROPSETSTG@@PEAK@Z
    virtual long Next(unsigned long, tagSTATPROPSETSTG *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumSetStg@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumSetStg@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumSetStg@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumSetStg@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumSetStg@@AEAA@XZ
    ~CEnumSetStg();
};
