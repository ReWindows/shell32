#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CByValueOperationInterrupt {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CByValueOperationInterrupt@@QEAA@XZ
    CByValueOperationInterrupt();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CByValueOperationInterrupt@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CByValueOperationInterrupt@@UEAAJPEAW4OPERATION_INTERRUPT_FLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CByValueOperationInterrupt@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CByValueOperationInterrupt@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CByValueOperationInterrupt@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CByValueOperationInterrupt@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CByValueOperationInterrupt@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CByValueOperationInterrupt@@UEAA@XZ
    virtual ~CByValueOperationInterrupt();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CByValueOperationInterrupt@@IEAAJPEAUIOperationInterrupt@@@Z
    long Initialize(IOperationInterrupt *);
};
