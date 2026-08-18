#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
class CBaseBrowserService {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBaseBrowserService@@QEAA@XZ
    CBaseBrowserService();
    // Category: Method | Source: PE Export
    // Symbol: ?CreateViewWindow@CBaseBrowserService@@UEAAJPEAUIShellItem@@PEAUIShellView@@1PEAUtagRECT@@PEAPEAUHWND__@@@Z
    virtual long CreateViewWindow(IShellItem *, IShellView *, IShellView *, tagRECT *, HWND__* *);
    // Category: Method | Source: PE Export
    // Symbol: ?DisplayParseError@CBaseBrowserService@@UEAAJJPEBG@Z
    virtual long DisplayParseError(long, unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBrowserIndex@CBaseBrowserService@@UEAAKXZ
    virtual unsigned long GetBrowserIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CBaseBrowserService@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHistoryObject@CBaseBrowserService@@UEAAJPEAPEAUIOleObject@@PEAPEAUIStream@@PEAPEAUIBindCtx@@@Z
    virtual long GetHistoryObject(IOleObject * *, IStream * *, IBindCtx * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigateState@CBaseBrowserService@@UEAAJPEAW4tagBNSTATE@@@Z
    virtual long GetNavigateState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPalette@CBaseBrowserService@@UEAAJPEAPEAUHPALETTE__@@@Z
    virtual long GetPalette(HPALETTE__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPidl@CBaseBrowserService@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetPidl(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPropertyBag@CBaseBrowserService@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyBag(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CBaseBrowserService@@UEAAJPEAUIShellView@@PEAGK@Z
    virtual long GetTitle(IShellView *, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTravelLog@CBaseBrowserService@@UEAAJPEAPEAUITravelLog@@@Z
    virtual long GetTravelLog(ITravelLog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlWindowShown@CBaseBrowserService@@UEAAJIPEAH@Z
    virtual long IsControlWindowShown(unsigned int, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?RegisterWindow@CBaseBrowserService@@UEAAJHH@Z
    virtual long RegisterWindow(int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAsDefFolderSettings@CBaseBrowserService@@UEAAJXZ
    virtual long SetAsDefFolderSettings();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFlags@CBaseBrowserService@@UEAAJKK@Z
    virtual long SetFlags(unsigned long, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetNavigateState@CBaseBrowserService@@UEAAJW4tagBNSTATE@@@Z
    virtual long SetNavigateState(int);
    // Category: Method | Source: PE Export
    // Symbol: ?ShowControlWindow@CBaseBrowserService@@UEAAJIH@Z
    virtual long ShowControlWindow(unsigned int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateBackForwardState@CBaseBrowserService@@UEAAJXZ
    virtual long UpdateBackForwardState();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateWindowList@CBaseBrowserService@@UEAAJXZ
    virtual long UpdateWindowList();
};
