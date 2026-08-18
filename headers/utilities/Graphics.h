#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
namespace Gdiplus {
class Graphics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawImage@Graphics@Gdiplus@@QEAA?AW4Status@2@PEAVImage@2@AEBVRect@2@HHHHW4Unit@2@PEBVImageAttributes@2@P6AHPEAX@Z4@Z
    int DrawImage(::Gdiplus::Image *, ::Gdiplus::Rect const &, int, int, int, int, int, ::Gdiplus::ImageAttributes const *, int ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawImage@Graphics@Gdiplus@@QEAA?AW4Status@2@PEAVImage@2@HHHHHHW4Unit@2@@Z
    int DrawImage(::Gdiplus::Image *, int, int, int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRectangle@Graphics@Gdiplus@@QEAA?AW4Status@2@PEBVPen@2@HHHH@Z
    int DrawRectangle(::Gdiplus::Pen const *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillEllipse@Graphics@Gdiplus@@QEAA?AW4Status@2@PEBVBrush@2@HHHH@Z
    int FillEllipse(::Gdiplus::Brush const *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectangle@Graphics@Gdiplus@@QEAA?AW4Status@2@PEBVBrush@2@HHHH@Z
    int FillRectangle(::Gdiplus::Brush const *, int, int, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Graphics@Gdiplus@@QEAA@PEAUHDC__@@@Z
    Graphics(HDC__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Graphics@Gdiplus@@QEAA@PEAVImage@1@@Z
    Graphics(::Gdiplus::Image *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@Graphics@Gdiplus@@QEAA?AW4Status@2@AEBVRect@2@W4CombineMode@2@@Z
    int SetClip(::Gdiplus::Rect const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositingMode@Graphics@Gdiplus@@QEAA?AW4Status@2@W4CompositingMode@2@@Z
    int SetCompositingMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterpolationMode@Graphics@Gdiplus@@QEAA?AW4Status@2@W4InterpolationMode@2@@Z
    int SetInterpolationMode(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Graphics@Gdiplus@@QEAA@XZ
    ~Graphics();
};
} // namespace Gdiplus
