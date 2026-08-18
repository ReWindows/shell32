#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CRichPreviewThreadData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRichPreviewThreadData@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CRichPreviewThreadData@@SAJPEAUHINSTANCE__@@PEAUHWND__@@AEBU_GUID@@W4HANDLERFLAGS@@W4EXTCOCREATEFLAGS@@1PEAPEAV1@@Z
    static long CreateInstance(HINSTANCE__*, HWND__*, _GUID const &, int, int, HWND__*, CRichPreviewThreadData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingBGThread@CRichPreviewThreadData@@QEAAJXZ
    long PingBGThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostLoadFileMessageToBGThread@CRichPreviewThreadData@@QEAAJPEAUIShellItem@@K_N@Z
    long PostLoadFileMessageToBGThread(IShellItem *, unsigned long, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRichPreviewThreadData@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRichPreviewThreadData@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostMessageToBGThread@CRichPreviewThreadData@@AEBAJI_K_J@Z
    long _PostMessageToBGThread(unsigned int, uint64_t, int64_t) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRichPreviewThreadData@@AEAA@XZ
    ~CRichPreviewThreadData();
};
