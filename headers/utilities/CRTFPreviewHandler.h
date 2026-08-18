#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 32 member(s).
class CRTFPreviewHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRTFPreviewHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CRTFPreviewHandler@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CRTFPreviewHandler@@SAJHAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPreview@CRTFPreviewHandler@@UEAAJXZ
    virtual long DoPreview();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CRTFPreviewHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CRTFPreviewHandler@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRTFPreviewHandler@@UEAAJPEAUIStream@@K@Z
    virtual long Initialize(IStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryFocus@CRTFPreviewHandler@@UEAAJPEAPEAUHWND__@@@Z
    virtual long QueryFocus(HWND__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRTFPreviewHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRTFPreviewHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CRTFPreviewHandler@@UEAAJXZ
    virtual long SetFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRect@CRTFPreviewHandler@@UEAAJPEBUtagRECT@@@Z
    virtual long SetRect(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CRTFPreviewHandler@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@CRTFPreviewHandler@@UEAAJPEAUHWND__@@PEBUtagRECT@@@Z
    virtual long SetWindow(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorW@CRTFPreviewHandler@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorW(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unload@CRTFPreviewHandler@@UEAAJXZ
    virtual long Unload();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRTFPreviewHandler@@AEAA@H@Z
    CRTFPreviewHandler(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePreviewerWindow@CRTFPreviewHandler@@AEAAJXZ
    long _CreatePreviewerWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNotepadFont@CRTFPreviewHandler@@AEAAJPEAPEAUHFONT__@@@Z
    long _GetNotepadFont(HFONT__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsStreamUnicode@CRTFPreviewHandler@@AEAAJPEAUIStream@@PEAH@Z
    long _IsStreamUnicode(IStream *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StreamInCallback@CRTFPreviewHandler@@CAK_KPEAEJPEAJ@Z
    static unsigned long _StreamInCallback(uint64_t, unsigned char *, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Unload@CRTFPreviewHandler@@AEAAJXZ
    long _Unload();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRTFPreviewHandler@@AEAA@XZ
    ~CRTFPreviewHandler();
};
