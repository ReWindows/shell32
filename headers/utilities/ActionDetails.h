#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
namespace FileExplorerTelemetryCommon {
class ActionDetails {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActionDetails@FileExplorerTelemetryCommon@@QEAA@XZ
    ActionDetails();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActionProperties@ActionDetails@FileExplorerTelemetryCommon@@UEAA?AW4ActionProperties@2@XZ
    virtual int GetActionProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@ActionDetails@FileExplorerTelemetryCommon@@UEAAPEBGXZ
    virtual unsigned short const * GetCommandString();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenuType@ActionDetails@FileExplorerTelemetryCommon@@UEAA?AW4ContextMenuType@2@XZ
    virtual int GetContextMenuType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsKeyboardInvoked@ActionDetails@FileExplorerTelemetryCommon@@UEAA_NXZ
    virtual bool GetIsKeyboardInvoked();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRibbonCommandId@ActionDetails@FileExplorerTelemetryCommon@@UEAAIXZ
    virtual unsigned int GetRibbonCommandId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRibbonUIExecutionVerb@ActionDetails@FileExplorerTelemetryCommon@@UEAA?AW4UI_EXECUTIONVERB@@XZ
    virtual int GetRibbonUIExecutionVerb();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWasCloudFlyoutHovered@ActionDetails@FileExplorerTelemetryCommon@@UEAA_NXZ
    virtual bool GetWasCloudFlyoutHovered();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?ComputeTelemetryData@ActionDetails@FileExplorerTelemetryCommon@@MEAAXXZ
    virtual void ComputeTelemetryData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDataReadyForTelemetry@ActionDetails@FileExplorerTelemetryCommon@@AEAAXXZ
    void EnsureDataReadyForTelemetry();
};
} // namespace FileExplorerTelemetryCommon
