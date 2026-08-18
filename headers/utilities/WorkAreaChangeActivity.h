#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
namespace DesktopIconLayoutTelemetry {
class WorkAreaChangeActivity {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconsFromDataModel@WorkAreaChangeActivity@DesktopIconLayoutTelemetry@@QEBAXPEAUIconGridItem@@_K@Z
    void GetIconsFromDataModel(IconGridItem *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GridPositionFromDataModelIsOffscreen@WorkAreaChangeActivity@DesktopIconLayoutTelemetry@@QEBAXAEBUIconGridItem@@@Z
    void GridPositionFromDataModelIsOffscreen(IconGridItem const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GridWorkspaceChange@WorkAreaChangeActivity@DesktopIconLayoutTelemetry@@QEBAXPEBUWorkAreaWithDPI@@PEBUGridWorkspace@@HUtagPOINT@@IIW4SetIconFlags@@W4GridChangeReason@@@Z
    void GridWorkspaceChange(WorkAreaWithDPI const *, GridWorkspace const *, int, tagPOINT, unsigned int, unsigned int, int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemFromViewIsOffscreen@WorkAreaChangeActivity@DesktopIconLayoutTelemetry@@QEAAXUtagPOINT@@@Z
    void ItemFromViewIsOffscreen(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsFromViewAreOffscreen@WorkAreaChangeActivity@DesktopIconLayoutTelemetry@@QEAAXI@Z
    void ItemsFromViewAreOffscreen(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconsFromView@WorkAreaChangeActivity@DesktopIconLayoutTelemetry@@QEBAXPEAUIconGridItem@@_K@Z
    void SetIconsFromView(IconGridItem *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WorkAreaChangeActivity@DesktopIconLayoutTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToCurrentThread@WorkAreaChangeActivity@DesktopIconLayoutTelemetry@@QEAA?AV12@XZ
    WindissectOpaque TransferToCurrentThread();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WorkAreaChangeActivity@DesktopIconLayoutTelemetry@@QEAA@XZ
    ~WorkAreaChangeActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WorkAreaChangeActivity@DesktopIconLayoutTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WorkAreaChangeActivity@DesktopIconLayoutTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopIconLayoutTelemetry
