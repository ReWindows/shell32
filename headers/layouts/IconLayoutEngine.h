#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 31 member(s).
class IconLayoutEngine {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushDataModelAndSave@IconLayoutEngine@@QEAAJXZ
    long FlushDataModelAndSave();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IconLayoutEngine@@QEAA@PEAUIDesktopIconLayoutDataModel@@@Z
    IconLayoutEngine(IDesktopIconLayoutDataModel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@IconLayoutEngine@@QEAAJPEAUIListControl@@PEAUIShellFolder2@@@Z
    long Init(IListControl *, IShellFolder2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpotlightIconPresentCheck@IconLayoutEngine@@QEAA_NXZ
    bool IsSpotlightIconPresentCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogGridWorkspaces@IconLayoutEngine@@QEAAJPEAVDesktopIconMoves@DesktopIconLayoutTelemetry@@@Z
    long LogGridWorkspaces(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogIconMove@IconLayoutEngine@@QEAAJ_KAEBUtagPOINT@@1PEAVDesktopIconMoves@DesktopIconLayoutTelemetry@@@Z
    long LogIconMove(uint64_t, tagPOINT const &, tagPOINT const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshDataModel@IconLayoutEngine@@QEAAJ_N@Z
    long RefreshDataModel(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCollection@IconLayoutEngine@@QEAAJPEAUIItemCollection@@PEA_N@Z
    long SetCollection(IItemCollection *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSpotlightIconInitialized@IconLayoutEngine@@QEAAJXZ
    long SetSpotlightIconInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconGridSize@IconLayoutEngine@@QEAAJPEAVWorkAreaChangeActivity@DesktopIconLayoutTelemetry@@_NW4GridChangeReason@@PEA_N@Z
    long UpdateIconGridSize(WindissectOpaque *, bool, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSpotlightIconPositions@IconLayoutEngine@@QEAAJXZ
    long UpdateSpotlightIconPositions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateView@IconLayoutEngine@@QEAAJPEAVWorkAreaChangeActivity@DesktopIconLayoutTelemetry@@_N@Z
    long UpdateView(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkAreaGrid@IconLayoutEngine@@QEAAJPEBUWorkAreaWithDPI@@_KPEAVWorkAreaChangeActivity@DesktopIconLayoutTelemetry@@PEA_N@Z
    long UpdateWorkAreaGrid(WorkAreaWithDPI const *, uint64_t, WindissectOpaque *, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IconLayoutEngine@@QEAA@XZ
    ~IconLayoutEngine();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateGutterSize@IconLayoutEngine@@AEAA?BMJJ@Z
    float CalculateGutterSize(long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataModelItemToIdList@IconLayoutEngine@@AEAAJ_NAEBUIconGridItem@@PEAPEAU_ITEMIDLIST_RELATIVE@@@Z
    long DataModelItemToIdList(bool, IconGridItem const &, _ITEMIDLIST_RELATIVE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetIconFlags@IconLayoutEngine@@AEAA?BW4SetIconFlags@@_N@Z
    int GetSetIconFlags(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GridToPhysicalPosition@IconLayoutEngine@@AEAA?BUtagPOINT@@AEBUtagPOINTF@@HAEA_N@Z
    tagPOINT GridToPhysicalPosition(tagPOINTF const &, int, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpotlightIconInitialized@IconLayoutEngine@@AEAA_NXZ
    bool IsSpotlightIconInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpotlightIconPlacedAtLocation@IconLayoutEngine@@AEAA_NW4SpotlightIconPlacedLocation@@@Z
    bool IsSpotlightIconPlacedAtLocation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpotlightIconPresent@IconLayoutEngine@@AEAA_NXZ
    bool IsSpotlightIconPresent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSpotlightIconPreviousLocation@IconLayoutEngine@@AEAAJUtagPOINTF@@UIconGridPosition@@111@Z
    long LogSpotlightIconPreviousLocation(tagPOINTF, IconGridPosition, IconGridPosition, IconGridPosition, IconGridPosition);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PhysicalToGridPosition@IconLayoutEngine@@AEAAJAEBUtagPOINT@@AEAUIconGridPosition@@AEA_N@Z
    long PhysicalToGridPosition(tagPOINT const &, IconGridPosition &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadStreamFromPropertyBag@IconLayoutEngine@@AEAAJXZ
    long ReadStreamFromPropertyBag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveDataModelToPropertyBag@IconLayoutEngine@@AEAAJXZ
    long SaveDataModelToPropertyBag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSpotlightIconPlacedAtLocation@IconLayoutEngine@@AEAAJW4SpotlightIconPlacedLocation@@@Z
    long SetSpotlightIconPlacedAtLocation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSpotlightIconRollbackedToTopRight@IconLayoutEngine@@AEAAJXZ
    long SetSpotlightIconRollbackedToTopRight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellItemToDataModelItem@IconLayoutEngine@@AEAAJ_NPEAUIShellItem2@@AEAUIconGridItem@@@Z
    long ShellItemToDataModelItem(bool, IShellItem2*, IconGridItem &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSpotlightIconPosition@IconLayoutEngine@@AEAAJPEAUIconGridItem@@_K@Z
    long UpdateSpotlightIconPosition(IconGridItem *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkAreaToGridWorkspace@IconLayoutEngine@@AEAA?AUGridWorkspace@@AEBUWorkAreaWithDPI@@@Z
    GridWorkspace WorkAreaToGridWorkspace(WorkAreaWithDPI const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkAreasToGridWorkspaces@IconLayoutEngine@@AEAAJPEBUWorkAreaWithDPI@@_KPEAPEAUGridWorkspace@@@Z
    long WorkAreasToGridWorkspaces(WorkAreaWithDPI const *, uint64_t, GridWorkspace * *);
};
