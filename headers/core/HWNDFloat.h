#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 32 member(s).
// Base evidence: DirectUI::ElementWithHWND (likely; classinfo-template-instantiation).
class HWNDFloat {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AdjustWindowRectHF@HWNDFloat@@UEAAXPEAUtagRECT@@@Z
    virtual void AdjustWindowRectHF(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleImpl@HWNDFloat@@UEAAJPEAPEAUIAccessible@@@Z
    virtual long GetAccessibleImpl(IAccessible * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@HWNDFloat@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@HWNDFloat@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWND();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWNDFloat@@QEAA@XZ
    HWNDFloat();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HWNDFloat@@QEAAJIIPEAVElement@DirectUI@@PEAK@Z
    long Initialize(unsigned int, unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageCallback@HWNDFloat@@UEAAIPEAUtagGMSG@@@Z
    virtual unsigned int MessageCallback(tagGMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@HWNDFloat@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@HWNDFloat@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@HWNDFloat@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotify@HWNDFloat@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@HWNDFloat@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@HWNDFloat@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWNDFloat@@UEAA@XZ
    virtual ~HWNDFloat();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorAndBrushFromValue@HWNDFloat@@IEAAXPEAVValue@DirectUI@@PEAKPEAPEAUHBRUSH__@@@Z
    void ColorAndBrushFromValue(::DirectUI::Value *, unsigned long *, HBRUSH__* *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateHWND@HWNDFloat@@MEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFont@HWNDFloat@@IEAAPEAUHFONT__@@XZ
    HFONT__* EnsureFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EraseBkgnd@HWNDFloat@@IEAA_N_KPEA_J@Z
    bool EraseBkgnd(uint64_t, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStaticColor@HWNDFloat@@IEAA_N_KPEA_J@Z
    bool GetStaticColor(uint64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@HWNDFloat@@MEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@HWNDFloat@@MEAAXPEAVElement@DirectUI@@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetFont@HWNDFloat@@IEAAXXZ
    void ResetFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncBackground@HWNDFloat@@IEAAXXZ
    void SyncBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncFont@HWNDFloat@@IEAAXXZ
    void SyncFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncRect@HWNDFloat@@IEAAXIHH@Z
    void SyncRect(unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncText@HWNDFloat@@IEAAXXZ
    void SyncText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncVisible@HWNDFloat@@IEAAXH@Z
    void SyncVisible(int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleImpl@HWNDFloat@@AEAAJPEAPEAUIAccessible@@_N@Z
    long GetAccessibleImpl(IAccessible * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CtrlWndProc@HWNDFloat@@CAHPEAXPEAUHWND__@@I_K_JPEA_J@Z
    static int _CtrlWndProc(void *, HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SinkWndProc@HWNDFloat@@CAHPEAXPEAUHWND__@@I_K_JPEA_J@Z
    static int _SinkWndProc(void *, HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
};
