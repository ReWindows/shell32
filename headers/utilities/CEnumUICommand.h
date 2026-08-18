#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CEnumUICommand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumUICommand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumUICommand@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long Clone(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumUICommand@@UEAAJPEAPEAUIEnumUICommand@@@Z
    virtual long Clone(IEnumUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumUICommand@@UEAAJKPEAPEAUIUICommand@@PEAK@Z
    virtual long Next(unsigned long, IUICommand * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumUICommand@@UEAAJKPEAPEAUIExplorerCommand@@PEAK@Z
    virtual long Next(unsigned long, IExplorerCommand * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumUICommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumUICommand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumUICommand@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumUICommand@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CEnumUICommand@@AEAAJPEAUIUnknown@@PEBUtagWVTASKITEM@@KPEAPEAU2@I@Z
    long _Initialize(IUnknown *, tagWVTASKITEM const *, unsigned long, IUnknown * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Next@CEnumUICommand@@AEAAJKAEBU_GUID@@PEAPEAXPEAK@Z
    long _Next(unsigned long, _GUID const &, void * *, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumUICommand@@AEAA@XZ
    ~CEnumUICommand();
};
