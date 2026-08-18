#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CAutoPlayDirect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAutoPlayDirect@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoPlayDirect@@QEAA@XZ
    CAutoPlayDirect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDirectForVolume@CAutoPlayDirect@@UEAAJXZ
    virtual long CancelDirectForVolume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirectForVolume@CAutoPlayDirect@@UEAAJPEBG@Z
    virtual long DirectForVolume(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessFolder@CAutoPlayDirect@@UEAAJPEBG@Z
    virtual long ProcessFolder(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAutoPlayDirect@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutoPlayDirect@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecutePathWithSite@CAutoPlayDirect@@AEAAJPEBG@Z
    long _ExecutePathWithSite(unsigned short const *);
};
