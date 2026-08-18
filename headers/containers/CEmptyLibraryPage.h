#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CEmptyLibraryPage {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CEmptyLibraryPage@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CEmptyLibraryPage@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CEmptyLibraryPage@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInstructionResourceId@CEmptyLibraryPage@@MEAAHXZ
    virtual int _GetInstructionResourceId();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddLocation@CEmptyLibraryPage@@AEAAXXZ
    void _AddLocation();
};
