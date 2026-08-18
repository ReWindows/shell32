#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class DesktopMatcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindOrCreateDesktop@DesktopMatcher@@SAJPEAVDesktopDictionary@@PEBUGridWorkspace@@_KPEA_KPEA_N42@Z
    static long FindOrCreateDesktop(DesktopDictionary *, GridWorkspace const *, uint64_t, uint64_t *, bool *, bool *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompatibility@DesktopMatcher@@SAJPEBVWorkspaceData@@0PEAW4IconLayoutCompatibility@@PEBVDesktopMatchInformation@@@Z
    static long GetCompatibility(WorkspaceData const *, WorkspaceData const *, int *, DesktopMatchInformation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeIconsToCompatibleDesktop@DesktopMatcher@@SAJPEAVDesktopDictionary@@PEAVDesktopData@@_NPEBV3@PEA_N4@Z
    static long InitializeIconsToCompatibleDesktop(DesktopDictionary *, DesktopData *, bool, DesktopData const *, bool *, bool *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompatibility@DesktopMatcher@@CAJPEAVDesktopMatchInformation@@PEAVDesktopData@@_NPEAW4IconLayoutCompatibility@@PEA_N@Z
    static long GetCompatibility(DesktopMatchInformation *, DesktopData *, bool, int *, bool *);
};
