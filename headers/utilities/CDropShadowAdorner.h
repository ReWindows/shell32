#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CDropShadowAdorner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBounds@CDropShadowAdorner@@UEAAJPEAUtagRECT@@0@Z
    virtual long ComputeBounds(tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CDropShadowAdorner@@SAJAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CDropShadowAdorner@@UEAAJPEAUHDC__@@@Z
    virtual long Draw(HDC__*);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDropShadowAdorner@@IEAA@XZ
    CDropShadowAdorner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAdornmentBitmap@CDropShadowAdorner@@MEAAPEAUHBITMAP__@@K@Z
    virtual HBITMAP__* _GetAdornmentBitmap(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectShadowTemplate@CDropShadowAdorner@@IEAAJH@Z
    long _SelectShadowTemplate(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDropShadowAdorner@@MEAA@XZ
    virtual ~CDropShadowAdorner();
};
