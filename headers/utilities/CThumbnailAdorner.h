#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CThumbnailAdorner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBounds@CThumbnailAdorner@@UEAAJPEAUtagRECT@@0@Z
    virtual long ComputeBounds(tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CThumbnailAdorner@@SAJPEAUIImageListImageDecorator@@00AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IImageListImageDecorator *, IImageListImageDecorator *, IImageListImageDecorator *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CThumbnailAdorner@@UEAAJPEAUHDC__@@@Z
    virtual long Draw(HDC__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThumbnailAdorner@@UEAA@XZ
    virtual ~CThumbnailAdorner();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CThumbnailAdorner@@IEAA@PEAUIImageListImageDecorator@@00@Z
    CThumbnailAdorner(IImageListImageDecorator *, IImageListImageDecorator *, IImageListImageDecorator *);
};
