#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CreateObjectTaskDelegate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@CreateObjectTaskDelegate@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resume@CreateObjectTaskDelegate@@UEAAJXZ
    virtual long Resume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CreateObjectTaskDelegate@@UEAAJPEAUIUnknown@@PEAG@Z
    virtual long Start(IUnknown *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CreateObjectTaskDelegate@@UEAAJPEAJ@Z
    virtual long Stop(long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateObjectTaskDelegate@@UEAA@XZ
    virtual ~CreateObjectTaskDelegate();
};
