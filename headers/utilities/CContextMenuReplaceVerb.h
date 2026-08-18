#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CContextMenuReplaceVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CContextMenuReplaceVerb@@QEAAJPEBUREPLACEVERB@@H@Z
    long Init(REPLACEVERB const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CContextMenuReplaceVerb@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CContextMenuReplaceVerb@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueryNthContextMenu@CContextMenuReplaceVerb@@MEAAJIPEAUHMENU__@@IIII@Z
    virtual long _QueryNthContextMenu(unsigned int, HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContextMenuReplaceVerb@@MEAA@XZ
    virtual ~CContextMenuReplaceVerb();
};
