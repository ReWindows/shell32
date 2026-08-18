#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CShellFolderViewOC {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CShellFolderViewOC@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnMap@CShellFolderViewOC@@SAPEBU_ATL_CONNMAP_ENTRY@ATL@@PEAH@Z
    static WindissectOpaque const * GetConnMap(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CShellFolderViewOC@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InPlaceDeactivate@CShellFolderViewOC@@UEAAJXZ
    virtual long InPlaceDeactivate();
    // Category: Method | Source: PE Export
    // Symbol: ?IncludeObject@CShellFolderViewOC@@UEAAJPEAUIShellView@@PEFBU_ITEMID_CHILD@@@Z
    virtual long IncludeObject(IShellView *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDefaultCommand@CShellFolderViewOC@@UEAAJPEAUIShellView@@@Z
    virtual long OnDefaultCommand(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateChange@CShellFolderViewOC@@UEAAJPEAUIShellView@@K@Z
    virtual long OnStateChange(IShellView *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessWindowMessage@CShellFolderViewOC@@UEAAHPEAUHWND__@@I_K_JAEA_JK@Z
    virtual int ProcessWindowMessage(HWND__*, unsigned int, uint64_t, int64_t, int64_t &, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?ReactivateAndUndo@CShellFolderViewOC@@UEAAJXZ
    virtual long ReactivateAndUndo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClientSite@CShellFolderViewOC@@UEAAJPEAUIOleClientSite@@@Z
    virtual long SetClientSite(IOleClientSite *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFolderView@CShellFolderViewOC@@UEAAJPEAUIDispatch@@@Z
    virtual long SetFolderView(IDispatch *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetObjectRects@CShellFolderViewOC@@UEAAJPEBUtagRECT@@0@Z
    virtual long SetObjectRects(tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIDeactivate@CShellFolderViewOC@@UEAAJXZ
    virtual long UIDeactivate();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellFolderViewOC@@IEAA@XZ
    CShellFolderViewOC();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellFolderViewOC@@IEAA@XZ
    ~CShellFolderViewOC();
};
