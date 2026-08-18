#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CACLHistory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CACLHistory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CACLHistory@@QEAA@XZ
    CACLHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CACLHistory@@UEAAJPEAPEAUIEnumString@@@Z
    virtual long Clone(IEnumString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnumOptions@CACLHistory@@UEAAJPEAK@Z
    virtual long GetEnumOptions(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CACLHistory@@UEAAJKPEAPEAGPEAK@Z
    virtual long Next(unsigned long, unsigned short * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextItem@CACLHistory@@UEAAJPEAGKPEAK@Z
    virtual long NextItem(unsigned short *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CACLHistory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CACLHistory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CACLHistory@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnumOptions@CACLHistory@@UEAAJK@Z
    virtual long SetEnumOptions(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CACLHistory@@UEAAJK@Z
    virtual long Skip(unsigned long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAlternateDataItem@CACLHistory@@IEAAXPEBG0H@Z
    void _AddAlternateDataItem(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAlternateData@CACLHistory@@IEAAXXZ
    void _CreateAlternateData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAlternateItem@CACLHistory@@IEAAXPEBG@Z
    void _CreateAlternateItem(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeAlternateDataItem@CACLHistory@@KAHPEAX0@Z
    static int _FreeAlternateDataItem(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextItem@CACLHistory@@IEAAJPEAPEAGPEAU_FILETIME@@@Z
    long _GetNextItem(unsigned short * *, _FILETIME *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CACLHistory@@IEAA@XZ
    ~CACLHistory();
};
