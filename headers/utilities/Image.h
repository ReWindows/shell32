#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
namespace Gdiplus {
class Image {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@Image@Gdiplus@@UEAAPEAV12@XZ
    virtual ::Gdiplus::Image * Clone();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@Image@Gdiplus@@QEAAIXZ
    unsigned int GetFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameCount@Image@Gdiplus@@QEAAIPEBU_GUID@@@Z
    unsigned int GetFrameCount(_GUID const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@Image@Gdiplus@@QEAAIXZ
    unsigned int GetHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHorizontalResolution@Image@Gdiplus@@QEAAMXZ
    float GetHorizontalResolution();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@Image@Gdiplus@@QEAAHXZ
    int GetPixelFormat();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyItem@Image@Gdiplus@@QEAA?AW4Status@2@KIPEAVPropertyItem@2@@Z
    int GetPropertyItem(unsigned long, unsigned int, ::Gdiplus::PropertyItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyItemSize@Image@Gdiplus@@QEAAIK@Z
    unsigned int GetPropertyItemSize(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailImage@Image@Gdiplus@@QEAAPEAV12@IIP6AHPEAX@Z0@Z
    ::Gdiplus::Image * GetThumbnailImage(unsigned int, unsigned int, int ( *)(void *), void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticalResolution@Image@Gdiplus@@QEAAMXZ
    float GetVerticalResolution();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@Image@Gdiplus@@QEAAIXZ
    unsigned int GetWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectActiveFrame@Image@Gdiplus@@QEAA?AW4Status@2@PEBU_GUID@@I@Z
    int SelectActiveFrame(_GUID const *, unsigned int);
};
} // namespace Gdiplus
