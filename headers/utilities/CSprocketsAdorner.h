#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CSprocketsAdorner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBounds@CSprocketsAdorner@@UEAAJPEAUtagRECT@@0@Z
    virtual long ComputeBounds(tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSprocketsAdorner@@SAJAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CSprocketsAdorner@@UEAAJPEAUHDC__@@@Z
    virtual long Draw(HDC__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureWorkArea@CSprocketsAdorner@@IEAAJHPEAUHDC__@@@Z
    long _EnsureWorkArea(int, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAdornmentBitmap@CSprocketsAdorner@@MEAAPEAUHBITMAP__@@K@Z
    virtual HBITMAP__* _GetAdornmentBitmap(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSprocketsAdorner@@MEAA@XZ
    virtual ~CSprocketsAdorner();
};
