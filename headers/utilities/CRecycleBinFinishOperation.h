#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 21 member(s).
class CRecycleBinFinishOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFinishOperation@CRecycleBinFinishOperation@@SAJPEAUIFileOperation@@PEAUIRecycleBinManager@@@Z
    static long AddFinishOperation(IFileOperation *, IRecycleBinManager *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRecycleBinFinishOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishOperations@CRecycleBinFinishOperation@@UEAAJJ@Z
    virtual long FinishOperations(long);
    // Category: Method | Source: PE Export
    // Symbol: ?PauseTimer@CRecycleBinFinishOperation@@UEAAJXZ
    virtual long PauseTimer();
    // Category: Method | Source: PE Export
    // Symbol: ?PostCopyItem@CRecycleBinFinishOperation@@UEAAJKPEAUIShellItem@@0PEBGJ0@Z
    virtual long PostCopyItem(unsigned long, IShellItem *, IShellItem *, unsigned short const *, long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PostDeleteItem@CRecycleBinFinishOperation@@UEAAJKPEAUIShellItem@@J0@Z
    virtual long PostDeleteItem(unsigned long, IShellItem *, long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PostMoveItem@CRecycleBinFinishOperation@@UEAAJKPEAUIShellItem@@0PEBGJ0@Z
    virtual long PostMoveItem(unsigned long, IShellItem *, IShellItem *, unsigned short const *, long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PostNewItem@CRecycleBinFinishOperation@@UEAAJKPEAUIShellItem@@PEBG1KJ0@Z
    virtual long PostNewItem(unsigned long, IShellItem *, unsigned short const *, unsigned short const *, unsigned long, long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PostRenameItem@CRecycleBinFinishOperation@@UEAAJKPEAUIShellItem@@PEBGJ0@Z
    virtual long PostRenameItem(unsigned long, IShellItem *, unsigned short const *, long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreCopyItem@CRecycleBinFinishOperation@@UEAAJKPEAUIShellItem@@0PEBG@Z
    virtual long PreCopyItem(unsigned long, IShellItem *, IShellItem *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreDeleteItem@CRecycleBinFinishOperation@@UEAAJKPEAUIShellItem@@@Z
    virtual long PreDeleteItem(unsigned long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreMoveItem@CRecycleBinFinishOperation@@UEAAJKPEAUIShellItem@@0PEBG@Z
    virtual long PreMoveItem(unsigned long, IShellItem *, IShellItem *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreNewItem@CRecycleBinFinishOperation@@UEAAJKPEAUIShellItem@@PEBG@Z
    virtual long PreNewItem(unsigned long, IShellItem *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreRenameItem@CRecycleBinFinishOperation@@UEAAJKPEAUIShellItem@@PEBG@Z
    virtual long PreRenameItem(unsigned long, IShellItem *, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRecycleBinFinishOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRecycleBinFinishOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ResetTimer@CRecycleBinFinishOperation@@UEAAJXZ
    virtual long ResetTimer();
    // Category: Method | Source: PE Export
    // Symbol: ?ResumeTimer@CRecycleBinFinishOperation@@UEAAJXZ
    virtual long ResumeTimer();
    // Category: Method | Source: PE Export
    // Symbol: ?StartOperations@CRecycleBinFinishOperation@@UEAAJXZ
    virtual long StartOperations();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateProgress@CRecycleBinFinishOperation@@UEAAJII@Z
    virtual long UpdateProgress(unsigned int, unsigned int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRecycleBinFinishOperation@@AEAA@XZ
    ~CRecycleBinFinishOperation();
};
