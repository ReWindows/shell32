#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
// Base evidence: CMetadataLabel (likely; classinfo-template-instantiation).
class CMetadataElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CMetadataElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForDisplay@CMetadataElement@@QEAAJPEAUIPropertyDescription@@W4CONTROLTYPE@1@AEBU_GUID@@_N@Z
    long InitializeForDisplay(IPropertyDescription *, int, _GUID const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CMetadataElement@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CMetadataElement@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CMetadataElement@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@CMetadataElement@@UEAAXPEAVElement@DirectUI@@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CMetadataElement@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CMetadataElement@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentValue@CMetadataElement@@QEAAJPEAUIUnknown@@@Z
    long SetCurrentValue(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToState@CMetadataElement@@QEAAJW4CONTROLSTATE@1@PEAUHWND__@@@Z
    long SwitchToState(int, HWND__*);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMetadataElement@@MEAA@XZ
    virtual ~CMetadataElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddActiveControl@CMetadataElement@@AEAAJPEAUHWND__@@@Z
    long _AddActiveControl(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRestingControl@CMetadataElement@@AEAAJXZ
    long _AddRestingControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireInteractionEvent@CMetadataElement@@AEAAXW4REASON@MetadataInteractionEvent@@PEAG@Z
    void _FireInteractionEvent(int, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetControlDrawingSuppression@CMetadataElement@@AEAAX_NAEBU_GUID@@@Z
    void _SetControlDrawingSuppression(bool, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchToActive@CMetadataElement@@AEAAJPEAUHWND__@@@Z
    long _SwitchToActive(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchToResting@CMetadataElement@@AEAAJXZ
    long _SwitchToResting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncEditControlProps@CMetadataElement@@AEAAXXZ
    void _SyncEditControlProps();
};
