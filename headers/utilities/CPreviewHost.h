#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
class CPreviewHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPreviewHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CPreviewHost@@SAJPEAUHINSTANCE__@@PEAUHWND__@@PEAUIPreviewHostCallback@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(HINSTANCE__*, HWND__*, IPreviewHostCallback *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPreview@CPreviewHost@@UEAAJXZ
    virtual long DoPreview();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandlerCreationContext@CPreviewHost@@UEAAJPEAUPreviewHandlerCreationContext@@@Z
    virtual long GetHandlerCreationContext(PreviewHandlerCreationContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CPreviewHost@@UEAAJPEAUIShellItem@@H@Z
    virtual long Load(IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithPreparedHandler@CPreviewHost@@UEAAJPEAUIShellItem@@AEBU_GUID@@W4HANDLERFLAGS@@PEAVCRichPreviewThreadData@@_N@Z
    virtual long LoadWithPreparedHandler(IShellItem *, _GUID const &, int, CRichPreviewThreadData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameActive@CPreviewHost@@UEAAJH@Z
    virtual long OnFrameActive(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPreviewHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryWindowFocus@CPreviewHost@@UEAAJPEAPEAUHWND__@@@Z
    virtual long QueryWindowFocus(HWND__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPreviewHost@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CPreviewHost@@UEAAJXZ
    virtual long SetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unload@CPreviewHost@@UEAAJXZ
    virtual long Unload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowSized@CPreviewHost@@UEAAJXZ
    virtual long WindowSized();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPreviewHost@@AEAA@XZ
    CPreviewHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MsgWndProc@CPreviewHost@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t MsgWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddToCache@CPreviewHost@@AEAAJAEBU_GUID@@W4HANDLERFLAGS@@W4EXTCOCREATEFLAGS@@PEAPEAVCRichPreviewThreadData@@@Z
    long _CreateAndAddToCache(_GUID const &, int, int, CRichPreviewThreadData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMsgWindow@CPreviewHost@@AEAAJXZ
    long _CreateMsgWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindInCache@CPreviewHost@@AEAAPEAVCRichPreviewThreadData@@AEBU_GUID@@@Z
    CRichPreviewThreadData * _FindInCache(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnloadCachedResources@CPreviewHost@@AEAAXXZ
    void _UnloadCachedResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPreviewHost@@AEAA@XZ
    ~CPreviewHost();
};
