#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 50 member(s).
class CRecycleBinManager {
public:
    class CacheData;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRecycleBinManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compact@CRecycleBinManager@@UEAAJXZ
    virtual long Compact();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CRecycleBinManager@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayCompaction@CRecycleBinManager@@UEAAJH@Z
    virtual long DelayCompaction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumItems@CRecycleBinManager@@UEAAJKPEAPEAUIEnumRecycleItems@@@Z
    virtual long EnumItems(unsigned long, IEnumRecycleItems * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileData@CRecycleBinManager@@UEAAJPEBGPEAUtagDELETEDITEM@@@Z
    virtual long GetFileData(unsigned short const *, tagDELETEDITEM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@CRecycleBinManager@@UEAAJPEA_K@Z
    virtual long GetItemCount(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecycleBin@CRecycleBinManager@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    virtual long GetRecycleBin(unsigned short const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecycleBinAt@CRecycleBinManager@@UEAAJJAEBU_GUID@@PEAPEAX@Z
    virtual long GetRecycleBinAt(long, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecycleBinCount@CRecycleBinManager@@UEAAJPEAJ@Z
    virtual long GetRecycleBinCount(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsedSpace@CRecycleBinManager@@UEAAJPEA_K@Z
    virtual long GetUsedSpace(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsnSource@CRecycleBinManager@@UEAAJPEAK@Z
    virtual long GetUsnSource(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CRecycleBinManager@@UEAAJXZ
    virtual long IsEmpty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRecycled@CRecycleBinManager@@UEAAJPEBGPEAH@Z
    virtual long IsRecycled(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PurgeAll@CRecycleBinManager@@UEAAJPEAUIFileOperation@@@Z
    virtual long PurgeAll(IFileOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PurgeItems@CRecycleBinManager@@UEAAJPEBGPEAUIFileOperation@@@Z
    virtual long PurgeItems(unsigned short const *, IFileOperation *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRecycleBinManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleItem@CRecycleBinManager@@UEAAJPEBGK_KPEAPEAUIShellItem@@@Z
    virtual long RecycleItem(unsigned short const *, unsigned long, uint64_t, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CRecycleBinManager@@UEAAJXZ
    virtual long Refresh();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRecycleBinManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreItem@CRecycleBinManager@@UEAAJPEAUIShellItem@@PEAUIFileOperation@@@Z
    virtual long RestoreItem(IShellItem *, IFileOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreItems@CRecycleBinManager@@UEAAJPEAUIShellItemArray@@PEAUIFileOperation@@@Z
    virtual long RestoreItems(IShellItemArray *, IFileOperation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUsnSource@CRecycleBinManager@@UEAAJK@Z
    virtual long SetUsnSource(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendUpdating@CRecycleBinManager@@UEAAJH@Z
    virtual long SuspendUpdating(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WillRecycle@CRecycleBinManager@@UEAAJPEBG@Z
    virtual long WillRecycle(unsigned short const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRecycleBinManager@@AEAA@XZ
    CRecycleBinManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRecycleBin@CRecycleBinManager@@AEAAJW4tagRECYCLEBIN_TYPE@@PEBGPEAPEAUIRecycleBin@@@Z
    long _AddRecycleBin(int, unsigned short const *, IRecycleBin * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheRecentQueryDetails@CRecycleBinManager@@AEAAJPEBG0W4tagRECYCLEBIN_TYPE@@@Z
    long _CacheRecentQueryDetails(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckRegLastEnum@CRecycleBinManager@@AEAAJPEAUIRecycleBin@@@Z
    long _CheckRegLastEnum(IRecycleBin *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompactAndPurgeThread@CRecycleBinManager@@CAKPEAX@Z
    static unsigned long _CompactAndPurgeThread(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateRecycleBin@CRecycleBinManager@@AEAAJW4tagRECYCLEBIN_TYPE@@PEBGPEAPEAUIRecycleBin@@@Z
    long _CreateRecycleBin(int, unsigned short const *, IRecycleBin * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DiscoverRecycleBin@CRecycleBinManager@@AEAAJPEBGPEAPEAUIRecycleBin@@@Z
    long _DiscoverRecycleBin(unsigned short const *, IRecycleBin * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureKnownFolderRBs@CRecycleBinManager@@AEAAJXZ
    long _EnsureKnownFolderRBs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureVolumeRootRBs@CRecycleBinManager@@AEAAJXZ
    long _EnsureVolumeRootRBs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindRecycleBin@CRecycleBinManager@@AEAAJW4tagRECYCLEBIN_TYPE@@PEBGPEAPEAUIRecycleBin@@PEA_J@Z
    long _FindRecycleBin(int, unsigned short const *, IRecycleBin * *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindRecycleBinByLocation@CRecycleBinManager@@AEAAJPEBGPEAPEAUIRecycleBin@@PEA_J@Z
    long _FindRecycleBinByLocation(unsigned short const *, IRecycleBin * *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCachedRecentQueryDetails@CRecycleBinManager@@AEAAJPEBGPEAW4CacheResult@1@PEAPEBGPEAW4tagRECYCLEBIN_TYPE@@2@Z
    long _GetCachedRecentQueryDetails(unsigned short const *, int *, unsigned short const * *, int *, unsigned short const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRegLastEnum@CRecycleBinManager@@AEAAJPEAUHKEY__@@PEAV?$CDSA@URecycleBinEntry@@@@PEAPEAG@Z
    long _GetRegLastEnum(HKEY__*, WindissectOpaque *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CRecycleBinManager@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeAllBins@CRecycleBinManager@@AEAAJXZ
    long _InitializeAllBins();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateRecycleBin@CRecycleBinManager@@AEAAJH@Z
    long _UpdateRecycleBin(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateRegLastEnum@CRecycleBinManager@@AEAAJPEAUHKEY__@@@Z
    long _UpdateRegLastEnum(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateRecycleBin@CRecycleBinManager@@AEAAJPEAV?$CDSA@URecycleBinEntry@@@@PEAUIRecycleBin@@@Z
    long _ValidateRecycleBin(WindissectOpaque *, IRecycleBin *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateRegLastEnum@CRecycleBinManager@@AEAAJPEAUHKEY__@@PEAUIRecycleBin@@@Z
    long _ValidateRegLastEnum(HKEY__*, IRecycleBin *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRecycleBinManager@@EEAA@XZ
    virtual ~CRecycleBinManager();
};
