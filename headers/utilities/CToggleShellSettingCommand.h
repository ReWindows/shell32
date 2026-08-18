#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CToggleShellSettingCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CToggleShellSettingCommand@@QEAA@K@Z
    CToggleShellSettingCommand(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CToggleShellSettingCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CToggleShellSettingCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAndToggleSpecifiedField@CToggleShellSettingCommand@@AEAAXPEAUSHELLSTATEW@@@Z
    void _GetAndToggleSpecifiedField(SHELLSTATEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSpecifiedField@CToggleShellSettingCommand@@AEAAHAEBUSHELLSTATEW@@@Z
    int _GetSpecifiedField(SHELLSTATEW const &);
};
