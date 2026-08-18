#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CScrollingHwnd {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CScrollingHwnd@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScrollingHwnd@@QEAA@PEAUHWND__@@@Z
    CScrollingHwnd(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanScroll@CScrollingHwnd@@UEAAJPEBUtagPOINT@@PEAH@Z
    virtual long CanScroll(tagPOINT const *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CScrollingHwnd@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CScrollingHwnd@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollLine@CScrollingHwnd@@UEAAJHG@Z
    virtual long ScrollLine(int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CScrollingHwnd@@SAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(HWND__*, _GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanScroll@CScrollingHwnd@@AEAAHHH@Z
    int _CanScroll(int, int);
};
