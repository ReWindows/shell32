#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
class CLocalCopyHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLocalCopyHelper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToHandlerOverStream@CLocalCopyHelper@@UEAAJPEAUIBindCtx@@AEBU_GUID@@PEAPEAUIStream@@1PEAPEAX@Z
    virtual long BindToHandlerOverStream(IBindCtx *, _GUID const &, IStream * *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStream@CLocalCopyHelper@@UEAAJW4LCFLAGS@@PEAUIBindCtx@@PEAPEAUIStream@@@Z
    virtual long BindToStream(int, IBindCtx *, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Download@CLocalCopyHelper@@UEAAJPEAUHWND__@@W4LCFLAGS@@PEAUIBindCtx@@PEAPEAG@Z
    virtual long Download(HWND__*, int, IBindCtx *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CLocalCopyHelper@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDownloadDestination@CLocalCopyHelper@@UEAAJW4LCFLAGS@@PEAPEAUIShellItem@@PEAPEAG@Z
    virtual long GetDownloadDestination(int, IShellItem * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLocalCopyHelper@@UEAAJPEAUIShellItem@@K@Z
    virtual long Initialize(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDownloaded@CLocalCopyHelper@@UEAAJW4LCFLAGS@@PEAPEAUIShellItem@@@Z
    virtual long NotifyDownloaded(int, IShellItem * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLocalCopyHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLocalCopyHelper@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DownloadUsingFileOperation@CLocalCopyHelper@@IEAAJPEAUHWND__@@W4LCFLAGS@@PEAUIFileOperationProgressSink@@@Z
    long _DownloadUsingFileOperation(HWND__*, int, IFileOperationProgressSink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DownloadUsingStreams@CLocalCopyHelper@@IEAAJW4LCFLAGS@@PEAUIBindCtx@@PEAUIFileOperationProgressSink@@@Z
    long _DownloadUsingStreams(int, IBindCtx *, IFileOperationProgressSink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLocalStream@CLocalCopyHelper@@IEAAJKPEAPEAUIStream@@PEAU_FILETIME@@@Z
    long _GetLocalStream(unsigned long, IStream * *, _FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRemoteStream@CLocalCopyHelper@@IEAAJW4LCFLAGS@@KPEAUIBindCtx@@PEAPEAUIStream@@PEAU_FILETIME@@@Z
    long _GetRemoteStream(int, unsigned long, IBindCtx *, IStream * *, _FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitCacheEntry@CLocalCopyHelper@@IEAAJXZ
    long _InitCacheEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCacheName@CLocalCopyHelper@@IEAAJXZ
    long _SetCacheName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateLocalCopyIfNeeded@CLocalCopyHelper@@IEAAJ_N@Z
    long _UpdateLocalCopyIfNeeded(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLocalCopyHelper@@IEAA@XZ
    ~CLocalCopyHelper();
};
