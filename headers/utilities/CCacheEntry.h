#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 28 member(s).
namespace Windows::Shell::SyncStatus {
class CCacheEntry {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCacheEntry@SyncStatus@Shell@Windows@@QEAA@XZ
    CCacheEntry();
    // Category: Method | Source: PE Export
    // Symbol: ?Commit@CCacheEntry@SyncStatus@Shell@Windows@@UEAAJXZ
    virtual long Commit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CCacheEntry@SyncStatus@Shell@Windows@@UEAAJKPEAU_tagpropertykey@@@Z
    virtual long GetAt(unsigned long, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CCacheEntry@SyncStatus@Shell@Windows@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CCacheEntry@SyncStatus@Shell@Windows@@UEAAPEBU_ITEMIDLIST_ABSOLUTE@@XZ
    virtual _ITEMIDLIST_ABSOLUTE const * GetItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastAccessTime@CCacheEntry@SyncStatus@Shell@Windows@@UEAA_KXZ
    virtual uint64_t GetLastAccessTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderId@CCacheEntry@SyncStatus@Shell@Windows@@UEAA?AU_GUID@@XZ
    virtual _GUID GetProviderId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CCacheEntry@SyncStatus@Shell@Windows@@UEAAJAEBU_tagpropertykey@@PEAW4PSC_STATE@@@Z
    virtual long GetState(_tagpropertykey const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CCacheEntry@SyncStatus@Shell@Windows@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAndState@CCacheEntry@SyncStatus@Shell@Windows@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@PEAW4PSC_STATE@@@Z
    virtual long GetValueAndState(_tagpropertykey const &, tagPROPVARIANT *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasChanges@CCacheEntry@SyncStatus@Shell@Windows@@UEAA_NXZ
    virtual bool HasChanges();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasExpired@CCacheEntry@SyncStatus@Shell@Windows@@UEAA_N_K@Z
    virtual bool HasExpired(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCoveredBy@CCacheEntry@SyncStatus@Shell@Windows@@UEAA_NPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual bool IsCoveredBy(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItem@CCacheEntry@SyncStatus@Shell@Windows@@UEAA_NPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual bool IsItem(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOlderThan@CCacheEntry@SyncStatus@Shell@Windows@@UEAA_NPEAUISyncStatusCacheEntry@@@Z
    virtual bool IsOlderThan(ISyncStatusCacheEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyChange@CCacheEntry@SyncStatus@Shell@Windows@@UEAAXXZ
    virtual void NotifyChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSyncStatusChange@CCacheEntry@SyncStatus@Shell@Windows@@UEAAJAEBU_GUID@@PEAUIPropertyStore@@@Z
    virtual long OnSyncStatusChange(_GUID const &, IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadSyncStatus@CCacheEntry@SyncStatus@Shell@Windows@@UEAAJXZ
    virtual long ReloadSyncStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CCacheEntry@SyncStatus@Shell@Windows@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CCacheEntry@SyncStatus@Shell@Windows@@QEAAJPEAUIShellItem@@PEAUIPropertyStore@@@Z
    long RuntimeClassInitialize(IShellItem *, IPropertyStore *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@CCacheEntry@SyncStatus@Shell@Windows@@UEAAJAEBU_tagpropertykey@@W4PSC_STATE@@@Z
    virtual long SetState(_tagpropertykey const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CCacheEntry@SyncStatus@Shell@Windows@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetValue(_tagpropertykey const &, tagPROPVARIANT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueAndState@CCacheEntry@SyncStatus@Shell@Windows@@UEAAJAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@W4PSC_STATE@@@Z
    virtual long SetValueAndState(_tagpropertykey const &, tagPROPVARIANT const *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueChange@CCacheEntry@SyncStatus@Shell@Windows@@AEAAXXZ
    void _QueueChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TimeoutLastSyncedValue@CCacheEntry@SyncStatus@Shell@Windows@@AEAAXAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@PEAW4PSC_STATE@@@Z
    void _TimeoutLastSyncedValue(_tagpropertykey const &, tagPROPVARIANT *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCacheEntry@SyncStatus@Shell@Windows@@EEAA@XZ
    virtual ~CCacheEntry();
};
} // namespace Windows::Shell::SyncStatus
