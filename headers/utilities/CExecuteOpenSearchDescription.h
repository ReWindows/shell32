#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CExecuteOpenSearchDescription {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CExecuteOpenSearchDescription@@UEAAJXZ
    virtual long Execute();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFavorite@CExecuteOpenSearchDescription@@AEAAJPEAUIShellItem@@PEAPEAU2@@Z
    long _CreateFavorite(IShellItem *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLocationDescriptionForItem@CExecuteOpenSearchDescription@@AEAAJPEAUIShellItem@@AEBU_GUID@@PEAPEAX@Z
    long _GetLocationDescriptionForItem(IShellItem *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSameLocation@CExecuteOpenSearchDescription@@AEAAHPEAUILocationDescription@@0@Z
    int _IsSameLocation(ILocationDescription *, ILocationDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveLocationAsSearchConnector@CExecuteOpenSearchDescription@@AEAAJPEAUILocationDescription@@PEBGPEAHPEAPEAUIShellItem@@@Z
    long _SaveLocationAsSearchConnector(ILocationDescription *, unsigned short const *, int *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowErrorDialog@CExecuteOpenSearchDescription@@AEAAJJ@Z
    long _ShowErrorDialog(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowInstallDialog@CExecuteOpenSearchDescription@@AEAAJPEBGPEAUILocationDescription@@@Z
    long _ShowInstallDialog(unsigned short const *, ILocationDescription *);
};
