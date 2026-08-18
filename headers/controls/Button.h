#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
namespace DirectUI {
class Button {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultAction@Button@DirectUI@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@Button@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@Button@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostDialogFocus@Button@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnLostDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@Button@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReceivedDialogFocus@Button@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnReceivedDialogFocus(::DirectUI::IDialogElement *);
};
} // namespace DirectUI
