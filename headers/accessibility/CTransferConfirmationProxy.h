#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CTransferConfirmationProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransferConfirmationProxy@@QEAA@XZ
    CTransferConfirmationProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Confirm@CTransferConfirmationProxy@@UEAAJPEBUCONFIRMOP@@PEAW4CONFIRMATIONRESPONSE@@PEAH@Z
    virtual long Confirm(CONFIRMOP const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfirmConflict@CTransferConfirmationProxy@@UEAAJPEBUCONFIRM_CONFLICT_PARAMS@@PEAUISyncMgrConflictItems@@PEAUCONFIRM_CONFLICT_RESULT@@PEAPEAUISyncMgrConflictResolutionItems@@@Z
    virtual long ConfirmConflict(CONFIRM_CONFLICT_PARAMS const *, ISyncMgrConflictItems *, CONFIRM_CONFLICT_RESULT *, ISyncMgrConflictResolutionItems * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastMessageResourceId@CTransferConfirmationProxy@@UEBAJPEAI@Z
    virtual long GetLastMessageResourceId(unsigned int *) const;
};
