#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
class COpenWithUICommandWithPackageFullName {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COpenWithUICommandWithPackageFullName@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COpenWithUICommandWithPackageFullName@@QEAA@PEAUIUnknown@@PEAVCSimpleTaskItem@@HPEBG2@Z
    COpenWithUICommandWithPackageFullName(IUnknown *, CSimpleTaskItem *, int, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullName@COpenWithUICommandWithPackageFullName@@UEAAJPEAPEAG@Z
    virtual long GetPackageFullName(unsigned short * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COpenWithUICommandWithPackageFullName@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COpenWithUICommandWithPackageFullName@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenWithUICommandWithPackageFullName@@EEAA@XZ
    virtual ~COpenWithUICommandWithPackageFullName();
};
