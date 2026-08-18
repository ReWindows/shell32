#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CModifiedState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMonitorEntry@CModifiedState@@QEAAJPEBGPEBUtagRECT@@@Z
    long AddMonitorEntry(unsigned short const *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWallpaper@CModifiedState@@QEAAJPEBGPEAPEAGPEA_N@Z
    long GetWallpaper(unsigned short const *, unsigned short * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyImageRendered@CModifiedState@@QEAAXXZ
    void NotifyImageRendered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CModifiedState@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWallpaper@CModifiedState@@QEAAJPEBG0@Z
    long SetWallpaper(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWallpaper@CModifiedState@@QEAAJPEBUtagRECT@@PEBG@Z
    long SetWallpaper(tagRECT const *, unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendEntryForMonitor@CModifiedState@@AEAAJPEBG0@Z
    long _AppendEntryForMonitor(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindEntryForMonitor@CModifiedState@@AEBAHPEBG@Z
    int _FindEntryForMonitor(unsigned short const *) const;
};
