#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CReadingPaneHostUpdateWorkItem {
public:
    class HostProbeResult;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CReadingPaneHostUpdateWorkItem@@SAJAEBUREADINGPANEHOST_UPDATE_PARAMS@@PEAPEAUIFrameWorkItem@@@Z
    static long CreateInstance(READINGPANEHOST_UPDATE_PARAMS const &, IFrameWorkItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CReadingPaneHostUpdateWorkItem@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CReadingPaneHostUpdateWorkItem@@UEAAJXZ
    virtual long DoWork();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CReadingPaneHostUpdateWorkItem@@AEAA@XZ
    CReadingPaneHostUpdateWorkItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CReadingPaneHostUpdateWorkItem@@AEAAJAEBUREADINGPANEHOST_UPDATE_PARAMS@@@Z
    long _Initialize(READINGPANEHOST_UPDATE_PARAMS const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CReadingPaneHostUpdateWorkItem@@EEAA@XZ
    virtual ~CReadingPaneHostUpdateWorkItem();
};
