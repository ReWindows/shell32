#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CFadeTask {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFadeTask@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FadeRect@CFadeTask@@UEAAJPEBUtagRECT@@@Z
    virtual long FadeRect(tagRECT const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFadeTask@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFadeTask@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFadeTask@@AEAA@XZ
    CFadeTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoFade@CFadeTask@@AEAAXXZ
    void _DoFade();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoPreFade@CFadeTask@@AEAAXXZ
    void _DoPreFade();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopFade@CFadeTask@@AEAAXH@Z
    void _StopFade(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FadeSyncProc@CFadeTask@@CAKPEAX@Z
    static unsigned long s_FadeSyncProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FadeThreadProc@CFadeTask@@CAKPEAX@Z
    static unsigned long s_FadeThreadProc(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFadeTask@@AEAA@XZ
    ~CFadeTask();
};
