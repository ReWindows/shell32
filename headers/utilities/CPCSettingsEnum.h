#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
class CPCSettingsEnum {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPCSettingsEnum@@QEAA@XZ
    CPCSettingsEnum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CPCSettingsEnum@@UEAAJPEAPEAUIEnumIDList@@@Z
    virtual long Clone(IEnumIDList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CPCSettingsEnum@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CPCSettingsEnum@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CPCSettingsEnum@@UEAAJKPEAPEAU_ITEMID_CHILD@@PEAK@Z
    virtual long Next(unsigned long, _ITEMID_CHILD * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContinue@CPCSettingsEnum@@UEAAJXZ
    virtual long QueryContinue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CPCSettingsEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunQuery@CPCSettingsEnum@@QEAAJPEAUIItemCollectionFactory@@@Z
    long RunQuery(IItemCollectionFactory *);
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CPCSettingsEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPCSettingsEnum@@UEAA@XZ
    virtual ~CPCSettingsEnum();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCollection@CPCSettingsEnum@@AEAAJXZ
    long _EnsureCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureIndexBase@CPCSettingsEnum@@AEAAJW4IndexOption@1@I@Z
    long _EnsureIndexBase(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetClassicConditionFromItem@CPCSettingsEnum@@AEAAJPEAUIShellItem2@@PEAPEAUITaskCondition@@@Z
    long _GetClassicConditionFromItem(IShellItem2*, ITaskCondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentItem@CPCSettingsEnum@@AEAAJIPEAPEAUIItem@@@Z
    long _GetCurrentItem(unsigned int, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemFilterState@CPCSettingsEnum@@AEAAJPEAUIItem@@PEA_N@Z
    long _GetItemFilterState(IItem *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsClassicItemGroupPolicyAllowed@CPCSettingsEnum@@AEAA_NU_GUID@@PEAUIShellItem2@@@Z
    bool _IsClassicItemGroupPolicyAllowed(_GUID, IShellItem2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealizeCollection@CPCSettingsEnum@@AEAAJXZ
    long _RealizeCollection();
};
