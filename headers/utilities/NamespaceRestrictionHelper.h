#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
class NamespaceRestrictionHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasNavigateRestrictions@NamespaceRestrictionHelper@@QEAAJPEA_N@Z
    long GetHasNavigateRestrictions(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasRestrictions@NamespaceRestrictionHelper@@QEAAJW4NamespaceRestrictionCategory@@PEA_N@Z
    long GetHasRestrictions(int, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NamespaceRestrictionHelper@@QEAA@XZ
    ~NamespaceRestrictionHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllStorageLocationsAllowed@NamespaceRestrictionHelper@@AEAAJPEAUHKEY__@@PEA_N@Z
    long AreAllStorageLocationsAllowed(HKEY__*, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreStorageProvidersAllowed@NamespaceRestrictionHelper@@AEAAJPEAUHKEY__@@PEA_N@Z
    long AreStorageProvidersAllowed(HKEY__*, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureManager@NamespaceRestrictionHelper@@AEAAJXZ
    long EnsureManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDriveLetterForFolder@NamespaceRestrictionHelper@@AEAAJPEAUIShellItem@@PEAPEAG@Z
    long GetDriveLetterForFolder(IShellItem *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKnownFolderIdFromItem@NamespaceRestrictionHelper@@AEAAJPEAUIShellItem@@PEAU_GUID@@@Z
    long GetKnownFolderIdFromItem(IShellItem *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKnownFolderIdNearestMatch@NamespaceRestrictionHelper@@AEAAJPEAUIShellItem@@PEAU_GUID@@@Z
    long GetKnownFolderIdNearestMatch(IShellItem *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestrictionAccessHKEYOrAllow@NamespaceRestrictionHelper@@AEAAJW4NamespaceRestrictionCategory@@PEA_NPEAPEAUHKEY__@@2@Z
    long GetRestrictionAccessHKEYOrAllow(int, bool *, HKEY__* *, HKEY__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNetworkOrURLItem@NamespaceRestrictionHelper@@AEAA_NPEAUIShellItem@@@Z
    bool IsNetworkOrURLItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyShouldAllowAccessToDrive@NamespaceRestrictionHelper@@AEAAJPEBGPEAUHKEY__@@1PEAW4NamespaceRestrictionAccessOptions@@@Z
    long KeyShouldAllowAccessToDrive(unsigned short const *, HKEY__*, HKEY__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyShouldAllowAccessToFolder@NamespaceRestrictionHelper@@AEAAJPEAUIShellItem@@PEAUHKEY__@@1PEAW4NamespaceRestrictionAccessOptions@@@Z
    long KeyShouldAllowAccessToFolder(IShellItem *, HKEY__*, HKEY__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyShouldAllowAccessToKnownFolder@NamespaceRestrictionHelper@@AEAAJPEBU_GUID@@PEAUHKEY__@@1PEAW4NamespaceRestrictionAccessOptions@@@Z
    long KeyShouldAllowAccessToKnownFolder(_GUID const *, HKEY__*, HKEY__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyShouldAllowAccessToStorageLocation@NamespaceRestrictionHelper@@AEAAJPEAUIShellItem@@PEAUHKEY__@@1PEAW4NamespaceRestrictionAccessOptions@@@Z
    long KeyShouldAllowAccessToStorageLocation(IShellItem *, HKEY__*, HKEY__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestrictionAppliesToDrive@NamespaceRestrictionHelper@@AEAAJPEBGPEAUHKEY__@@PEA_N2@Z
    long RestrictionAppliesToDrive(unsigned short const *, HKEY__*, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestrictionAppliesToKnownFolder@NamespaceRestrictionHelper@@AEAAJPEBU_GUID@@PEAUHKEY__@@PEA_N2@Z
    long RestrictionAppliesToKnownFolder(_GUID const *, HKEY__*, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestrictionAppliesToStorageLocation@NamespaceRestrictionHelper@@AEAAJPEAUIShellItem@@PEAUHKEY__@@PEA_N@Z
    long RestrictionAppliesToStorageLocation(IShellItem *, HKEY__*, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestrictionAppliesToStorageProvider@NamespaceRestrictionHelper@@AEAAJPEAUIShellItem@@PEAUHKEY__@@PEA_N@Z
    long RestrictionAppliesToStorageProvider(IShellItem *, HKEY__*, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAllowAccessToFolder@NamespaceRestrictionHelper@@AEAAJPEAUIShellItem@@W4NamespaceRestrictionCategory@@PEA_N@Z
    long ShouldAllowAccessToFolder(IShellItem *, int, bool *);
};
