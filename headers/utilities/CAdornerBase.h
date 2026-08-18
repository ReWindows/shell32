#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CAdornerBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAdornerBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBounds@CAdornerBase@@UEAAJPEAUtagRECT@@0@Z
    virtual long ComputeBounds(tagRECT *, tagRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?Draw@CAdornerBase@@UEAAJPEAUHDC__@@@Z
    virtual long Draw(HDC__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAdornerBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAdornerBase@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAdornerBase@@IEAA@XZ
    CAdornerBase();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAdornerBase@@MEAA@XZ
    virtual ~CAdornerBase();
};
