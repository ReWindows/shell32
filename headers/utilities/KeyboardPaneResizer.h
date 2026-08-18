#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class KeyboardPaneResizer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSizerForPane@KeyboardPaneResizer@@SAPEAVCDUISizerElement@@W4FocusedPane@1@PEAVElement@DirectUI@@@Z
    static CDUISizerElement * FindSizerForPane(int, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleKeyPress@KeyboardPaneResizer@@SA_NPEAUtagMSG@@PEAVCDUIViewFrame@@@Z
    static bool HandleKeyPress(tagMSG *, CDUIViewFrame *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetectFocusedPane@KeyboardPaneResizer@@CA?AW4FocusedPane@1@PEAVCDUIViewFrame@@@Z
    static int DetectFocusedPane(CDUIViewFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizePane@KeyboardPaneResizer@@CA_NW4ResizeDirection@1@PEAVCDUIViewFrame@@@Z
    static bool ResizePane(int, CDUIViewFrame *);
};
