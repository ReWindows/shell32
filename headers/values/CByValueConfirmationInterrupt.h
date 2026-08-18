#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 25 member(s).
class CByValueConfirmationInterrupt {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CByValueConfirmationInterrupt@@QEAA@XZ
    CByValueConfirmationInterrupt();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CByValueConfirmationInterrupt@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCustomCommands@CByValueConfirmationInterrupt@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetCustomCommands(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultResponse@CByValueConfirmationInterrupt@@UEAAJPEAW4OPERATION_INTERRUPT_FLAGS@@@Z
    virtual long GetDefaultResponse(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CByValueConfirmationInterrupt@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CByValueConfirmationInterrupt@@UEAAJPEAW4OPERATION_INTERRUPT_FLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CByValueConfirmationInterrupt@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetItem(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultipleDelete@CByValueConfirmationInterrupt@@UEAAJPEAH@Z
    virtual long GetMultipleDelete(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CByValueConfirmationInterrupt@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CByValueConfirmationInterrupt@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CByValueConfirmationInterrupt@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CByValueConfirmationInterrupt@@QEAAJPEAUIConfirmationInterrupt@@@Z
    long RuntimeClassInitialize(IConfirmationInterrupt *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CByValueConfirmationInterrupt@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CByValueConfirmationInterrupt@@UEAA@XZ
    virtual ~CByValueConfirmationInterrupt();
};
