#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CDrawPercentFull {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDrawPercentFull@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayText@CDrawPercentFull@@UEAAJPEAPEAG@Z
    virtual long GetDisplayText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CDrawPercentFull@@UEAAJW4PROPCTL_RECT_TYPE@@PEAUHDC__@@PEBUtagSIZE@@PEAU4@@Z
    virtual long GetSize(int, HDC__*, tagSIZE const *, tagSIZE *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDrawPercentFull@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDrawPercentFull@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CDrawPercentFull@@UEAAJPEAUIUnknown@@@Z
    virtual long SetValue(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowlessDraw@CDrawPercentFull@@UEAAJPEAUHDC__@@PEBUtagRECT@@H@Z
    virtual long WindowlessDraw(HDC__*, tagRECT const *, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_MakeColor@CDrawPercentFull@@MEAAXPEAKPEAW4FILLSTATES@@KH@Z
    virtual void v_MakeColor(unsigned long *, int *, unsigned long, int);
};
