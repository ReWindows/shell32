#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 76 member(s).
class CRecycleBinBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRecycleBinBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compact@CRecycleBinBase@@UEAAJXZ
    virtual long Compact();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CRecycleBinBase@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumItems@CRecycleBinBase@@UEAAJKPEAPEAUIEnumRecycleItems@@@Z
    virtual long EnumItems(unsigned long, IEnumRecycleItems * *);
    // Category: Method | Source: PE Export
    // Symbol: ?FinishOperations@CRecycleBinBase@@UEAAJJ@Z
    virtual long FinishOperations(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileData@CRecycleBinBase@@UEAAJPEBGPEAUtagDELETEDITEM@@@Z
    virtual long GetFileData(unsigned short const *, tagDELETEDITEM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CRecycleBinBase@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@CRecycleBinBase@@UEAAJPEA_K@Z
    virtual long GetItemCount(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@CRecycleBinBase@@UEAAJPEAGK@Z
    virtual long GetLocation(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxCapacity@CRecycleBinBase@@UEAAJPEA_K@Z
    virtual long GetMaxCapacity(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxCapacityRange@CRecycleBinBase@@UEAAJPEA_K0@Z
    virtual long GetMaxCapacityRange(uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPurgeOnDelete@CRecycleBinBase@@UEAAJPEAH@Z
    virtual long GetPurgeOnDelete(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeID@CRecycleBinBase@@UEAAJPEAW4tagRECYCLEBIN_TYPE@@PEAPEAG@Z
    virtual long GetTypeID(int *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsedSpace@CRecycleBinBase@@UEAAJPEA_K@Z
    virtual long GetUsedSpace(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsnSource@CRecycleBinBase@@UEAAJPEAK@Z
    virtual long GetUsnSource(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRecycleBinBase@@UEAAJW4tagRECYCLEBIN_TYPE@@PEBG@Z
    virtual long Initialize(int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CRecycleBinBase@@UEAAJXZ
    virtual long IsEmpty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRecycled@CRecycleBinBase@@UEAAJPEBGPEAH@Z
    virtual long IsRecycled(unsigned short const *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?PauseTimer@CRecycleBinBase@@UEAAJXZ
    virtual long PauseTimer();
    // Category: Method | Source: PE Export
    // Symbol: ?PostCopyItem@CRecycleBinBase@@UEAAJKPEAUIShellItem@@0PEBGJ0@Z
    virtual long PostCopyItem(unsigned long, IShellItem *, IShellItem *, unsigned short const *, long, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDeleteItem@CRecycleBinBase@@UEAAJKPEAUIShellItem@@J0@Z
    virtual long PostDeleteItem(unsigned long, IShellItem *, long, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostMoveItem@CRecycleBinBase@@UEAAJKPEAUIShellItem@@0PEBGJ0@Z
    virtual long PostMoveItem(unsigned long, IShellItem *, IShellItem *, unsigned short const *, long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PostNewItem@CRecycleBinBase@@UEAAJKPEAUIShellItem@@PEBG1KJ0@Z
    virtual long PostNewItem(unsigned long, IShellItem *, unsigned short const *, unsigned short const *, unsigned long, long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PostRenameItem@CRecycleBinBase@@UEAAJKPEAUIShellItem@@PEBGJ0@Z
    virtual long PostRenameItem(unsigned long, IShellItem *, unsigned short const *, long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreCopyItem@CRecycleBinBase@@UEAAJKPEAUIShellItem@@0PEBG@Z
    virtual long PreCopyItem(unsigned long, IShellItem *, IShellItem *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreDeleteItem@CRecycleBinBase@@UEAAJKPEAUIShellItem@@@Z
    virtual long PreDeleteItem(unsigned long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreMoveItem@CRecycleBinBase@@UEAAJKPEAUIShellItem@@0PEBG@Z
    virtual long PreMoveItem(unsigned long, IShellItem *, IShellItem *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreNewItem@CRecycleBinBase@@UEAAJKPEAUIShellItem@@PEBG@Z
    virtual long PreNewItem(unsigned long, IShellItem *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreRenameItem@CRecycleBinBase@@UEAAJKPEAUIShellItem@@PEBG@Z
    virtual long PreRenameItem(unsigned long, IShellItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PurgeAll@CRecycleBinBase@@UEAAJPEAUIFileOperation@@@Z
    virtual long PurgeAll(IFileOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PurgeItems@CRecycleBinBase@@UEAAJPEBGPEAUIFileOperation@@@Z
    virtual long PurgeItems(unsigned short const *, IFileOperation *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRecycleBinBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleItem@CRecycleBinBase@@UEAAJPEBGK_KPEAPEAUIShellItem@@@Z
    virtual long RecycleItem(unsigned short const *, unsigned long, uint64_t, IShellItem * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRecycleBinBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ResetTimer@CRecycleBinBase@@UEAAJXZ
    virtual long ResetTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreItem@CRecycleBinBase@@UEAAJPEAUIShellItem@@PEAUIFileOperation@@@Z
    virtual long RestoreItem(IShellItem *, IFileOperation *);
    // Category: Method | Source: PE Export
    // Symbol: ?RestoreItems@CRecycleBinBase@@UEAAJPEAUIShellItemArray@@PEAUIFileOperation@@@Z
    virtual long RestoreItems(IShellItemArray *, IFileOperation *);
    // Category: Method | Source: PE Export
    // Symbol: ?ResumeTimer@CRecycleBinBase@@UEAAJXZ
    virtual long ResumeTimer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxCapacity@CRecycleBinBase@@UEAAJ_K@Z
    virtual long SetMaxCapacity(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPurgeOnDelete@CRecycleBinBase@@UEAAJH@Z
    virtual long SetPurgeOnDelete(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUsnSource@CRecycleBinBase@@UEAAJK@Z
    virtual long SetUsnSource(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?StartOperations@CRecycleBinBase@@UEAAJXZ
    virtual long StartOperations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendUpdating@CRecycleBinBase@@UEAAJH@Z
    virtual long SuspendUpdating(int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateProgress@CRecycleBinBase@@UEAAJII@Z
    virtual long UpdateProgress(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WillRecycle@CRecycleBinBase@@UEAAJPEBG@Z
    virtual long WillRecycle(unsigned short const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPurgeItem@CRecycleBinBase@@IEAAJPEBGPEAUIFileOperation@@@Z
    long _AddPurgeItem(unsigned short const *, IFileOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckAndRefreshSetting@CRecycleBinBase@@IEAAXXZ
    void _CheckAndRefreshSetting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckAndResetNeedToPurge@CRecycleBinBase@@IEAAHXZ
    int _CheckAndResetNeedToPurge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CountItemsAndSpace@CRecycleBinBase@@IEAAJPEA_K0@Z
    long _CountItemsAndSpace(uint64_t *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateRecycleBin@CRecycleBinBase@@IEAAJXZ
    long _CreateRecycleBin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateRecycleItemPath@CRecycleBinBase@@IEAAJPEBGPEAG_K@Z
    long _CreateRecycleItemPath(unsigned short const *, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Dispose@CRecycleBinBase@@IEAAJXZ
    long _Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureIDList@CRecycleBinBase@@IEAAJXZ
    long _EnsureIDList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDiskSize@CRecycleBinBase@@IEAA_KXZ
    uint64_t _GetDiskSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRecycleDataHandle@CRecycleBinBase@@IEAAJPEBGW4RecycleDataOpenFlags@@PEAPEAX@Z
    long _GetRecycleDataHandle(unsigned short const *, int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRecycleDataPath@CRecycleBinBase@@IEAAJPEBGPEAG_K@Z
    long _GetRecycleDataPath(unsigned short const *, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellItem@CRecycleBinBase@@IEAAJPEBGPEAPEAUIShellItem@@@Z
    long _GetShellItem(unsigned short const *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitRecycleData@CRecycleBinBase@@IEAAJPEBG_KPEAURecycleDataV2@@@Z
    long _InitRecycleData(unsigned short const *, uint64_t, RecycleDataV2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSetting@CRecycleBinBase@@IEAAKKPEBG@Z
    unsigned long _LoadSetting(unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadVolumePolicyAndSettings@CRecycleBinBase@@IEAAHXZ
    int _LoadVolumePolicyAndSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeRecycleItem@CRecycleBinBase@@IEAAJPEBGK_K_NPEAPEAUIShellItem@@@Z
    long _MakeRecycleItem(unsigned short const *, unsigned long, uint64_t, bool, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PreRecycleItem@CRecycleBinBase@@IEAAJPEBGK_KPEAG1@Z
    long _PreRecycleItem(unsigned short const *, unsigned long, uint64_t, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadCompactData@CRecycleBinBase@@IEAAJPEBU_WIN32_FIND_DATAW@@PEAUCompactData@@@Z
    long _ReadCompactData(_WIN32_FIND_DATAW const *, CompactData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadRecycleData@CRecycleBinBase@@IEAAJPEBGPEAURecycleDataV2@@@Z
    long _ReadRecycleData(unsigned short const *, RecycleDataV2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveRecycleData@CRecycleBinBase@@IEAAJPEBG@Z
    long _RemoveRecycleData(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveSetting@CRecycleBinBase@@IEAAJKPEBG@Z
    long _SaveSetting(unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldCompact@CRecycleBinBase@@IEAA_NXZ
    bool _ShouldCompact();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateRecycleBin@CRecycleBinBase@@IEAAJXZ
    long _ValidateRecycleBin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WillRecycle@CRecycleBinBase@@IEAAJPEBG@Z
    long _WillRecycle(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteRecycleData@CRecycleBinBase@@IEAAJPEBGKPEBXK@Z
    long _WriteRecycleData(unsigned short const *, unsigned long, void const *, unsigned long);
};
