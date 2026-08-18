#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
class CFSIDLData {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFSIDLData@@QEAA@PEBU_ITEMIDLIST_ABSOLUTE@@IPEBQEFBU_ITEMIDLIST_RELATIVE@@PEAUIDataObject@@@Z
    CFSIDLData(_ITEMIDLIST_ABSOLUTE const *, unsigned int, _ITEMIDLIST_RELATIVE & volatile * const *, IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHDrop@CFSIDLData@@QEAAJPEAUtagSTGMEDIUM@@H@Z
    long CreateHDrop(tagSTGMEDIUM *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@CFSIDLData@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long GetData(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHDrop@CFSIDLData@@QEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    long GetHDrop(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryGetData@CFSIDLData@@UEAAJPEAUtagFORMATETC@@@Z
    virtual long QueryGetData(tagFORMATETC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@CFSIDLData@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@H@Z
    virtual long SetData(tagFORMATETC *, tagSTGMEDIUM *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFSIDLData@@UEAA@XZ
    virtual ~CFSIDLData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFileGroupDescriptor@CFSIDLData@@AEAAJPEAUtagSTGMEDIUM@@@Z
    long CreateFileGroupDescriptor(tagSTGMEDIUM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateZoneIdMedium@CFSIDLData@@AEAAJJPEAUtagSTGMEDIUM@@@Z
    long CreateZoneIdMedium(long, tagSTGMEDIUM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnterpriseIdForSelection@CFSIDLData@@AEAAJPEAPEAG@Z
    long GetEnterpriseIdForSelection(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileAttributesW@CFSIDLData@@AEAAJPEAUtagSTGMEDIUM@@@Z
    long GetFileAttributesW(tagSTGMEDIUM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileContents@CFSIDLData@@AEAAJJPEAUtagSTGMEDIUM@@@Z
    long GetFileContents(long, tagSTGMEDIUM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileGroupDescriptor@CFSIDLData@@AEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    long GetFileGroupDescriptor(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileGroupZoneIds@CFSIDLData@@AEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    long GetFileGroupZoneIds(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNetResourceArray@CFSIDLData@@AEAAJPEAUtagSTGMEDIUM@@@Z
    long GetNetResourceArray(tagSTGMEDIUM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFolder@CFSIDLData@@AEAAJPEAPEAUIShellItemArray@@PEA_N@Z
    long HasFolder(IShellItemArray * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartComputationOfEnterpriseIdForSelectionAsync@CFSIDLData@@AEAAJXZ
    long StartComputationOfEnterpriseIdForSelectionAsync();
};
