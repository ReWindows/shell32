#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class PropSheetAccAnnotation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllHwndAccProperties@PropSheetAccAnnotation@@QEAAXXZ
    void ClearAllHwndAccProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeAllLinesAndIconsInvisibleToNarrator@PropSheetAccAnnotation@@QEAAXPEAUHWND__@@@Z
    void MakeAllLinesAndIconsInvisibleToNarrator(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropSheetAccAnnotation@@QEAA@XZ
    ~PropSheetAccAnnotation();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLineOrIconWindowStyle@PropSheetAccAnnotation@@AEAA_NPEAUHWND__@@@Z
    bool IsLineOrIconWindowStyle(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeHwndInvisibleToNarrator@PropSheetAccAnnotation@@AEAAXPEAUHWND__@@@Z
    void MakeHwndInvisibleToNarrator(HWND__*);
};
