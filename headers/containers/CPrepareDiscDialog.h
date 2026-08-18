#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CPrepareDiscDialog {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@CPrepareDiscDialog@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@CPrepareDiscDialog@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CPrepareDiscDialog@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@CPrepareDiscDialog@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@CPrepareDiscDialog@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@CPrepareDiscDialog@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CPrepareDiscDialog@@QEAAHPEAUHWND__@@PEAPEAU2@@Z
    int Show(HWND__*, HWND__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPrepareDiscDialog@@QEAA@XZ
    ~CPrepareDiscDialog();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CCSysLinkNotifyHandler@CPrepareDiscDialog@@AEAAHI_K_JPEA_J@Z
    int _CCSysLinkNotifyHandler(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsUdfSelected@CPrepareDiscDialog@@AEAAHXZ
    int _IsUdfSelected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDialogCreated@CPrepareDiscDialog@@AEAAXPEAUHWND__@@@Z
    void _OnDialogCreated(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDialogDestroyed@CPrepareDiscDialog@@AEAAXPEAUHWND__@@@Z
    void _OnDialogDestroyed(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNextClicked@CPrepareDiscDialog@@AEAAJPEAUHWND__@@@Z
    long _OnNextClicked(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateVolumeLabel@CPrepareDiscDialog@@AEAAXXZ
    void _UpdateVolumeLabel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CCSysLinkNotifyHandler@CPrepareDiscDialog@@CAHI_K_JPEA_JPEAX@Z
    static int s_CCSysLinkNotifyHandler(unsigned int, uint64_t, int64_t, int64_t *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PrepareDiscDialogCallbackProc@CPrepareDiscDialog@@CAJPEAUHWND__@@I_K_J2@Z
    static long s_PrepareDiscDialogCallbackProc(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
};
