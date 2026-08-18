#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CHWShellExecute {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHWShellExecute@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHWShellExecute@@QEAA@XZ
    CHWShellExecute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleEvent@CHWShellExecute@@UEAAJPEBG00@Z
    virtual long HandleEvent(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleEventWithContent@CHWShellExecute@@UEAAJPEBG000PEAUIDataObject@@@Z
    virtual long HandleEventWithContent(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHWShellExecute@@UEAAJPEBG@Z
    virtual long Initialize(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHWShellExecute@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHWShellExecute@@UEAAKXZ
    virtual unsigned long Release();
};
