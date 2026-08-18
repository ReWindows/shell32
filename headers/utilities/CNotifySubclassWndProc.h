#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CNotifySubclassWndProc {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DefWindowProc@CNotifySubclassWndProc@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t _DefWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?_DestroyCustomData@CNotifySubclassWndProc@@MEAAX_J@Z
    virtual void _DestroyCustomData(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushNotifyMessages@CNotifySubclassWndProc@@IEAAXPEAUHWND__@@@Z
    void _FlushNotifyMessages(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterWindow@CNotifySubclassWndProc@@IEAAXPEAUHWND__@@PEBU_ITEMIDLIST_ABSOLUTE@@JHI_JPEAI@Z
    void _RegisterWindow(HWND__*, _ITEMIDLIST_ABSOLUTE const *, long, int, unsigned int, int64_t, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubclassWindow@CNotifySubclassWndProc@@IEAAHPEAUHWND__@@I@Z
    int _SubclassWindow(HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterWindow@CNotifySubclassWndProc@@IEAAXPEAUHWND__@@PEBU_ITEMIDLIST_ABSOLUTE@@I@Z
    void _UnregisterWindow(HWND__*, _ITEMIDLIST_ABSOLUTE const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNotifySubclassWndProc@@MEAA@XZ
    virtual ~CNotifySubclassWndProc();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CompareRegisterData@CNotifySubclassWndProc@@CAHPEBUNOTIFYREGISTERDATA@1@0_J@Z
    static int s_CompareRegisterData(WindissectOpaque const *, WindissectOpaque const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DestroyRegisterData@CNotifySubclassWndProc@@CAHPEAUNOTIFYREGISTERDATA@1@PEAX@Z
    static int s_DestroyRegisterData(WindissectOpaque *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SubclassWndProc@CNotifySubclassWndProc@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_SubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
};
