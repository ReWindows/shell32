#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
class CSFStorage {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSFStorage@@QEAA@XZ
    CSFStorage();
    // Category: Method | Source: PE Export
    // Symbol: ?Commit@CSFStorage@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?CopyTo@CSFStorage@@UEAAJKPEBU_GUID@@PEAPEAGPEAUIStorage@@@Z
    virtual long CopyTo(unsigned long, _GUID const *, unsigned short * *, IStorage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStorage@CSFStorage@@UEAAJPEBGKKKPEAPEAUIStorage@@@Z
    virtual long CreateStorage(unsigned short const *, unsigned long, unsigned long, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CSFStorage@@UEAAJPEBGKKKPEAPEAUIStream@@@Z
    virtual long CreateStream(unsigned short const *, unsigned long, unsigned long, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyElement@CSFStorage@@UEAAJPEBG@Z
    virtual long DestroyElement(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumElements@CSFStorage@@UEAAJKPEAXKPEAPEAUIEnumSTATSTG@@@Z
    virtual long EnumElements(unsigned long, void *, unsigned long, IEnumSTATSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveElementTo@CSFStorage@@UEAAJPEBGPEAUIStorage@@0K@Z
    virtual long MoveElementTo(unsigned short const *, IStorage *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStorage@CSFStorage@@UEAAJPEBGPEAUIStorage@@KPEAPEAGKPEAPEAU2@@Z
    virtual long OpenStorage(unsigned short const *, IStorage *, unsigned long, unsigned short * *, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStream@CSFStorage@@UEAAJPEBGPEAXKKPEAPEAUIStream@@@Z
    virtual long OpenStream(unsigned short const *, void *, unsigned long, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameElement@CSFStorage@@UEAAJPEBG0@Z
    virtual long RenameElement(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?Revert@CSFStorage@@UEAAJXZ
    virtual long Revert();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClass@CSFStorage@@UEAAJAEBU_GUID@@@Z
    virtual long SetClass(_GUID const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetElementTimes@CSFStorage@@UEAAJPEBGPEBU_FILETIME@@11@Z
    virtual long SetElementTimes(unsigned short const *, _FILETIME const *, _FILETIME const *, _FILETIME const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetStateBits@CSFStorage@@UEAAJKK@Z
    virtual long SetStateBits(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CSFStorage@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BindByName@CSFStorage@@AEAAJPEBGPEAUIBindCtx@@KAEBU_GUID@@PEAPEAX@Z
    long _BindByName(unsigned short const *, IBindCtx *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateHelper@CSFStorage@@AEAAJPEBGKAEBU_GUID@@PEAPEAX@Z
    long _CreateHelper(unsigned short const *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseAndVerify@CSFStorage@@AEAAJPEBGPEAUIBindCtx@@PEAPEAU_ITEMID_CHILD@@@Z
    long _ParseAndVerify(unsigned short const *, IBindCtx *, _ITEMID_CHILD * *);
};
