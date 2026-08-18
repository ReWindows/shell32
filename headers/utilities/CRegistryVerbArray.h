#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
class CRegistryVerbArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddKeys@CRegistryVerbArray@@QEAAIPEAUHKEY__@@PEBG@Z
    unsigned int AddKeys(HKEY__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGuid@CRegistryVerbArray@@QEAAJHPEBGPEAU_GUID@@@Z
    long GetGuid(int, unsigned short const *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistryVerbs@CRegistryVerbArray@@QEAAJIPEAUIUnknown@@PEAUIAssociationElement@@PEAUHKEY__@@PEBG@Z
    long GetRegistryVerbs(unsigned int, IUnknown *, IAssociationElement *, HKEY__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CRegistryVerbArray@@QEAAJHPEBGPEAPEAG@Z
    long GetString(int, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CRegistryVerbArray@@QEAAJHPEBG0PEAKPEAX1@Z
    long GetValue(int, unsigned short const *, unsigned short const *, unsigned long *, void *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDefault@CRegistryVerbArray@@QEAAHPEAUHKEY__@@@Z
    int HasDefault(HKEY__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmap@CRegistryVerbArray@@QEAAXHPEAUHBITMAP__@@@Z
    void SetBitmap(int, HBITMAP__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInvokeVerbs@CRegistryVerbArray@@QEAAXQEBQEBGI@Z
    void SetInvokeVerbs(unsigned short const * const * const, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CRegistryVerbArray@@QEAAXPEAUIUnknown@@@Z
    void SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSubMenu@CRegistryVerbArray@@QEAAXHIPEAUIEnumExplorerCommand@@PEAUHMENU__@@@Z
    void SetSubMenu(int, unsigned int, IEnumExplorerCommand *, HMENU__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRegistryVerbArray@@QEAA@XZ
    ~CRegistryVerbArray();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCloudFilesVerbs@CRegistryVerbArray@@AEAAJXZ
    long AddCloudFilesVerbs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStateRepoVerbs@CRegistryVerbArray@@AEAAJXZ
    long AddStateRepoVerbs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStateRepoVerbsHelper@CRegistryVerbArray@@AEAAJAEBU_GUID@@IPEAU2@H@Z
    long AddStateRepoVerbsHelper(_GUID const &, unsigned int, _GUID *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldOptimizeForInvoke@CRegistryVerbArray@@AEAA_NPEBG@Z
    bool ShouldOptimizeForInvoke(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddEnumKeys@CRegistryVerbArray@@AEAAXPEAUHKEY__@@0@Z
    void _AddEnumKeys(HKEY__*, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddOrderedKeys@CRegistryVerbArray@@AEAAXPEAUHKEY__@@0PEBG@Z
    void _AddOrderedKeys(HKEY__*, HKEY__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendItem@CRegistryVerbArray@@AEAAHPEAUHKEY__@@PEAUREGISTRY_VERB_ITEM@@@Z
    int _AppendItem(HKEY__*, REGISTRY_VERB_ITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseItem@CRegistryVerbArray@@CAHPEAUREGISTRY_VERB_ITEM@@PEAX@Z
    static int _ReleaseItem(REGISTRY_VERB_ITEM *, void *);
};
