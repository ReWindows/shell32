#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
class CSyncStatusProviderInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSyncStatusProviderInfo@@QEAA@XZ
    CSyncStatusProviderInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CSyncStatusProviderInfo@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesProviderApply@CSyncStatusProviderInfo@@UEAAJPEAUIShellItem@@PEAH@Z
    virtual long DoesProviderApply(IShellItem *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CSyncStatusProviderInfo@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@CSyncStatusProviderInfo@@UEAAJPEAPEAG@Z
    virtual long GetName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSyncStatusProviderInfo@@UEAAJPEAW4SYNCSTATUS_PROVIDER_STATE@@@Z
    virtual long GetState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncProviderId@CSyncStatusProviderInfo@@UEAAJPEAU_GUID@@@Z
    virtual long GetSyncProviderId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncStatus@CSyncStatusProviderInfo@@UEAAJPEAUIShellItem@@PEAUIPropertyStore@@@Z
    virtual long GetSyncStatus(IShellItem *, IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSyncStatusChange@CSyncStatusProviderInfo@@UEAAJPEAUIShellItem@@W4SYNC_PROVIDER_SYNCSTATUS_FLAGS@@PEAUIPropertyStore@@@Z
    virtual long OnSyncStatusChange(IShellItem *, int, IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSyncStatusChangeByParsingName@CSyncStatusProviderInfo@@UEAAJPEBGW4SYNC_PROVIDER_SYNCSTATUS_FLAGS@@PEAUIPropertyStore@@@Z
    virtual long OnSyncStatusChangeByParsingName(unsigned short const *, int, IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSyncStatusProviderStateChange@CSyncStatusProviderInfo@@UEAAJW4SYNCSTATUS_PROVIDER_STATE@@@Z
    virtual long OnSyncStatusProviderStateChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSyncStatusProviderInfo@@QEAAJAEBU_GUID@@PEAUHKEY__@@PEAUISyncStatusProvider@@@Z
    long RuntimeClassInitialize(_GUID const &, HKEY__*, ISyncStatusProvider *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProvider@CSyncStatusProviderInfo@@AEBAJPEAPEAUISyncStatusProvider@@@Z
    long GetProvider(ISyncStatusProvider * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSyncStatusProviderInfo@@AEBA?AW4SYNCSTATUS_PROVIDER_STATE@@XZ
    int GetState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProvider@CSyncStatusProviderInfo@@AEAAJPEAUISyncStatusProvider@@@Z
    long SetProvider(ISyncStatusProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSyncStatusProviderInfo@@EEAA@XZ
    virtual ~CSyncStatusProviderInfo();
};
