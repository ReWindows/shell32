#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 25 member(s).
class CFileSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsFile@CFileSource@@QEAA_NPEBG@Z
    bool ContainsFile(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidates@CFileSource@@QEAAJPEBGW4GCF_FLAGS@@PEAHPEAPEAVCWallpaperCollection@@@Z
    long GetCandidates(unsigned short const *, int, int *, CWallpaperCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecificFile@CFileSource@@QEAAJKPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long GetSpecificFile(unsigned long, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecificFileCount@CFileSource@@QEAAKXZ
    unsigned long GetSpecificFileCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@CFileSource@@QEAA_NPEAV1@@Z
    bool IsEqual(CFileSource *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileSource@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CFileSource@@QEAAJPEAUICachedPrivateProfile@@@Z
    long Save(ICachedPrivateProfile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ConvertToShellItemArray@CFileSource@@SAJPEAV1@PEAPEAUIShellItemArray@@@Z
    static long s_ConvertToShellItemArray(CFileSource *, IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateFromShellItemArray@CFileSource@@SAJPEAUIShellItemArray@@PEAPEAV1@@Z
    static long s_CreateFromShellItemArray(IShellItemArray *, CFileSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateFromShellItems@CFileSource@@SAJPEFBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellItemArray@@PEAPEAV1@@Z
    static long s_CreateFromShellItems(_ITEMIDLIST_ABSOLUTE & volatile *, IShellItemArray *, CFileSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsItemValidWallpaper@CFileSource@@SA_NPEAUIShellItem@@@Z
    static bool s_IsItemValidWallpaper(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LoadFromProfile@CFileSource@@SAJPEAUICachedPrivateProfile@@PEAPEAV1@H@Z
    static long s_LoadFromProfile(ICachedPrivateProfile *, CFileSource * *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAllCandidates@CFileSource@@AEAAJPEAPEAV?$CRefCountedDPA@V?$CDPAItemIdList@U_ITEMIDLIST_ABSOLUTE@@@@@@@Z
    long _GetAllCandidates(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCandidateFilePosition@CFileSource@@AEAAJPEBGPEAK@Z
    long _GetCandidateFilePosition(unsigned short const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellFolder@CFileSource@@AEAAJPEAPEAUIShellFolder@@@Z
    long _GetShellFolder(IShellFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellItem@CFileSource@@AEAAJPEAPEAUIShellItem@@@Z
    long _GetShellItem(IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveExtraSections@CFileSource@@AEAAXPEAUICachedPrivateProfile@@K@Z
    void _RemoveExtraSections(ICachedPrivateProfile *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CompareArrays@CFileSource@@CA_NPEAV?$CRefCountedDPA@V?$CDPAItemIdList@U_ITEMIDLIST_ABSOLUTE@@@@@@0@Z
    static bool s_CompareArrays(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CompareItems@CFileSource@@CA_NPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    static bool s_CompareItems(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ExtensionIsWallpaperFile@CFileSource@@CA_NPEBG@Z
    static bool s_ExtensionIsWallpaperFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LoadPIDL@CFileSource@@CAJPEAUICachedPrivateProfile@@PEBG1_NPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU3@PEA_NH@Z
    static long s_LoadPIDL(ICachedPrivateProfile *, unsigned short const *, unsigned short const *, bool, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE * *, bool *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LoadPIDLFromPath@CFileSource@@CAJPEAUICachedPrivateProfile@@PEBG1_NPEAPEAU_ITEMIDLIST_ABSOLUTE@@PEA_NH@Z
    static long s_LoadPIDLFromPath(ICachedPrivateProfile *, unsigned short const *, unsigned short const *, bool, _ITEMIDLIST_ABSOLUTE * *, bool *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SaveChildPIDL@CFileSource@@CAJPEAVCMultiSzBuilderW@@PEFBU_ITEMIDLIST_RELATIVE@@K@Z
    static long s_SaveChildPIDL(CMultiSzBuilderW *, _ITEMIDLIST_RELATIVE & volatile *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SavePIDL@CFileSource@@CAJPEAVCMultiSzBuilderW@@PEBGPEFBU_ITEMIDLIST_RELATIVE@@@Z
    static long s_SavePIDL(CMultiSzBuilderW *, unsigned short const *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileSource@@AEAA@XZ
    ~CFileSource();
};
