#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class FileExplorerTelemetryCommon {
public:
    class ActionDetails;
    class ActionSourceTelemetry;
    class FileExplorerLogging;
    class details;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserSessionId@FileExplorerTelemetryCommon@@YAJPEAUIUnknown@@PEAU_GUID@@@Z
    long GetBrowserSessionId(IUnknown *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowAndCursorDetails@FileExplorerTelemetryCommon@@YA?AUtagRECT@@XZ
    tagRECT GetWindowAndCursorDetails();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemInSearch@FileExplorerTelemetryCommon@@YA_NPEAUIShellItem@@@Z
    bool IsItemInSearch(IShellItem *);
};
