#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CNetAssocList {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNetAssocList@@QEAA@PEAVCNetFolderUI@@PEBUIDNETRESOURCE@@PEBG@Z
    CNetAssocList(CNetFolderUI *, IDNETRESOURCE const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAssoc@CNetAssocList@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long CreateAssoc(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssocTable@CNetAssocList@@UEAAPEBIPEAK@Z
    virtual unsigned int const * GetAssocTable(unsigned long *);
};
