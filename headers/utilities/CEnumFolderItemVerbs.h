#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CEnumFolderItemVerbs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumFolderItemVerbs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumFolderItemVerbs@@QEAA@PEAVCFolderItemVerbs@@@Z
    CEnumFolderItemVerbs(CFolderItemVerbs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumFolderItemVerbs@@UEAAJPEAPEAUIEnumVARIANT@@@Z
    virtual long Clone(IEnumVARIANT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumFolderItemVerbs@@UEAAJKPEAUtagVARIANT@@PEAK@Z
    virtual long Next(unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumFolderItemVerbs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumFolderItemVerbs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumFolderItemVerbs@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumFolderItemVerbs@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumFolderItemVerbs@@AEAA@XZ
    ~CEnumFolderItemVerbs();
};
