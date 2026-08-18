#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CPublishBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPublishBase@@QEAA@XZ
    CPublishBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CPublishBase@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMachineName@CPublishBase@@UEAAJPEAPEAG@Z
    virtual long GetMachineName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStore@CPublishBase@@UEAAJW4GETPROPERTYSTOREFLAGS@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStore(int, IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPropertyStoreForKeys@CPublishBase@@UEAAJPEBU_tagpropertykey@@IW4GETPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStoreForKeys(_tagpropertykey const *, unsigned int, int, _GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSizeMax@CPublishBase@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPublishBase@@UEAAJPEBG@Z
    virtual long Initialize(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CPublishBase@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CPublishBase@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CPublishBase@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetPropertyStore@CPublishBase@@SAJPEAUIUnknown@@_NIPEAUXP_STORAGE@@@Z
    static long s_GetPropertyStore(IUnknown *, bool, unsigned int, XP_STORAGE *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureMachineName@CPublishBase@@IEAAJXZ
    long _EnsureMachineName();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPublishBase@@MEAA@XZ
    virtual ~CPublishBase();
};
