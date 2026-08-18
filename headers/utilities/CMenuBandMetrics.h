#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CMenuBandMetrics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMenuBandMetrics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CMenuBandMetrics@@QEAAXPEAUHWND__@@@Z
    void Init(HWND__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMenuBandMetrics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMenuBandMetrics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcFont@CMenuBandMetrics@@QEAAPEAUHFONT__@@PEAUHWND__@@PEBGKGPEAH22HH@Z
    HFONT__* _CalcFont(HWND__*, unsigned short const *, unsigned long, unsigned short, int *, int *, int *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetArrowFont@CMenuBandMetrics@@QEAAXPEAUHWND__@@@Z
    void _SetArrowFont(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetChevronFont@CMenuBandMetrics@@QEAAXPEAUHWND__@@@Z
    void _SetChevronFont(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetColors@CMenuBandMetrics@@QEAAXXZ
    void _SetColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMenuFont@CMenuBandMetrics@@QEAAXXZ
    void _SetMenuFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPaintMetrics@CMenuBandMetrics@@QEAAXPEAUHWND__@@@Z
    void _SetPaintMetrics(HWND__*);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMenuBandMetrics@@AEAA@XZ
    ~CMenuBandMetrics();
};
