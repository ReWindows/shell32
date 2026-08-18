#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
namespace FileExplorerTelemetryCommon {
class ActionSourceTelemetry {
public:
    class ActionSourceContext;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithDataObjectAndDetails_@ActionSourceTelemetry@FileExplorerTelemetryCommon@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEAUIDataObject@@AEAVActionDetails@2@@Z
    void ActionSourceWithDataObjectAndDetails_(int, IUnknown *, IDataObject *, WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithIDList_@ActionSourceTelemetry@FileExplorerTelemetryCommon@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void ActionSourceWithIDList_(int, IUnknown *, _ITEMIDLIST_ABSOLUTE const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithShellItemAndDetails_@ActionSourceTelemetry@FileExplorerTelemetryCommon@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEAUIShellItem@@AEAVActionDetails@2@H@Z
    void ActionSourceWithShellItemAndDetails_(int, IUnknown *, IShellItem *, WindissectOpaque &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithShellItemArrayAndDetails_@ActionSourceTelemetry@FileExplorerTelemetryCommon@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEAUIShellItemArray@@AEAVActionDetails@2@H@Z
    void ActionSourceWithShellItemArrayAndDetails_(int, IUnknown *, IShellItemArray *, WindissectOpaque &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithShellItem_@ActionSourceTelemetry@FileExplorerTelemetryCommon@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEAUIShellItem@@@Z
    void ActionSourceWithShellItem_(int, IUnknown *, IShellItem *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@ActionSourceTelemetry@FileExplorerTelemetryCommon@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ActionSourceTelemetry@FileExplorerTelemetryCommon@@MEAAXXZ
    virtual void Initialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClassifyAndLogActionSource@ActionSourceTelemetry@FileExplorerTelemetryCommon@@CAXAEBUActionSourceContext@12@AEBUTraceOriginContext@2@@Z
    static void ClassifyAndLogActionSource(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHomeGroupingFromShellItem@ActionSourceTelemetry@FileExplorerTelemetryCommon@@CAJPEAUIShellItem@@PEAW4HomeGrouping@2@@Z
    static long GetHomeGroupingFromShellItem(IShellItem *, int *);
};
} // namespace FileExplorerTelemetryCommon
