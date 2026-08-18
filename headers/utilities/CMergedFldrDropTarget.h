#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CMergedFldrDropTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMergedFldrDropTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMergedFldrDropTarget@@QEAA@PEAVCMergedFolder@@PEAUHWND__@@@Z
    CMergedFldrDropTarget(CMergedFolder *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CMergedFldrDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CMergedFldrDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CMergedFldrDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CMergedFldrDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CMergedFldrDropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMergedFldrDropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMergedFldrDropTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CMergedFldrDropTarget@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCommonIDList@CMergedFldrDropTarget@@AEAAHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    int _IsCommonIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCommonWrappedIDList@CMergedFldrDropTarget@@AEAAHPEAUIDataObject@@PEAUIAugmentedShellFolder@@@Z
    int _IsCommonWrappedIDList(IDataObject *, IAugmentedShellFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDropEffectFolders@CMergedFldrDropTarget@@AEAAJXZ
    long _SetDropEffectFolders();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMergedFldrDropTarget@@AEAA@XZ
    ~CMergedFldrDropTarget();
};
