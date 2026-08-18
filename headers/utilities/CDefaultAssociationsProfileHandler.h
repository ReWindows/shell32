#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
class CDefaultAssociationsProfileHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreate@CDefaultAssociationsProfileHandler@@UEAAJPEBG0K@Z
    virtual long OnCreate(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDelete@CDefaultAssociationsProfileHandler@@UEAAJPEBG0K@Z
    virtual long OnDelete(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoad@CDefaultAssociationsProfileHandler@@UEAAJPEBG0KH@Z
    virtual long OnLoad(unsigned short const *, unsigned short const *, unsigned long, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnMigrate@CDefaultAssociationsProfileHandler@@UEAAJPEBG00K@Z
    virtual long OnMigrate(unsigned short const *, unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUnload@CDefaultAssociationsProfileHandler@@UEAAJPEBG0KH@Z
    virtual long OnUnload(unsigned short const *, unsigned short const *, unsigned long, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUpgrade@CDefaultAssociationsProfileHandler@@UEAAJPEBG0K@Z
    virtual long OnUpgrade(unsigned short const *, unsigned short const *, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDefaultsFromPolicyManager@CDefaultAssociationsProfileHandler@@AEAAJXZ
    long ApplyDefaultsFromPolicyManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyGroupPolicy@CDefaultAssociationsProfileHandler@@AEAAJXZ
    long ApplyGroupPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyGroupPolicyFromFile@CDefaultAssociationsProfileHandler@@AEAAJPEBG@Z
    long ApplyGroupPolicyFromFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMDMPolicy@CDefaultAssociationsProfileHandler@@AEAAJXZ
    long ApplyMDMPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteFileAssociations@CDefaultAssociationsProfileHandler@@AEAAXXZ
    void DeleteFileAssociations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandFilePathAndApply@CDefaultAssociationsProfileHandler@@AEAAJPEBG@Z
    long ExpandFilePathAndApply(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMDMPolicy@CDefaultAssociationsProfileHandler@@AEAAJPEAPEAUHSTRING__@@@Z
    long GetMDMPolicy(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMissingOrVolatileKeys@CDefaultAssociationsProfileHandler@@AEAA_NXZ
    bool HasMissingOrVolatileKeys();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyMissing@CDefaultAssociationsProfileHandler@@AEAA_NPEBG@Z
    bool IsKeyMissing(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMDMPolicySet@CDefaultAssociationsProfileHandler@@AEAA_NXZ
    bool IsMDMPolicySet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandFilePathAndApply@CDefaultAssociationsProfileHandler@@AEAAJPEBG_N@Z
    long _ExpandFilePathAndApply(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandFilePathAndReapply@CDefaultAssociationsProfileHandler@@AEAAJH@Z
    long _ExpandFilePathAndReapply(int);
};
