#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 40 member(s).
class CDynamicStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIDList@CDynamicStorage@@UEAAJKPEAPEBU_ITEMIDLIST_ABSOLUTE@@W4tagDSTGF@@@Z
    virtual long AddIDList(unsigned long, _ITEMIDLIST_ABSOLUTE const * *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDynamicStorage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToItem@CDynamicStorage@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    virtual long BindToItem(unsigned short const *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Commit@CDynamicStorage@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?CopyTo@CDynamicStorage@@UEAAJKPEBU_GUID@@PEAPEAGPEAUIStorage@@@Z
    virtual long CopyTo(unsigned long, _GUID const *, unsigned short * *, IStorage *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateStorage@CDynamicStorage@@UEAAJPEBGKKKPEAPEAUIStorage@@@Z
    virtual long CreateStorage(unsigned short const *, unsigned long, unsigned long, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CDynamicStorage@@UEAAJPEBGKKKPEAPEAUIStream@@@Z
    virtual long CreateStream(unsigned short const *, unsigned long, unsigned long, unsigned long, IStream * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DestroyElement@CDynamicStorage@@UEAAJPEBG@Z
    virtual long DestroyElement(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumElements@CDynamicStorage@@UEAAJKPEAXKPEAPEAUIEnumSTATSTG@@@Z
    virtual long EnumElements(unsigned long, void *, unsigned long, IEnumSTATSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumItems@CDynamicStorage@@UEAAJPEAPEAUIEnumShellItems@@@Z
    virtual long EnumItems(IEnumShellItems * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CDynamicStorage@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandsOffStorage@CDynamicStorage@@UEAAJXZ
    virtual long HandsOffStorage();
    // Category: Method | Source: PE Export
    // Symbol: ?InitNew@CDynamicStorage@@UEAAJPEAUIStorage@@@Z
    virtual long InitNew(IStorage *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CDynamicStorage@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CDynamicStorage@@UEAAJPEAUIStorage@@@Z
    virtual long Load(IStorage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveElementTo@CDynamicStorage@@UEAAJPEBGPEAUIStorage@@0K@Z
    virtual long MoveElementTo(unsigned short const *, IStorage *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStorage@CDynamicStorage@@UEAAJPEBGPEAUIStorage@@KPEAPEAGKPEAPEAU2@@Z
    virtual long OpenStorage(unsigned short const *, IStorage *, unsigned long, unsigned short * *, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStream@CDynamicStorage@@UEAAJPEBGPEAXKKPEAPEAUIStream@@@Z
    virtual long OpenStream(unsigned short const *, void *, unsigned long, unsigned long, IStream * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDynamicStorage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDynamicStorage@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?RenameElement@CDynamicStorage@@UEAAJPEBG0@Z
    virtual long RenameElement(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?Revert@CDynamicStorage@@UEAAJXZ
    virtual long Revert();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CDynamicStorage@@UEAAJPEAUIStorage@@H@Z
    virtual long Save(IStorage *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?SaveCompleted@CDynamicStorage@@UEAAJPEAUIStorage@@@Z
    virtual long SaveCompleted(IStorage *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClass@CDynamicStorage@@UEAAJAEBU_GUID@@@Z
    virtual long SetClass(_GUID const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetElementTimes@CDynamicStorage@@UEAAJPEBGPEBU_FILETIME@@11@Z
    virtual long SetElementTimes(unsigned short const *, _FILETIME const *, _FILETIME const *, _FILETIME const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetStateBits@CDynamicStorage@@UEAAJKK@Z
    virtual long SetStateBits(unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Stat@CDynamicStorage@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDirectory@CDynamicStorage@@AEAAJXZ
    long _EnsureDirectory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStreamOrStorage@CDynamicStorage@@AEAAJHKAEBU_GUID@@PEAPEAX@Z
    long _GetStreamOrStorage(int, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertItem@CDynamicStorage@@AEAAJPEBGPEAUIShellItem@@W4tagDSTGF@@@Z
    long _InsertItem(unsigned short const *, IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DataCompare@CDynamicStorage@@CAHPEBUDYNASTGDATA@@0_J@Z
    static int s_DataCompare(DYNASTGDATA const *, DYNASTGDATA const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DataDestroy@CDynamicStorage@@CAHPEAUDYNASTGDATA@@PEAX@Z
    static int s_DataDestroy(DYNASTGDATA *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDynamicStorage@@AEAA@XZ
    ~CDynamicStorage();
};
