#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::AccessibleButton (likely; classinfo-template-instantiation).
class ShellItemLink {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@ShellItemLink@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@ShellItemLink@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@ShellItemLink@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTarget@ShellItemLink@@QEAAJPEAUIShellItem@@@Z
    long SetTarget(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ShellExecProp@ShellItemLink@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ShellExecProp();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellItemLink@@UEAA@XZ
    virtual ~ShellItemLink();
};
