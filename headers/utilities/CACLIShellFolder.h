#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 47 member(s).
class CACLIShellFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CACLIShellFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CACLIShellFolder@@UEAAJPEAPEAUIEnumString@@@Z
    virtual long Clone(IEnumString * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@CACLIShellFolder@@UEAAJPEBG@Z
    virtual long Expand(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CACLIShellFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectory@CACLIShellFolder@@UEAAJPEAGK@Z
    virtual long GetDirectory(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectoryAlloc@CACLIShellFolder@@UEAAJPEAPEAG@Z
    virtual long GetDirectoryAlloc(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CACLIShellFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptions@CACLIShellFolder@@UEAAJPEAK@Z
    virtual long GetOptions(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CACLIShellFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CACLIShellFolder@@UEAAJKPEAPEAGPEAK@Z
    virtual long Next(unsigned long, unsigned short * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CACLIShellFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CACLIShellFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CACLIShellFolder@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCancelObject@CACLIShellFolder@@UEAAJPEAUICancelMethodCalls@@@Z
    virtual long SetCancelObject(ICancelMethodCalls *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectory@CACLIShellFolder@@UEAAJPEBG@Z
    virtual long SetDirectory(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIDList@CACLIShellFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOptions@CACLIShellFolder@@UEAAJK@Z
    virtual long SetOptions(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CACLIShellFolder@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayNameForAddressBar@CACLIShellFolder@@AEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAGK@Z
    long _GetDisplayNameForAddressBar(IShellFolder *, _ITEMID_CHILD & volatile *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEnumerationFlagsForItem@CACLIShellFolder@@AEAAKPEAUIShellItem@@@Z
    unsigned long _GetEnumerationFlagsForItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextWrapper@CACLIShellFolder@@AEAAJPEAGK@Z
    long _GetNextWrapper(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPidlName@CACLIShellFolder@@AEAAJPEFBU_ITEMID_CHILD@@PEAGK@Z
    long _GetPidlName(_ITEMID_CHILD & volatile *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CACLIShellFolder@@AEAAJXZ
    long _Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NextNamespaceExtension@CACLIShellFolder@@AEAAJPEAGK@Z
    long _NextNamespaceExtension(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PassesFilter@CACLIShellFolder@@AEAAJPEFBU_ITEMID_CHILD@@@Z
    long _PassesFilter(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetLocation@CACLIShellFolder@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _SetLocation(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryNextPath@CACLIShellFolder@@AEAAJXZ
    long _TryNextPath();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CACLIShellFolder@@AEAA@XZ
    ~CACLIShellFolder();
};
