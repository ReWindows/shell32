#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CFTEnumAssocInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFTEnumAssocInfo@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CFTEnumAssocInfo@@UEAAJPEAPEAUIEnumAssocInfo@@@Z
    virtual long Clone(IEnumAssocInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CFTEnumAssocInfo@@UEAAJKPEBGK@Z
    virtual long Init(unsigned long, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CFTEnumAssocInfo@@UEAAJPEAPEAUIAssocInfo@@@Z
    virtual long Next(IAssocInfo * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@CFTEnumAssocInfo@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFTEnumAssocInfo@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Reset@CFTEnumAssocInfo@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CFTEnumAssocInfo@@UEAAJK@Z
    virtual long Skip(unsigned long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumHKCR@CFTEnumAssocInfo@@IEAAJKPEAGK@Z
    long _EnumHKCR(unsigned long, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumKCRSkip@CFTEnumAssocInfo@@IEAAHKPEBG@Z
    int _EnumKCRSkip(unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumProgIDActions@CFTEnumAssocInfo@@IEAAJPEAGK@Z
    long _EnumProgIDActions(unsigned short *, unsigned long);
};
