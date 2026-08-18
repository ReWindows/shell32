#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class DesktopIconLayoutMapper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorIndexMapForNewDesktop@DesktopIconLayoutMapper@@SAJPEBVDesktopData@@PEBVDesktopMatchInformation@@PEAUMatchingWorkspaceMapping@@_KPEA_N@Z
    static long GetMonitorIndexMapForNewDesktop(DesktopData const *, DesktopMatchInformation const *, MatchingWorkspaceMapping *, uint64_t, bool *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClosestMatchingMonitor@DesktopIconLayoutMapper@@CAJPEBVWorkspaceData@@PEBVDesktopData@@PEBUMatchingWorkspaceMapping@@_KPEA_K@Z
    static long FindClosestMatchingMonitor(WorkspaceData const *, DesktopData const *, MatchingWorkspaceMapping const *, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindExactMatchingMonitor@DesktopIconLayoutMapper@@CAJPEBVWorkspaceData@@PEBVDesktopData@@PEBUMatchingWorkspaceMapping@@_KPEA_K@Z
    static long FindExactMatchingMonitor(WorkspaceData const *, DesktopData const *, MatchingWorkspaceMapping const *, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPrimaryMonitorMatch@DesktopIconLayoutMapper@@CAJPEBVWorkspaceData@@PEBVDesktopData@@PEBUMatchingWorkspaceMapping@@_KPEA_K@Z
    static long FindPrimaryMonitorMatch(WorkspaceData const *, DesktopData const *, MatchingWorkspaceMapping const *, uint64_t, uint64_t *);
};
