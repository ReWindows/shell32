#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CFTAssocStore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFTAssocStore@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFTAssocStore@@QEAA@XZ
    CFTAssocStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAccess@CFTAssocStore@@UEAAJXZ
    virtual long CheckAccess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumAssocInfo@CFTAssocStore@@UEAAJKPEBGKPEAPEAUIEnumAssocInfo@@@Z
    virtual long EnumAssocInfo(unsigned long, unsigned short const *, unsigned long, IEnumAssocInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssocInfo@CFTAssocStore@@UEAAJPEBGKPEAPEAUIAssocInfo@@@Z
    virtual long GetAssocInfo(unsigned short const *, unsigned long, IAssocInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssocInfoFromClassKey@CFTAssocStore@@UEAAJPEAUHKEY__@@PEBGKPEAPEAUIAssocInfo@@@Z
    virtual long GetAssocInfoFromClassKey(HKEY__*, unsigned short const *, unsigned long, IAssocInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComplexAssocInfo@CFTAssocStore@@UEAAJPEBGK0KPEAPEAUIAssocInfo@@@Z
    virtual long GetComplexAssocInfo(unsigned short const *, unsigned long, unsigned short const *, unsigned long, IAssocInfo * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@CFTAssocStore@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFTAssocStore@@UEAAKXZ
    virtual unsigned long Release();
};
