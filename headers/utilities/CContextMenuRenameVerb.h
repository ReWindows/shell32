#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CContextMenuRenameVerb {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CContextMenuRenameVerb@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CContextMenuRenameVerb@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CContextMenuRenameVerb@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContextMenuRenameVerb@@MEAA@XZ
    virtual ~CContextMenuRenameVerb();
};
