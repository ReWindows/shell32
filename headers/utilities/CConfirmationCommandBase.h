#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CConfirmationCommandBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CConfirmationCommandBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CConfirmationCommandBase@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterruptResponse@CConfirmationCommandBase@@UEAAJPEAW4OPERATION_INTERRUPT_RESPONSE_SINGLE@@@Z
    virtual long GetInterruptResponse(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@CConfirmationCommandBase@@UEAAJPEAPEAG@Z
    virtual long GetName(unsigned short * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CConfirmationCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CConfirmationCommandBase@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConfirmationCommandBase@@IEAA@XZ
    CConfirmationCommandBase();
};
