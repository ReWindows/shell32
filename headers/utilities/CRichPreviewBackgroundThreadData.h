#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 38 member(s).
class CRichPreviewBackgroundThreadData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRichPreviewBackgroundThreadData@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CRichPreviewBackgroundThreadData@@SAJPEAVCRichPreviewThreadParams@@PEAPEAV1@@Z
    static long CreateInstance(CRichPreviewThreadParams *, CRichPreviewBackgroundThreadData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowseContext@CRichPreviewBackgroundThreadData@@UEAAJPEAPEAUIHlinkBrowseContext@@@Z
    virtual long GetBrowseContext(IHlinkBrowseContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowContext@CRichPreviewBackgroundThreadData@@UEAAJPEAUPREVIEWHANDLERFRAMEINFO@@@Z
    virtual long GetWindowContext(PREVIEWHANDLERFRAMEINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CRichPreviewBackgroundThreadData@@UEAAJKPEAUIBindCtx@@PEAUIBindStatusCallback@@PEAUIHlink@@@Z
    virtual long Navigate(unsigned long, IBindCtx *, IBindStatusCallback *, IHlink *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNavigate@CRichPreviewBackgroundThreadData@@UEAAJKPEAUIMoniker@@PEBG1K@Z
    virtual long OnNavigate(unsigned long, IMoniker *, unsigned short const *, unsigned short const *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRichPreviewBackgroundThreadData@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CRichPreviewBackgroundThreadData@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRichPreviewBackgroundThreadData@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBrowseContext@CRichPreviewBackgroundThreadData@@UEAAJPEAUIHlinkBrowseContext@@@Z
    virtual long SetBrowseContext(IHlinkBrowseContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorW@CRichPreviewBackgroundThreadData@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorW(tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateHlink@CRichPreviewBackgroundThreadData@@UEAAJKPEAUIMoniker@@PEBG1@Z
    virtual long UpdateHlink(unsigned long, IMoniker *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SyncThreadProc@CRichPreviewBackgroundThreadData@@SAKPEAX@Z
    static unsigned long s_SyncThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ThreadProc@CRichPreviewBackgroundThreadData@@SAKPEAX@Z
    static unsigned long s_ThreadProc(void *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRichPreviewBackgroundThreadData@@AEAA@XZ
    CRichPreviewBackgroundThreadData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextForReadDeleteSharing@CRichPreviewBackgroundThreadData@@AEAAJPEAPEAUIBindCtx@@@Z
    long GetContextForReadDeleteSharing(IBindCtx * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupTempFile@CRichPreviewBackgroundThreadData@@AEAAXXZ
    void _CleanupTempFile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoLoadFile@CRichPreviewBackgroundThreadData@@AEAAXPEAUIStream@@K_N@Z
    void _DoLoadFile(IStream *, unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoQueryFocus@CRichPreviewBackgroundThreadData@@AEAAXPEAVCQueryFocusParams@@@Z
    void _DoQueryFocus(CQueryFocusParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoShowFile@CRichPreviewBackgroundThreadData@@AEAAXXZ
    void _DoShowFile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoWindowResized@CRichPreviewBackgroundThreadData@@AEAAXXZ
    void _DoWindowResized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeMessageWindow@CRichPreviewBackgroundThreadData@@AEAAJXZ
    long _InitializeMessageWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializePreviewer@CRichPreviewBackgroundThreadData@@AEAAJPEAUIShellItem@@K@Z
    long _InitializePreviewer(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializePreviewerWindow@CRichPreviewBackgroundThreadData@@AEAAJXZ
    long _InitializePreviewerWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeWithStream@CRichPreviewBackgroundThreadData@@AEAAHPEAUIShellItem@@PEAUIInitializeWithStream@@K@Z
    int _InitializeWithStream(IShellItem *, IInitializeWithStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyError@CRichPreviewBackgroundThreadData@@AEAAXJ@Z
    void _NotifyError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetProcessingEvent@CRichPreviewBackgroundThreadData@@AEAAJPEBG@Z
    long _ResetProcessingEvent(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetProcessingEvent@CRichPreviewBackgroundThreadData@@AEAAJPEBG@Z
    long _SetProcessingEvent(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupOplock@CRichPreviewBackgroundThreadData@@AEAAXPEAUIShellItem@@@Z
    void _SetupOplock(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnloadNow@CRichPreviewBackgroundThreadData@@AEAAJXZ
    long _UnloadNow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_BGWndProc@CRichPreviewBackgroundThreadData@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_BGWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRichPreviewBackgroundThreadData@@AEAA@XZ
    ~CRichPreviewBackgroundThreadData();
};
