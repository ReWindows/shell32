#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CCommandStoreShimOverCommandFolder {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommandStoreShimOverCommandFolder@@QEAA@AEBU_GUID@@@Z
    CCommandStoreShimOverCommandFolder(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CCommandStoreShimOverCommandFolder@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CCommandStoreShimOverCommandFolder@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InitializeFromPropertyBag@CCommandStoreShimOverCommandFolder@@MEAAJPEAUIPropertyBag@@@Z
    virtual long v_InitializeFromPropertyBag(IPropertyBag *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultCommandFolderAndView@CCommandStoreShimOverCommandFolder@@AEAAJPEAPEAUIShellFolder@@PEAPEAUIShellView@@@Z
    long _GetDefaultCommandFolderAndView(IShellFolder * *, IShellView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExplorerCommand@CCommandStoreShimOverCommandFolder@@AEAAJPEAPEAUIExplorerCommand@@@Z
    long _GetExplorerCommand(IExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExplorerCommandFromFolderViewCB@CCommandStoreShimOverCommandFolder@@AEAAJPEAUIShellFolder@@PEAUIShellView@@PEAPEAUIExplorerCommand@@@Z
    long _GetExplorerCommandFromFolderViewCB(IShellFolder *, IShellView *, IExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSpecifiedCommandFolderAndView@CCommandStoreShimOverCommandFolder@@AEAAJPEAPEAUIShellFolder@@PEAPEAUIShellView@@@Z
    long _GetSpecifiedCommandFolderAndView(IShellFolder * *, IShellView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDesiredCommand@CCommandStoreShimOverCommandFolder@@AEAA_NPEAUIExplorerCommand@@@Z
    bool _IsDesiredCommand(IExplorerCommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchEnumExplorerCommand@CCommandStoreShimOverCommandFolder@@AEAAJPEAUIEnumExplorerCommand@@PEAPEAUIExplorerCommand@@@Z
    long _SearchEnumExplorerCommand(IEnumExplorerCommand *, IExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchEnumUICommand@CCommandStoreShimOverCommandFolder@@AEAAJPEAUIEnumUICommand@@PEAPEAUIExplorerCommand@@@Z
    long _SearchEnumUICommand(IEnumUICommand *, IExplorerCommand * *);
};
