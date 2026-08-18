#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
class CVerbStateTask {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVerbStateTask@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVerbStateTask@@UEAAJPEAUIUnknown@@PEAUIVerbStateTaskCallBack@@PEAUIShellItemArray@@PEAUIExplorerCommand@@PEAUHKEY__@@PEBGI@Z
    virtual long Initialize(IUnknown *, IVerbStateTaskCallBack *, IShellItemArray *, IExplorerCommand *, HKEY__*, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CVerbStateTask@@UEAAJXZ
    virtual long InternalResumeRT();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVerbStateTask@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVerbStateTask@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVerbStateTask@@EEAA@XZ
    virtual ~CVerbStateTask();
};
