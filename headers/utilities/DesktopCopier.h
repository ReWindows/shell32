#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class DesktopCopier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyDesktop@DesktopCopier@@SAJPEAVDesktopMatchInformation@@@Z
    static long CopyDesktop(DesktopMatchInformation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyLayout@DesktopCopier@@SAJPEAVDesktopMatchInformation@@PEBUMatchingWorkspaceMapping@@@Z
    static long CopyLayout(DesktopMatchInformation *, MatchingWorkspaceMapping const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateBaseDesktopIfNeeded@DesktopCopier@@SAJPEAVDesktopMatchInformation@@@Z
    static long GenerateBaseDesktopIfNeeded(DesktopMatchInformation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReLink@DesktopCopier@@SAJPEBVDesktopMatchInformation@@PEBUMatchingWorkspaceMapping@@@Z
    static long ReLink(DesktopMatchInformation const *, MatchingWorkspaceMapping const *);
};
