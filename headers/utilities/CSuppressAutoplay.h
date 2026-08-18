#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CSuppressAutoplay {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSuppressAutoplay@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowAutoPlay@CSuppressAutoplay@@UEAAJPEBGK0K@Z
    virtual long AllowAutoPlay(unsigned short const *, unsigned long, unsigned short const *, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSuppressAutoplay@@QEAA@XZ
    CSuppressAutoplay();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSuppressAutoplay@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSuppressAutoplay@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterAutoplayCanceller@CSuppressAutoplay@@AEAAJXZ
    long _RegisterAutoplayCanceller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterAutoplayCanceller@CSuppressAutoplay@@AEAAJXZ
    long _UnregisterAutoplayCanceller();
};
