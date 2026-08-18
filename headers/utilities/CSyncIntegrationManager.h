#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
class CSyncIntegrationManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSyncIntegrationManager@@QEAA@XZ
    CSyncIntegrationManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncStatusAsync@CSyncIntegrationManager@@UEAAJPEAUIShellItem@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetSyncStatusAsync(IShellItem *, _tagpropertykey const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncStatusByIdList@CSyncIntegrationManager@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@_NAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetSyncStatusByIdList(_ITEMIDLIST_ABSOLUTE const *, bool, _tagpropertykey const &, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSyncStatusChange@CSyncIntegrationManager@@UEAAJAEBU_GUID@@PEAUIShellItem@@W4SYNC_PROVIDER_SYNCSTATUS_FLAGS@@PEAUIPropertyStore@@@Z
    virtual long OnSyncStatusChange(_GUID const &, IShellItem *, int, IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformBackgroundTasks@CSyncIntegrationManager@@UEAAXXZ
    virtual void PerformBackgroundTasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueChangeNotify@CSyncIntegrationManager@@UEAAJPEAUISyncStatusCacheEntry@@@Z
    virtual long QueueChangeNotify(ISyncStatusCacheEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSyncIntegrationManager@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CSyncIntegrationManager@@UEAAXXZ
    virtual void Shutdown();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupCache@CSyncIntegrationManager@@AEAAJXZ
    long _CleanupCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CommitProviderList@CSyncIntegrationManager@@AEAAJAEBV?$CCoSimpleArray@V?$ComPtr@UISyncStatusProviderInfo@@@WRL@Microsoft@@$0PPPPPPPO@VCISyncStatusProviderInfoComparer@@@@@Z
    long _CommitProviderList(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCacheEntry@CSyncIntegrationManager@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _CreateCacheEntry(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSyncStatusProvider@CSyncIntegrationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UISyncStatusProviderInfo@@@WRL@Microsoft@@$0PPPPPPPO@VCISyncStatusProviderInfoComparer@@@@AEBU_GUID@@PEAUISyncStatusProvider@@@Z
    long _CreateSyncStatusProvider(WindissectOpaque *, _GUID const &, ISyncStatusProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DispatchNotifications@CSyncIntegrationManager@@AEAAXXZ
    void _DispatchNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCacheEntry@CSyncIntegrationManager@@AEBAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAUISyncStatusCacheEntry@@@Z
    long _GetCacheEntry(_ITEMIDLIST_ABSOLUTE const *, ISyncStatusCacheEntry * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProviderArray@CSyncIntegrationManager@@AEBAJPEAV?$CCoSimpleArray@V?$ComPtr@UISyncStatusProviderInfo@@@WRL@Microsoft@@$0PPPPPPPO@VCISyncStatusProviderInfoComparer@@@@@Z
    long _GetProviderArray(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValueAndStateFromCache@CSyncIntegrationManager@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@PEAW4PSC_STATE@@PEAPEAUISyncStatusCacheEntry@@@Z
    long _GetValueAndStateFromCache(_ITEMIDLIST_ABSOLUTE const *, _tagpropertykey const &, tagPROPVARIANT *, int *, ISyncStatusCacheEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadProvidersFromRegistry@CSyncIntegrationManager@@AEAAJXZ
    long _LoadProvidersFromRegistry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueBackgroundWork@CSyncIntegrationManager@@AEAAJXZ
    long _QueueBackgroundWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterSyncStatusChange@CSyncIntegrationManager@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _RegisterSyncStatusChange(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateItems@CSyncIntegrationManager@@AEAAXXZ
    void _UpdateItems();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSyncIntegrationManager@@EEAA@XZ
    virtual ~CSyncIntegrationManager();
};
