#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class COpenDefaultLocationCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COpenDefaultLocationCommand@@QEAA@XZ
    COpenDefaultLocationCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@COpenDefaultLocationCommand@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapability@COpenDefaultLocationCommand@@UEAAJPEAW4EXECUTE_COMMAND_HANDLER_CAPABILITIES@@@Z
    virtual long GetCapability(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavTargetToSyncRoot@COpenDefaultLocationCommand@@SAJPEAPEAUIShellItem@@@Z
    static long GetNavTargetToSyncRoot(IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@COpenDefaultLocationCommand@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenDefaultLocationCommand@@UEAA@XZ
    virtual ~COpenDefaultLocationCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNavTarget@COpenDefaultLocationCommand@@AEAAJPEAPEAUIShellItem@@@Z
    long _GetNavTarget(IShellItem * *);
};
