#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 28 member(s).
class CByValueSingleConflictInterrupt {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CByValueSingleConflictInterrupt@@QEAA@XZ
    CByValueSingleConflictInterrupt();
    // Category: Method | Source: PE Export
    // Symbol: ?CancelRequest@CByValueSingleConflictInterrupt@@UEAAJK@Z
    virtual long CancelRequest(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CByValueSingleConflictInterrupt@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConflictCount@CByValueSingleConflictInterrupt@@UEAAJPEAK@Z
    virtual long GetConflictCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CByValueSingleConflictInterrupt@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestinationItem@CByValueSingleConflictInterrupt@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetDestinationItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CByValueSingleConflictInterrupt@@UEAAJPEAW4OPERATION_INTERRUPT_FLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolutionDescription@CByValueSingleConflictInterrupt@@UEAAJW4RESOLUTION_TYPE@@PEAPEAG1@Z
    virtual long GetResolutionDescription(int, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CByValueSingleConflictInterrupt@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceItem@CByValueSingleConflictInterrupt@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSourceItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CByValueSingleConflictInterrupt@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CByValueSingleConflictInterrupt@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConflictData@CByValueSingleConflictInterrupt@@UEAAJKPEAUINDIVIDUAL_CONFLICT_FAST_DATA@@PEAPEAUIShellItem@@1@Z
    virtual long RequestConflictData(unsigned long, INDIVIDUAL_CONFLICT_FAST_DATA *, IShellItem * *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CByValueSingleConflictInterrupt@@QEAAJPEAUIConflictInterrupt@@@Z
    long RuntimeClassInitialize(IConflictInterrupt *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CByValueSingleConflictInterrupt@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetConflictItemDataCallback@CByValueSingleConflictInterrupt@@UEAAJPEAUIConflictItemDataCallback@@@Z
    virtual long SetConflictItemDataCallback(IConflictItemDataCallback *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CByValueSingleConflictInterrupt@@UEAA@XZ
    virtual ~CByValueSingleConflictInterrupt();
};
