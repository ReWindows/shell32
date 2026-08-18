#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CLibraryTransferHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLibraryTransferHelper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindUniqueName@CLibraryTransferHelper@@UEAAJPEBG00PEAPEAG@Z
    virtual long FindUniqueName(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestinationFlags@CLibraryTransferHelper@@UEAAJPEAUIShellItem@@PEAW4TRANSFERDESTFLAGS@@@Z
    virtual long GetDestinationFlags(IShellItem *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceFlags@CLibraryTransferHelper@@UEAAJPEAUIShellItem@@PEAW4TRANSFERSOURCEFLAGS@@@Z
    virtual long GetSourceFlags(IShellItem *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLibraryTransferHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLibraryTransferHelper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRestrictions@CLibraryTransferHelper@@UEAAJW4TRANSFERRESTRICTIONS@@@Z
    virtual long SetRestrictions(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CLibraryTransferHelper@@SAJPEAUITransferHelper@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(ITransferHelper *, _GUID const &, void * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLibraryTransferHelper@@AEAA@XZ
    ~CLibraryTransferHelper();
};
