#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CDrawProgressBar {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDrawProgressBar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayText@CDrawProgressBar@@UEAAJPEAPEAG@Z
    virtual long GetDisplayText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CDrawProgressBar@@UEAAJW4PROPCTL_RECT_TYPE@@PEAUHDC__@@PEBUtagSIZE@@PEAU4@@Z
    virtual long GetSize(int, HDC__*, tagSIZE const *, tagSIZE *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDrawProgressBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDrawProgressBar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CDrawProgressBar@@UEAAJPEAUIUnknown@@@Z
    virtual long SetValue(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowlessDraw@CDrawProgressBar@@UEAAJPEAUHDC__@@PEBUtagRECT@@H@Z
    virtual long WindowlessDraw(HDC__*, tagRECT const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawProgressBar@@UEAA@XZ
    virtual ~CDrawProgressBar();
};
