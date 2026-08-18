#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CNetFolderDataObj {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNetFolderDataObj@@QEAA@PEAVCNetFolderUI@@PEBU_ITEMIDLIST_ABSOLUTE@@IPEBQEFBU_ITEMID_CHILD@@@Z
    CNetFolderDataObj(CNetFolderUI *, _ITEMIDLIST_ABSOLUTE const *, unsigned int, _ITEMID_CHILD & volatile * const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@CNetFolderDataObj@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long GetData(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryGetData@CNetFolderDataObj@@UEAAJPEAUtagFORMATETC@@@Z
    virtual long QueryGetData(tagFORMATETC *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFileSystemDataObject@CNetFolderDataObj@@AEAAJXZ
    long _IsFileSystemDataObject();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNetFolderDataObj@@EEAA@XZ
    virtual ~CNetFolderDataObj();
};
