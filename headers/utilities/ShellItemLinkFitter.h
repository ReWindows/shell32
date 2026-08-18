#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class ShellItemLinkFitter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@ShellItemLinkFitter@@UEAAPEAVElement@DirectUI@@PEAV23@HPEBUNavReference@3@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@ShellItemLinkFitter@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@ShellItemLinkFitter@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@ShellItemLinkFitter@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@ShellItemLinkFitter@@UEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateShellLinksDesiredSize@ShellItemLinkFitter@@AEAA?AUtagSIZE@@QEAV?$CCoSimpleArray@PEAVElement@DirectUI@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAVElement@DirectUI@@@@@@JPEAVSurface@DirectUI@@@Z
    tagSIZE _UpdateShellLinksDesiredSize(WindissectOpaque * const, long, ::DirectUI::Surface *);
};
