#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace ATL {
class CComBSTR {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CComBSTR@ATL@@QEAAJPEBGH@Z
    long Append(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Length@CComBSTR@ATL@@QEBAIXZ
    unsigned int Length() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadFromStream@CComBSTR@ATL@@QEAAJPEAUIStream@@@Z
    long ReadFromStream(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteToStream@CComBSTR@ATL@@QEAAJPEAUIStream@@@Z
    long WriteToStream(IStream *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComBSTR@ATL@@QEAA@XZ
    ~CComBSTR();
};
} // namespace ATL
