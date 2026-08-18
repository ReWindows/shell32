#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CCscWorkOfflineTaskDialog {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCscWorkOfflineTaskDialog@@QEAA@PEAUHWND__@@@Z
    CCscWorkOfflineTaskDialog(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CCscWorkOfflineTaskDialog@@QEAAJPEAPEBGK@Z
    long Init(unsigned short const * *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CCscWorkOfflineTaskDialog@@QEAAJXZ
    long Run();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCscWorkOfflineTaskDialog@@QEAA@XZ
    ~CCscWorkOfflineTaskDialog();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitOptionsConfigInfo@CCscWorkOfflineTaskDialog@@AEAAXXZ
    void _InitOptionsConfigInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CCscWorkOfflineTaskDialog@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOptionsButtonClicked@CCscWorkOfflineTaskDialog@@AEAAJH@Z
    long _OnOptionsButtonClicked(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnProgressTimer@CCscWorkOfflineTaskDialog@@AEAAXK@Z
    void _OnProgressTimer(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OptionsCallbackProc@CCscWorkOfflineTaskDialog@@CAJPEAUHWND__@@I_K_J2@Z
    static long _OptionsCallbackProc(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProgressCallbackProc@CCscWorkOfflineTaskDialog@@CAJPEAUHWND__@@I_K_J2@Z
    static long _ProgressCallbackProc(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TransitionItemOffline@CCscWorkOfflineTaskDialog@@AEAAJHPEAH@Z
    long _TransitionItemOffline(int, int *);
};
