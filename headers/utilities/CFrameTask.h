#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CFrameTask {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFrameTask@@QEAA@PEAUIStream@@PEAUIFrameWorkItem@@@Z
    CFrameTask(IStream *, IFrameWorkItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CFrameTask@@UEAAJXZ
    virtual long InternalResumeRT();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFrameTask@@MEAA@XZ
    virtual ~CFrameTask();
};
