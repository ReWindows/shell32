#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 37 member(s).
class CCommandStoreShimBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCommandStoreShimBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommandStoreShimBase@@QEAA@AEBU_GUID@@@Z
    CCommandStoreShimBase(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CCommandStoreShimBase@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CCommandStoreShimBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSelection(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNew@CCommandStoreShimBase@@UEAAJXZ
    virtual long InitNew();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCommandStoreShimBase@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CCommandStoreShimBase@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCommandStoreShimBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCommandStoreShimBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CCommandStoreShimBase@@UEAAJPEAUIPropertyBag@@HH@Z
    virtual long Save(IPropertyBag *, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDirectory@CCommandStoreShimBase@@UEAAJPEBG@Z
    virtual long SetDirectory(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetKeyState@CCommandStoreShimBase@@UEAAJK@Z
    virtual long SetKeyState(unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetNoShowUI@CCommandStoreShimBase@@UEAAJH@Z
    virtual long SetNoShowUI(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetParameters@CCommandStoreShimBase@@UEAAJPEBG@Z
    virtual long SetParameters(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPosition@CCommandStoreShimBase@@UEAAJUtagPOINT@@@Z
    virtual long SetPosition(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CCommandStoreShimBase@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSelection(IShellItemArray *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetShowWindow@CCommandStoreShimBase@@UEAAJH@Z
    virtual long SetShowWindow(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommandStoreShimBase@@UEAA@XZ
    virtual ~CCommandStoreShimBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeFromPropertyBag@CCommandStoreShimBase@@IEAAJPEAUIPropertyBag@@@Z
    long _InitializeFromPropertyBag(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InitializeFromPropertyBag@CCommandStoreShimBase@@MEAAJPEAUIPropertyBag@@@Z
    virtual long v_InitializeFromPropertyBag(IPropertyBag *);
};
