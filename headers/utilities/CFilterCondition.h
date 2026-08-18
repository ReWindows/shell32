#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
class CFilterCondition {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AddFromArray@CFilterCondition@@UEAAJPEAUIObjectArray@@@Z
    virtual long AddFromArray(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddObject@CFilterCondition@@UEAAJPEAUIUnknown@@@Z
    virtual long AddObject(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFilterCondition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?Clear@CFilterCondition@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CFilterCondition@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassID@CFilterCondition@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCondition@CFilterCondition@@UEAAJPEAPEAUICondition@@@Z
    virtual long GetCondition(ICondition * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CFilterCondition@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilterName@CFilterCondition@@UEAAJW4FC_FILTERNAME@@PEAPEAG@Z
    virtual long GetFilterName(int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyKey@CFilterCondition@@UEAAJPEAU_tagpropertykey@@@Z
    virtual long GetPropertyKey(_tagpropertykey *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSizeMax@CFilterCondition@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeFlags@CFilterCondition@@UEAAJPEAW4FC_FLAGS@@@Z
    virtual long GetTypeFlags(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CFilterCondition@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CFilterCondition@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFilterCondition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFilterCondition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveObjectAt@CFilterCondition@@UEAAJI@Z
    virtual long RemoveObjectAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CFilterCondition@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CFilterCondition@@SAJPEBG0AEBU_tagpropertykey@@W4FC_FLAGS@@PEAUICondition@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(unsigned short const *, unsigned short const *, _tagpropertykey const &, int, ICondition *, _GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CFilterCondition@@AEAAJPEBG0AEBU_tagpropertykey@@W4FC_FLAGS@@PEAUICondition@@@Z
    long _Initialize(unsigned short const *, unsigned short const *, _tagpropertykey const &, int, ICondition *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFilterCondition@@AEAA@XZ
    ~CFilterCondition();
};
