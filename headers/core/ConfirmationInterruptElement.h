#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class ConfirmationInterruptElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@ConfirmationInterruptElement@@UEAAPEAVElement@DirectUI@@PEAV23@HPEBUNavReference@3@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@ConfirmationInterruptElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@ConfirmationInterruptElement@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@ConfirmationInterruptElement@@SAJAEBVCDUIResourceManager@@PEAUIConfirmationInterrupt@@PEAVElement@DirectUI@@PEAKPEAPEAV45@@Z
    static long s_CreateInstance(CDUIResourceManager const &, IConfirmationInterrupt *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConfirmationInterruptElement@@UEAA@XZ
    virtual ~ConfirmationInterruptElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@ConfirmationInterruptElement@@AEAAJAEBVCDUIResourceManager@@PEAUIConfirmationInterrupt@@@Z
    long _Initialize(CDUIResourceManager const &, IConfirmationInterrupt *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeDoForAllCheckbox@ConfirmationInterruptElement@@AEAAJ_N@Z
    long _InitializeDoForAllCheckbox(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetButtons@ConfirmationInterruptElement@@AEAAJAEBVCDUIResourceManager@@PEAUIConfirmationInterrupt@@@Z
    long _SetButtons(CDUIResourceManager const &, IConfirmationInterrupt *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDescription@ConfirmationInterruptElement@@AEAAJPEAUIConfirmationInterrupt@@@Z
    long _SetDescription(IConfirmationInterrupt *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItemDetails@ConfirmationInterruptElement@@AEAAJPEAUIShellItem@@@Z
    long _SetItemDetails(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItemImage@ConfirmationInterruptElement@@AEAAJPEAUIShellItem@@@Z
    long _SetItemImage(IShellItem *);
};
