#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CCopyHook {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCopyHook@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCopyHook@@QEAA@XZ
    CCopyHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyCallback@CCopyHook@@UEAAIPEAUHWND__@@IIPEBGK1K@Z
    virtual unsigned int CopyCallback(HWND__*, unsigned int, unsigned int, unsigned short const *, unsigned long, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyCallback@CCopyHook@@UEAAIPEAUHWND__@@IIPEBDK1K@Z
    virtual unsigned int CopyCallback(HWND__*, unsigned int, unsigned int, char const *, unsigned long, char const *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCopyHook@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCopyHook@@UEAAKXZ
    virtual unsigned long Release();
};
