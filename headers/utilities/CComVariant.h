#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
namespace ATL {
class CComVariant {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CComVariant@ATL@@QEAA@XZ
    CComVariant();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CComVariant@ATL@@QEAAJXZ
    long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CComVariant@ATL@@QEAAJPEAT_ULARGE_INTEGER@@@Z
    long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClear@CComVariant@ATL@@QEAAJXZ
    long InternalClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadFromStream@CComVariant@ATL@@QEAAJPEAUIStream@@G@Z
    long ReadFromStream(IStream *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteToStream@CComVariant@ATL@@QEAAJPEAUIStream@@@Z
    long WriteToStream(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteToStream@CComVariant@ATL@@QEAAJPEAUIStream@@G@Z
    long WriteToStream(IStream *, unsigned short);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComVariant@ATL@@QEAA@XZ
    ~CComVariant();
};
} // namespace ATL
