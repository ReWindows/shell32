#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CControlPanelNavLinkCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanInvoke@CControlPanelNavLinkCommand@@QEAA_NPEAUIOpenControlPanel@@@Z
    bool CanInvoke(IOpenControlPanel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CControlPanelNavLinkCommand@@QEAAPEAV1@XZ
    CControlPanelNavLinkCommand * Copy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CControlPanelNavLinkCommand@@QEAAJPEAUHWND__@@PEAUIUnknown@@@Z
    long Invoke(HWND__*, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppletOrCommand@CControlPanelNavLinkCommand@@QEAAJPEBG0@Z
    long SetAppletOrCommand(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelNavLinkCommand@@QEAA@XZ
    ~CControlPanelNavLinkCommand();
};
