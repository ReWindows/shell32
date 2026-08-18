#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CPinList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    int AppendPidl(CPinnedList *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAH@Z
    PINENTRY * FindPidl(_ITEMIDLIST_ABSOLUTE const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEBU_ITEMIDLIST_ABSOLUTE@@_NPEAH@Z
    PINENTRY * FindPidlOrAppID(_ITEMIDLIST_ABSOLUTE const *, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z
    PINENTRY * FindPinEntryFromAppId(unsigned short const *, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z
    long Load(CPinnedList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAPEAUIShellLinkW@@@Z
    long LoadShellLink(PINENTRY *, IShellLinkW * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEBU_ITEMIDLIST_ABSOLUTE@@1W4PinnedListModifyFlags@@PEAPEAU3@@Z
    long ReplacePidl(CPinnedList *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z
    long Save(CPinnedList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAUIStream@@@Z
    long SaveShellLink(PINENTRY *, IStream *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPinList@@QEAA@XZ
    ~CPinList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ILWriteCallback@CPinList@@CAHPEAVPINENTRY@@PEAUILWRITEINFO@1@@Z
    static int ILWriteCallback(PINENTRY *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z
    long _CreateTombstone(CPinnedList *, unsigned short const *, PINENTRY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAG@Z
    void _GetBackupShortcutToDelete(CPinnedList *, _ITEMIDLIST_ABSOLUTE const *, unsigned short *);
};
