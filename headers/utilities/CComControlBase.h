#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
namespace ATL {
class CComControlBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoVerbProperties@CComControlBase@ATL@@QEAAJPEBUtagRECT@@PEAUHWND__@@@Z
    long DoVerbProperties(tagRECT const *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireViewChange@CComControlBase@ATL@@QEAAJXZ
    long FireViewChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZoomInfo@CComControlBase@ATL@@QEAAXAEAUATL_DRAWINFO@@@Z
    void GetZoomInfo(ATL_DRAWINFO &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IOleInPlaceObject_InPlaceDeactivate@CComControlBase@ATL@@QEAAJXZ
    long IOleInPlaceObject_InPlaceDeactivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IOleInPlaceObject_SetObjectRects@CComControlBase@ATL@@QEAAJPEBUtagRECT@@0@Z
    long IOleInPlaceObject_SetObjectRects(tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IOleInPlaceObject_UIDeactivate@CComControlBase@ATL@@QEAAJXZ
    long IOleInPlaceObject_UIDeactivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IOleObject_Close@CComControlBase@ATL@@QEAAJK@Z
    long IOleObject_Close(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IOleObject_SetExtent@CComControlBase@ATL@@QEAAJKPEAUtagSIZE@@@Z
    long IOleObject_SetExtent(unsigned long, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InPlaceActivate@CComControlBase@ATL@@QEAAJJPEBUtagRECT@@@Z
    long InPlaceActivate(long, tagRECT const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDraw@CComControlBase@ATL@@UEAAJAEAUATL_DRAWINFO@@@Z
    virtual long OnDraw(ATL_DRAWINFO &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDrawAdvanced@CComControlBase@ATL@@UEAAJAEAUATL_DRAWINFO@@@Z
    virtual long OnDrawAdvanced(ATL_DRAWINFO &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlFocus@CComControlBase@ATL@@QEAAHH@Z
    int SetControlFocus(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComControlBase@ATL@@QEAA@XZ
    ~CComControlBase();
};
} // namespace ATL
