#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class ID2D1DeviceContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmap@ID2D1DeviceContext@@QEAAJUD2D_SIZE_U@@PEBXIAEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z
    long CreateBitmap(D2D_SIZE_U, void const *, unsigned int, D2D1_BITMAP_PROPERTIES1const &, ID2D1Bitmap1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z
    void DrawImage(ID2D1Effect *, D2D_POINT_2F const *, D2D_RECT_F const *, int, int);
};
