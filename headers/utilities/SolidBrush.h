#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace Gdiplus {
class SolidBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@SolidBrush@Gdiplus@@QEAA?AW4Status@2@AEBVColor@2@@Z
    int SetColor(::Gdiplus::Color const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SolidBrush@Gdiplus@@QEAA@AEBVColor@1@@Z
    SolidBrush(::Gdiplus::Color const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SolidBrush@Gdiplus@@UEAA@XZ
    virtual ~SolidBrush();
};
} // namespace Gdiplus
