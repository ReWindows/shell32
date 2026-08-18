#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CCopyThread {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCopyThread@@QEAA@PEAUIUnknown@@PEBGPEAUIDataObject@@K1@Z
    CCopyThread(IUnknown *, unsigned short const *, IDataObject *, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoAsyncCopy@CCopyThread@@QEAAJXZ
    long DoAsyncCopy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCopy@CCopyThread@@QEAAJXZ
    long DoCopy();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUrlPolicyInformation@CCopyThread@@AEAAXXZ
    void GetUrlPolicyInformation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionFileFromDrop@CCopyThread@@AEAAXPEAUIFolderView2@@PEBG@Z
    void PositionFileFromDrop(IFolderView2*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyThreadProc@CCopyThread@@AEAAJXZ
    long _CopyThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CopyThreadProc@CCopyThread@@CAKPEAX@Z
    static unsigned long s_CopyThreadProc(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCopyThread@@EEAA@XZ
    virtual ~CCopyThread();
};
