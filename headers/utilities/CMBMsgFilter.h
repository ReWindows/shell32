#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CMBMsgFilter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMsgHook@CMBMsgFilter@@SA_JH_K_J@Z
    static int64_t GetMsgHook(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@CMBMsgFilter@@QEAAHPEAX@Z
    int Pop(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Push@CMBMsgFilter@@QEAAXPEAXPEAVCMenuBand@@PEAUIUnknown@@@Z
    void Push(void *, CMenuBand *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReEngage@CMBMsgFilter@@QEAAXPEBX@Z
    void ReEngage(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetakeCapture@CMBMsgFilter@@QEAAXXZ
    void RetakeCapture();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContext@CMBMsgFilter@@QEAAXPEAXH@Z
    void SetContext(void *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHook@CMBMsgFilter@@QEAAXHH@Z
    void SetHook(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DismissMenu@CMBMsgFilter@@QEAAXPEAUHWND__@@H@Z
    void _DismissMenu(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTopPtr@CMBMsgFilter@@QEAAPEAVCMenuBand@@XZ
    CMenuBand * _GetTopPtr();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindowOwnerPtr@CMBMsgFilter@@QEAAPEAVCMenuBand@@PEAUHWND__@@@Z
    CMenuBand * _GetWindowOwnerPtr(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMouseMsgs@CMBMsgFilter@@QEAA_JPEAUtagMSG@@H@Z
    int64_t _HandleMouseMsgs(tagMSG *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HitTest@CMBMsgFilter@@QEAAPEAVCMenuBand@@UtagPOINT@@PEAPEAUHWND__@@@Z
    CMenuBand * _HitTest(tagPOINT, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TopFilterMouseMessage@CMBMsgFilter@@QEAAJPEAUtagMSG@@HPEAVCMenuBand@@@Z
    long _TopFilterMouseMessage(tagMSG *, int, CMenuBand *);
};
