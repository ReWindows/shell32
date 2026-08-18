#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CSearchOnlyLibraryPage {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CSearchOnlyLibraryPage@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OptionallyTakeInitialFocus@CSearchOnlyLibraryPage@@UEAAJPEAH@Z
    virtual long OptionallyTakeInitialFocus(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInstructionResourceId@CSearchOnlyLibraryPage@@MEAAHXZ
    virtual int _GetInstructionResourceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNavigate@CSearchOnlyLibraryPage@@MEAAXXZ
    virtual void _OnNavigate();
};
