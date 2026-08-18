#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CResultsFolderViewCB {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResultsFolderViewCB@@QEAA@PEAVCResultsFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    CResultsFolderViewCB(CResultsFolder *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFlags@CResultsFolderViewCB@@UEAAJPEAW4FOLDERFLAGS@@0@Z
    virtual long GetFolderFlags(int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOpenContainingFolder@CResultsFolderViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long OnOpenContainingFolder(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenContainingFolder@CResultsFolderViewCB@@QEAAJXZ
    long OpenContainingFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CResultsFolderViewCB@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGETWORKINGDIR@CResultsFolderViewCB@@AEAAJKIPEAG@Z
    long OnGETWORKINGDIR(unsigned long, unsigned int, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMergeMenu@CResultsFolderViewCB@@AEAAJKPEAU_QCMINFO@@@Z
    long OnMergeMenu(unsigned long, _QCMINFO *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResultsFolderViewCB@@EEAA@XZ
    virtual ~CResultsFolderViewCB();
};
