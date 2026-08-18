#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CUserFilesDescriptionEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUserFilesDescriptionEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CUserFilesDescriptionEnum@@UEAAJPEAPEAUIEnumUnknown@@@Z
    virtual long Clone(IEnumUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CUserFilesDescriptionEnum@@UEAAJKPEAPEAUIUnknown@@PEAK@Z
    virtual long Next(unsigned long, IUnknown * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUserFilesDescriptionEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUserFilesDescriptionEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CUserFilesDescriptionEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CUserFilesDescriptionEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CUserFilesDescriptionEnum@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeMembers@CUserFilesDescriptionEnum@@AEAAJPEAUIHomeGroupStatus@@@Z
    long _InitializeMembers(IHomeGroupStatus *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUserFilesDescriptionEnum@@AEAA@XZ
    ~CUserFilesDescriptionEnum();
};
