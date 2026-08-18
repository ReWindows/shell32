#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace CMarshaledInterface {
class CMarshalStream {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMarshalStream@CMarshaledInterface@@QEAA@XZ
    CMarshalStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMarshalStream@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z
    long RuntimeClassInitialize(_GUID const &, IUnknown *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMarshalStream@CMarshaledInterface@@UEAA@XZ
    virtual ~CMarshalStream();
};
} // namespace CMarshaledInterface
