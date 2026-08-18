#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CBackupLocationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long CreateBackupLnk(unsigned short const *, IShellLinkW *, _ITEMIDLIST_ABSOLUTE * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU2@@Z
    long CreateBackupLnk(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU2@@Z
    long CreateTombstoneLnk(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackupPath@CBackupLocationManager@@QEBAJPEAPEAG@Z
    long GetBackupPath(unsigned short * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z
    long GetTombstonePath(unsigned short * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBackupLink@CBackupLocationManager@@QEBAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long IsBackupLink(_ITEMIDLIST_ABSOLUTE const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTombstoneLink@CBackupLocationManager@@QEBAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long IsTombstoneLink(_ITEMIDLIST_ABSOLUTE const *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _CreateKnownFolderPidl(unsigned short const *, _ITEMIDLIST_ABSOLUTE * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNewShortcut@CBackupLocationManager@@AEBAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGK11PEAPEAU2@@Z
    long _CreateNewShortcut(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, unsigned long, unsigned short const *, unsigned short const *, _ITEMIDLIST_ABSOLUTE * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _DuplicateShortcut(unsigned short const *, unsigned short const *, _ITEMIDLIST_ABSOLUTE * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z
    long _GetTombstoneShortcutLocation(unsigned short *, unsigned short *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _PersistLnk(IShellLinkW *, unsigned short const *, _ITEMIDLIST_ABSOLUTE * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z
    static long s_CopyLocalizedName(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z
    static long s_ShouldCreateNewFile(unsigned short *, unsigned int);
};
