#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class AddStateRepoVerbs_CloudFiles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AddStateRepoVerbs_CloudFiles@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@AddStateRepoVerbs_CloudFiles@FileExplorerTelemetry@@QEAAXHH@Z
    void Stop(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddStateRepoVerbs_CloudFiles@FileExplorerTelemetry@@QEAA@XZ
    ~AddStateRepoVerbs_CloudFiles();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddStateRepoVerbs_CloudFiles@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddStateRepoVerbs_CloudFiles@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
