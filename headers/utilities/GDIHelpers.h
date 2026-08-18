#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class GDIHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z
    long AddBackgroundForIcon(HBITMAP__*, unsigned long const &, tagSIZE const &, tagSIZE const &, tagSIZE const &, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z
    void FillRectARGB(HDC__*, tagRECT const *, unsigned char, unsigned long, bool);
};
