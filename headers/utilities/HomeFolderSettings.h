#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class HomeFolderSettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreRecommendationsEnabledForCurrentEdition@HomeFolderSettings@@SA_NXZ
    static bool AreRecommendationsEnabledForCurrentEdition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@HomeFolderSettings@@SAJXZ
    static long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearList@HomeFolderSettings@@SAJW4HomeFolderItemType@1@_N1@Z
    static long ClearList(int, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAadAccountAttached@HomeFolderSettings@@SA_NXZ
    static bool IsAadAccountAttached();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowCloudFilesInQuickAccess@HomeFolderSettings@@SAX_N@Z
    static void SetShowCloudFilesInQuickAccess(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowFrequent@HomeFolderSettings@@SAX_N@Z
    static void SetShowFrequent(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowRecent@HomeFolderSettings@@SAX_N@Z
    static void SetShowRecent(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowRecommendations@HomeFolderSettings@@SAX_N@Z
    static void SetShowRecommendations(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowCloudFilesInQuickAccess@HomeFolderSettings@@SA_NXZ
    static bool ShouldShowCloudFilesInQuickAccess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowFrequent@HomeFolderSettings@@SA_NXZ
    static bool ShouldShowFrequent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowRecent@HomeFolderSettings@@SA_NXZ
    static bool ShouldShowRecent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowRecommendations@HomeFolderSettings@@SA_NXZ
    static bool ShouldShowRecommendations();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAndUpdateIsAadAttached@HomeFolderSettings@@CAX_N@Z
    static void GetAndUpdateIsAadAttached(bool);
};
