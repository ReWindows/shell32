#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CLibraryLocationFileDialogEvent {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLibraryLocationFileDialogEvent@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFileOk@CLibraryLocationFileDialogEvent@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnFileOk(IFileDialog *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnFolderChange@CLibraryLocationFileDialogEvent@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnFolderChange(IFileDialog *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnFolderChanging@CLibraryLocationFileDialogEvent@@UEAAJPEAUIFileDialog@@PEAUIShellItem@@@Z
    virtual long OnFolderChanging(IFileDialog *, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnOverwrite@CLibraryLocationFileDialogEvent@@UEAAJPEAUIFileDialog@@PEAUIShellItem@@PEAW4FDE_OVERWRITE_RESPONSE@@@Z
    virtual long OnOverwrite(IFileDialog *, IShellItem *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSelectionChange@CLibraryLocationFileDialogEvent@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnSelectionChange(IFileDialog *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnShareViolation@CLibraryLocationFileDialogEvent@@UEAAJPEAUIFileDialog@@PEAUIShellItem@@PEAW4FDE_SHAREVIOLATION_RESPONSE@@@Z
    virtual long OnShareViolation(IFileDialog *, IShellItem *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChange@CLibraryLocationFileDialogEvent@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnTypeChange(IFileDialog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLibraryLocationFileDialogEvent@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLibraryLocationFileDialogEvent@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLibraryLocationFileDialogEvent@@AEAA@XZ
    ~CLibraryLocationFileDialogEvent();
};
