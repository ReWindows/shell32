#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CFDFolderNotifySource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFDFolderNotifySource@@QEAAJXZ
    long Initialize();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFDFolderNotifySource@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Suspend@CFDFolderNotifySource@@QEAAJXZ
    long Suspend();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureEventName@CFDFolderNotifySource@@AEAAJXZ
    long _EnsureEventName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitSSO@CFDFolderNotifySource@@AEAAXXZ
    void _InitSSO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CleanUpThreadProc@CFDFolderNotifySource@@CAKPEAX@Z
    static unsigned long s_CleanUpThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InitThreadProc@CFDFolderNotifySource@@CAKPEAX@Z
    static unsigned long s_InitThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PubSvcListenerCallback@CFDFolderNotifySource@@CAXPEAXE@Z
    static void s_PubSvcListenerCallback(void *, unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFDFolderNotifySource@@AEAA@XZ
    ~CFDFolderNotifySource();
};
