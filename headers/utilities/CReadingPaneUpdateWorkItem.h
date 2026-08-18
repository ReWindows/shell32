#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CReadingPaneUpdateWorkItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CReadingPaneUpdateWorkItem@@SAJAEBUREADINGPANE_UPDATE_PARAMS@@PEAPEAUIFrameWorkItem@@@Z
    static long CreateInstance(READINGPANE_UPDATE_PARAMS const &, IFrameWorkItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CReadingPaneUpdateWorkItem@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CReadingPaneUpdateWorkItem@@UEAAJXZ
    virtual long DoWork();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CReadingPaneUpdateWorkItem@@AEAA@XZ
    CReadingPaneUpdateWorkItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CReadingPaneUpdateWorkItem@@AEAAJAEBUREADINGPANE_UPDATE_PARAMS@@@Z
    long _Initialize(READINGPANE_UPDATE_PARAMS const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CReadingPaneUpdateWorkItem@@EEAA@XZ
    virtual ~CReadingPaneUpdateWorkItem();
};
