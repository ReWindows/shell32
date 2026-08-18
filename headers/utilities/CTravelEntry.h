#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 41 member(s).
class CTravelEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEntryFlags@CTravelEntry@@UEAAJK@Z
    virtual long AddEntryFlags(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTravelEntry@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTravelEntry@@QEAA@H@Z
    CTravelEntry(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanInvoke@CTravelEntry@@QEAAHPEAUIUnknown@@H@Z
    int CanInvoke(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CTravelEntry@@QEAAJPEAPEAV1@@Z
    long Clone(CTravelEntry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@CTravelEntry@@QEAAJPEAGKK@Z
    long GetDisplayName(unsigned short *, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntryFlags@CTravelEntry@@UEAAJPEAK@Z
    virtual long GetEntryFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexBrowser@CTravelEntry@@QEBAJPEAUIUnknown@@PEAPEAU2@@Z
    long GetIndexBrowser(IUnknown *, IUnknown * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPidl@CTravelEntry@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetPidl(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CTravelEntry@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetURL@CTravelEntry@@UEAAJPEAPEAG@Z
    virtual long GetURL(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CTravelEntry@@UEAAJPEAUIUnknown@@@Z
    virtual long Invoke(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTravelEntry@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CTravelEntry@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTravelEntry@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEntryFlags@CTravelEntry@@UEAAJK@Z
    virtual long RemoveEntryFlags(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSelf@CTravelEntry@@QEAAXXZ
    void RemoveSelf();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNext@CTravelEntry@@QEAAXPEAV1@@Z
    void SetNext(CTravelEntry *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrev@CTravelEntry@@QEAAXPEAV1@@Z
    void SetPrev(CTravelEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Size@CTravelEntry@@QEAAKXZ
    unsigned long Size();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CTravelEntry@@QEAAJPEAUIUnknown@@HH@Z
    long Update(IUnknown *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CTravelEntry@@UEAAJPEAUIUnknown@@H@Z
    virtual long Update(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExternal@CTravelEntry@@QEAAJPEAUIUnknown@@0@Z
    long UpdateExternal(IUnknown *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CTravelEntry@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGlobalHandleForStream@CTravelEntry@@IEAAJPEAUIStream@@PEAPEAX@Z
    long _GetGlobalHandleForStream(IStream *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeExternal@CTravelEntry@@IEAAJPEAUIUnknown@@@Z
    long _InvokeExternal(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSearchUrl@CTravelEntry@@KAHPEBG@Z
    static int _IsSearchUrl(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistHistoryToStream@CTravelEntry@@IEAAJPEAUIPersistHistory@@PEAPEAUIStream@@H@Z
    long _PersistHistoryToStream(IPersistHistory *, IStream * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Reset@CTravelEntry@@IEAAXXZ
    void _Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFromTLClient@CTravelEntry@@IEAAJPEAUIUnknown@@PEAPEAUIStream@@H@Z
    long _UpdateFromTLClient(IUnknown *, IStream * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTravelLog@CTravelEntry@@IEAAJPEAUIUnknown@@HH@Z
    long _UpdateTravelLog(IUnknown *, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTravelEntry@@IEAA@XZ
    ~CTravelEntry();
};
