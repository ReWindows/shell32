#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CCommandStateBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCommandStateBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommandStateBase@@QEAA@XZ
    CCommandStateBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCommandStateBase@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCommandStateBase@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommandStateBase@@MEAA@XZ
    virtual ~CCommandStateBase();
};
