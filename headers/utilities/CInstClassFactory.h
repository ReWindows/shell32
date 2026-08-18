#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
class CInstClassFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInstClassFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CInstClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKey@CInstClassFactory@@UEAAJKPEAPEAUHKEY__@@@Z
    virtual long GetKey(unsigned long, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CInstClassFactory@@QEAAJXZ
    long Init();
    // Category: Method | Source: PE Export
    // Symbol: ?LockServer@CInstClassFactory@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInstClassFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CInstClassFactory@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInstClassFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKey@CInstClassFactory@@UEAAJPEAUHKEY__@@@Z
    virtual long SetKey(HKEY__*);
    // Category: Method | Source: PE Export
    // Symbol: ?Write@CInstClassFactory@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyForNotifications@CInstClassFactory@@AEAAJPEAPEAUHKEY__@@@Z
    long GetKeyForNotifications(HKEY__* *);
};
