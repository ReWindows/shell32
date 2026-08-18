#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CLocationContextMenu {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CLocationContextMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInvokeCommand@CLocationContextMenu@@MEAAJIPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long _OnInvokeCommand(unsigned int, _CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnQueryContextMenu@CLocationContextMenu@@MEAAJPEAUHMENU__@@I@Z
    virtual long _OnQueryContextMenu(HMENU__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MappingArray@CLocationContextMenu@@MEAAPEBUICIVERBTOIDMAP@@XZ
    virtual ICIVERBTOIDMAP const * get_MappingArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MenuID@CLocationContextMenu@@MEAAIXZ
    virtual unsigned int get_MenuID();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLocationContextMenu@@MEAA@XZ
    virtual ~CLocationContextMenu();
};
