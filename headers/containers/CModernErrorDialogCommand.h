#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CModernErrorDialogCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handler@CModernErrorDialogCommand@@UEAAJPEAPEAUIPopupCommandHandler@@@Z
    virtual long get_Handler(IPopupCommandHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ID@CModernErrorDialogCommand@@UEAAJPEAI@Z
    virtual long get_ID(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@CModernErrorDialogCommand@@UEAAJPEAPEAG@Z
    virtual long get_Label(unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CModernErrorDialogCommand@@UEAA@XZ
    virtual ~CModernErrorDialogCommand();
};
