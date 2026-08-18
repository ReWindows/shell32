#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 56 member(s).
class CHyperlinkPropertyControl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHyperlinkPropertyControl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHyperlinkPropertyControl@@QEAA@XZ
    CHyperlinkPropertyControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomDrawText@CHyperlinkPropertyControl@@UEAAJPEAUHDC__@@PEBGHPEAUtagRECT@@IH@Z
    virtual long CustomDrawText(HDC__*, unsigned short const *, int, tagRECT *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CHyperlinkPropertyControl@@UEAAJXZ
    virtual long Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawFlags@CHyperlinkPropertyControl@@UEAAJPEAH@Z
    virtual long GetDrawFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CHyperlinkPropertyControl@@UEAAJW4PROPCTL_RECT_TYPE@@PEAUHDC__@@PEBUtagSIZE@@PEAU4@@Z
    virtual long GetSize(int, HDC__*, tagSIZE const *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CHyperlinkPropertyControl@@UEAAJKI@Z
    virtual long GetState(unsigned long, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRect@CHyperlinkPropertyControl@@UEAAJKPEBUtagRECT@@@Z
    virtual long InvalidateRect(unsigned long, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDefaultAction@CHyperlinkPropertyControl@@UEAAJXZ
    virtual long InvokeDefaultAction();
    // Category: Method | Source: PE Export
    // Symbol: ?Notify@CHyperlinkPropertyControl@@UEAAJKHH@Z
    virtual long Notify(unsigned long, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCustomDraw@CHyperlinkPropertyControl@@UEAAJKPEAUHDC__@@PEBUtagRECT@@KHIPEA_J@Z
    virtual long OnCustomDraw(unsigned long, HDC__*, tagRECT const *, unsigned long, int, unsigned int, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHyperlinkPropertyControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHyperlinkPropertyControl@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureMarkup@CHyperlinkPropertyControl@@AEAAJXZ
    long _EnsureMarkup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUnderlineFont@CHyperlinkPropertyControl@@AEAAPEAUHFONT__@@PEAU2@@Z
    HFONT__* _GetUnderlineFont(HFONT__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetText@CHyperlinkPropertyControl@@AEAAXXZ
    void _SetText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubclassWndProc@CHyperlinkPropertyControl@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _SubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_subclassProc@CHyperlinkPropertyControl@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_subclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AdjustWindowRect@CHyperlinkPropertyControl@@EEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long v_AdjustWindowRect(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_BaseWindowProc@CHyperlinkPropertyControl@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_BaseWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?v_Cancel@CHyperlinkPropertyControl@@EEAAXXZ
    virtual void v_Cancel();
    // Category: Method | Source: PE Export
    // Symbol: ?v_Commit@CHyperlinkPropertyControl@@EEAAXXZ
    virtual void v_Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CreateActiveWindow@CHyperlinkPropertyControl@@EEAAPEAUHWND__@@PEAU2@PEBUtagRECT@@@Z
    virtual HWND__* v_CreateActiveWindow(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DestroyActiveWindow@CHyperlinkPropertyControl@@EEAAXXZ
    virtual void v_DestroyActiveWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DrawContent@CHyperlinkPropertyControl@@EEAAJPEAUHDC__@@PEAUtagRECT@@HH@Z
    virtual long v_DrawContent(HDC__*, tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValue@CHyperlinkPropertyControl@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetValue(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnBaseSetCursor@CHyperlinkPropertyControl@@EEAAHXZ
    virtual int v_OnBaseSetCursor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetValue@CHyperlinkPropertyControl@@EEAAJPEAUIUnknown@@@Z
    virtual long v_SetValue(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHyperlinkPropertyControl@@EEAA@XZ
    virtual ~CHyperlinkPropertyControl();
};
