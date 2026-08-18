#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CFSDropTargetHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncDrop@CFSDropTargetHelper@@QEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUIFolderView2@@PEAUIShellFolder2@@PEAUIUnknown@@@Z
    long AsyncDrop(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, IFolderView2*, IShellFolder2*, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFSDropTargetHelper@@QEAA@XZ
    ~CFSDropTargetHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AreItemsInDataObjectInThisFolder@CFSDropTargetHelper@@AEAAHXZ
    int _AreItemsInDataObjectInThisFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Drop@CFSDropTargetHelper@@AEAAJXZ
    long _Drop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDestNames@CFSDropTargetHelper@@AEAAJPEBGPEAPEAG@Z
    long _GetDestNames(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveCopyHDROP@CFSDropTargetHelper@@AEAAXPEAUHDROP__@@@Z
    void _MoveCopyHDROP(HDROP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveCopyHIDA@CFSDropTargetHelper@@AEAAXXZ
    void _MoveCopyHIDA();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveSelectIcons@CFSDropTargetHelper@@AEAAXPEAUIShellFolder@@PEBQEFBU_ITEMID_CHILD@@IPEAXPEBGPEAUHDROP__@@@Z
    void _MoveSelectIcons(IShellFolder *, _ITEMID_CHILD & volatile * const *, unsigned int, void *, unsigned short const *, HDROP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CheckRestoredFiles@CFSDropTargetHelper@@CAXPEBG@Z
    static void s_CheckRestoredFiles(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DoDropThreadProc@CFSDropTargetHelper@@CAKPEAX@Z
    static unsigned long s_DoDropThreadProc(void *);
};
