#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
// Base evidence: DirectUI::HWNDHost (likely; classinfo-template-instantiation).
class CReadingPaneModuleHost {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CReadingPaneModuleHost@@QEAA@XZ
    CReadingPaneModuleHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CReadingPaneModuleHost@@SAJIPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CReadingPaneModuleHost@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateAway@CReadingPaneModuleHost@@QEAAXXZ
    void NavigateAway();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryWindowFocusFromPreviewer@CReadingPaneModuleHost@@QEAAPEAUHWND__@@XZ
    HWND__* QueryWindowFocusFromPreviewer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CReadingPaneModuleHost@@QEAAXH_N@Z
    void Update(int, bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHWND@CReadingPaneModuleHost@@MEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@CReadingPaneModuleHost@@MEAAXPEAVElement@DirectUI@@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModuleHostWndProc@CReadingPaneModuleHost@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t ModuleHostWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueUpdateWorkItem@CReadingPaneModuleHost@@AEAAJAEBUREADINGPANEHOST_UPDATE_PARAMS@@@Z
    long _QueueUpdateWorkItem(READINGPANEHOST_UPDATE_PARAMS const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnloadCurrentPreviewer@CReadingPaneModuleHost@@AEAAXPEAUIPropertyBag@@@Z
    void _UnloadCurrentPreviewer(IPropertyBag *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CReadingPaneModuleHost@@EEAA@XZ
    virtual ~CReadingPaneModuleHost();
};
