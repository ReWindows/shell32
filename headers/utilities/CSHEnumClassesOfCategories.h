#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CSHEnumClassesOfCategories {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSHEnumClassesOfCategories@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CSHEnumClassesOfCategories@@UEAAJPEAPEAUIEnumGUID@@@Z
    virtual long Clone(IEnumGUID * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CSHEnumClassesOfCategories@@UEAAJKPEAU_GUID@@PEAK@Z
    virtual long Next(unsigned long, _GUID *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSHEnumClassesOfCategories@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSHEnumClassesOfCategories@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CSHEnumClassesOfCategories@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CSHEnumClassesOfCategories@@UEAAJK@Z
    virtual long Skip(unsigned long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSHEnumClassesOfCategories@@IEAA@XZ
    CSHEnumClassesOfCategories();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSHEnumClassesOfCategories@@IEAAJKPEBU_GUID@@K0@Z
    long Initialize(unsigned long, _GUID const *, unsigned long, _GUID const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSHEnumClassesOfCategories@@MEAA@XZ
    virtual ~CSHEnumClassesOfCategories();
};
