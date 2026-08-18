#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 30 member(s).
class CACLMulti {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CACLMulti@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CACLMulti@@UEAAJPEAUIUnknown@@@Z
    virtual long Append(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CACLMulti@@UEAAJPEAPEAUIEnumString@@@Z
    virtual long Clone(IEnumString * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@CACLMulti@@UEAAJPEBG@Z
    virtual long Expand(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CACLMulti@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEnumOptions@CACLMulti@@UEAAJPEAK@Z
    virtual long GetEnumOptions(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CACLMulti@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CACLMulti@@UEAAJKPEAPEAGPEAK@Z
    virtual long Next(unsigned long, unsigned short * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextItem@CACLMulti@@UEAAJPEAGKPEAK@Z
    virtual long NextItem(unsigned short *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CACLMulti@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CACLMulti@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CACLMulti@@UEAAJPEAUIUnknown@@@Z
    virtual long Remove(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CACLMulti@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCancelObject@CACLMulti@@UEAAJPEAUICancelMethodCalls@@@Z
    virtual long SetCancelObject(ICancelMethodCalls *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetEnumOptions@CACLMulti@@UEAAJK@Z
    virtual long SetEnumOptions(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CACLMulti@@UEAAJK@Z
    virtual long Skip(unsigned long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeListItem@CACLMulti@@KAHPEAX0@Z
    static int _FreeListItem(void *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CACLMulti@@IEAA@XZ
    ~CACLMulti();
};
