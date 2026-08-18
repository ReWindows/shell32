#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 51 member(s).
class FileExplorerTelemetry {
public:
    class AddStateRepoVerbs_CloudFiles;
    class AreAllItemsAvailable;
    class ClearQuickAccess;
    class ContextMenu;
    class ContextMenuActionDetails;
    class DefViewInvoke;
    class DefViewInvokeActionDetails;
    class DefViewSearchNavigate;
    class DefView_Filter;
    class DragDrop;
    class FilePreviewGeneration;
    class PersistFrequentOrdering;
    class ProperTreeHostNavigate;
    class RenavigateTask;
    class SendTo;
    class SetAadAccountAttached;
    class SetShowCloudFilesInQuickAccess;
    class SetShowFrequent;
    class SetShowRecent;
    class SetShowRecommendations;
    class ShellNewContextFileCreate;
    class ShellNewContextMenuCreate;
    class ShellNew_CentennialCacheGeneration;
    class UIItemsView_ViewModeTransition;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccountStatusMonitorOnTokerBrokerStateChanged@FileExplorerTelemetry@@SAXXZ
    static void AccountStatusMonitorOnTokerBrokerStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccountStatusMonitorStarted@FileExplorerTelemetry@@SAXXZ
    static void AccountStatusMonitorStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccountStatusMonitorStopped@FileExplorerTelemetry@@SAXXZ
    static void AccountStatusMonitorStopped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithDataObjectAndDetails_@FileExplorerTelemetry@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEAUIDataObject@@AEAVActionDetails@FileExplorerTelemetryCommon@@@Z
    void ActionSourceWithDataObjectAndDetails_(int, IUnknown *, IDataObject *, WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithIDList_@FileExplorerTelemetry@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void ActionSourceWithIDList_(int, IUnknown *, _ITEMIDLIST_ABSOLUTE const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithShellItemAndDetails_@FileExplorerTelemetry@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEAUIShellItem@@AEAVActionDetails@FileExplorerTelemetryCommon@@H@Z
    void ActionSourceWithShellItemAndDetails_(int, IUnknown *, IShellItem *, WindissectOpaque &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithShellItemArrayAndDetails_@FileExplorerTelemetry@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEAUIShellItemArray@@AEAVActionDetails@FileExplorerTelemetryCommon@@H@Z
    void ActionSourceWithShellItemArrayAndDetails_(int, IUnknown *, IShellItemArray *, WindissectOpaque &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionSourceWithShellItem_@FileExplorerTelemetry@@QEBAXW4NavigationSource@FileExplorerTelemetryBase@@PEAUIUnknown@@PEAUIShellItem@@@Z
    void ActionSourceWithShellItem_(int, IUnknown *, IShellItem *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommandHandlerInvoke_@FileExplorerTelemetry@@QEBAXW4EXPLORER_COMMAND_SQM_ID@@W4EXPLORER_COMMAND_SQM_INVOCATION_LOCATION@@KHPEAUIShellItem@@PEAUIUnknown@@K@Z
    void CommandHandlerInvoke_(int, int, unsigned long, int, IShellItem *, IUnknown *, unsigned long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefView_CleanupAfterContextMenu@FileExplorerTelemetry@@SAXXZ
    static void DefView_CleanupAfterContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FolderViewModeAndImageSize_@FileExplorerTelemetry@@QEAAXPEBU_ITEMIDLIST_ABSOLUTE@@W4FOLDERVIEWMODE@@IPEBGH2HW4DateViewFormat@1@@Z
    void FolderViewModeAndImageSize_(_ITEMIDLIST_ABSOLUTE const *, int, unsigned int, unsigned short const *, int, unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HardwareEvent_@FileExplorerTelemetry@@QEAAXIHPEBG@Z
    void HardwareEvent_(unsigned int, int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@FileExplorerTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavPaneResult_@FileExplorerTelemetry@@QEBAXW4FavoritesState@1@W4ShowAllFoldersState@1@W4ShowLibrariesState@1@W4ExpandToOpenFolderState@1@_NJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void NavPaneResult_(int, int, int, int, bool, long, _ITEMIDLIST_ABSOLUTE const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Search_@FileExplorerTelemetry@@QEBAXPEAUIShellItem@@PEBD@Z
    void Search_(IShellItem *, char const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellNew_CentennialCacheReset@FileExplorerTelemetry@@SAXXZ
    static void ShellNew_CentennialCacheReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellNew_CentennialGetEntriesTimeout@FileExplorerTelemetry@@SAXXZ
    static void ShellNew_CentennialGetEntriesTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIItemsView_ItemsViewFinishedDisplaying_@FileExplorerTelemetry@@QEBAXPEBU_ITEMIDLIST_ABSOLUTE@@U_GUID@@IPEBDJ@Z
    void UIItemsView_ItemsViewFinishedDisplaying_(_ITEMIDLIST_ABSOLUTE const *, _GUID, unsigned int, char const *, long) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FileExplorerTelemetry@@MEAAXXZ
    virtual void Initialize();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHomeGroupingFromShellItem@FileExplorerTelemetry@@CAJPEAUIShellItem@@PEAW4HomeGrouping@FileExplorerTelemetryCommon@@@Z
    static long GetHomeGroupingFromShellItem(IShellItem *, int *);
};
