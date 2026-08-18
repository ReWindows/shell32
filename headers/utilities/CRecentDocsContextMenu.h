#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CRecentDocsContextMenu {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInvokeCommand@CRecentDocsContextMenu@@MEAAJIPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long _OnInvokeCommand(unsigned int, _CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MappingArray@CRecentDocsContextMenu@@MEAAPEBUICIVERBTOIDMAP@@XZ
    virtual ICIVERBTOIDMAP const * get_MappingArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MenuID@CRecentDocsContextMenu@@MEAAIXZ
    virtual unsigned int get_MenuID();
};
