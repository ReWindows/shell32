#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class StateRepoNewMenuCache {
public:
    class SortByExt;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@StateRepoNewMenuCache@@SAPEAV1@XZ
    static StateRepoNewMenuCache * GetInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewMenuEntries@StateRepoNewMenuCache@@QEAAJAEAV?$CCoSimpleArray@PEAUNewMenuEntry@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUNewMenuEntry@@@@@@@Z
    long GetNewMenuEntries(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildCacheAsync@StateRepoNewMenuCache@@QEAAJXZ
    long RebuildCacheAsync();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StateRepoNewMenuCache@@QEAA@XZ
    ~StateRepoNewMenuCache();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheNewMenuEntries@StateRepoNewMenuCache@@AEAAJAEAV?$CCaseInsensitiveStringHashTable@PEAUNewMenuEntry@@@@@Z
    long CacheNewMenuEntries(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyNewMenuEntry@StateRepoNewMenuCache@@AEAAJPEAUNewMenuEntry@@PEAPEAU2@@Z
    long CopyNewMenuEntry(NewMenuEntry *, NewMenuEntry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppLaunchInfo@StateRepoNewMenuCache@@AEAAJPEAUIFileTypeAssociation@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@1PEAW4RuntimeBehavior@AppModel@@PEAW4TrustLevel@8@@Z
    long GetAppLaunchInfo(::Windows::Internal::StateRepository::IFileTypeAssociation *, HSTRING__* *, HSTRING__* *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppPackageInfo@StateRepoNewMenuCache@@AEAAJPEAUIFileTypeAssociation@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@11@Z
    long GetAppPackageInfo(::Windows::Internal::StateRepository::IFileTypeAssociation *, HSTRING__* *, HSTRING__* *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfoForShellNewEntry@StateRepoNewMenuCache@@AEAAJPEBGPEAUIFileTypeAssociation@StateRepository@Internal@Windows@@PEAUIInspectable@@PEAPEAUNewMenuEntry@@@Z
    long GetInfoForShellNewEntry(unsigned short const *, ::Windows::Internal::StateRepository::IFileTypeAssociation *, IInspectable *, NewMenuEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@StateRepoNewMenuCache@@AEAAJPEA_N@Z
    long Initialize(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultHandler@StateRepoNewMenuCache@@AEAA_NPEBGPEAUIFileTypeAssociation@StateRepository@Internal@Windows@@@Z
    bool IsDefaultHandler(unsigned short const *, ::Windows::Internal::StateRepository::IFileTypeAssociation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupShellNewExtensions@StateRepoNewMenuCache@@AEAAJAEAV?$CCaseInsensitiveStringHashTable@PEAUNewMenuEntry@@@@PEAUIFileTypeAssociation@StateRepository@Internal@Windows@@@Z
    long LookupShellNewExtensions(WindissectOpaque &, ::Windows::Internal::StateRepository::IFileTypeAssociation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildCacheWorker@StateRepoNewMenuCache@@AEAAJXZ
    long RebuildCacheWorker();
};
