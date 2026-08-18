#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CBaseCommandHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handler@CBaseCommandHandler@@UEAAJPEAPEAUIPopupCommandHandler@@@Z
    virtual long get_Handler(IPopupCommandHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ID@CBaseCommandHandler@@UEAAJPEAI@Z
    virtual long get_ID(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@CBaseCommandHandler@@UEAAJPEAPEAG@Z
    virtual long get_Label(unsigned short * *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBaseCommandHandler@@MEAA@XZ
    virtual ~CBaseCommandHandler();
};
