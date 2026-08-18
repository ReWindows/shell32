#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CLibraryFolderContextMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLibraryFolderContextMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInvokeCommand@CLibraryFolderContextMenu@@MEAAJIPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long _OnInvokeCommand(unsigned int, _CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnQueryContextMenu@CLibraryFolderContextMenu@@MEAAJPEAUHMENU__@@I@Z
    virtual long _OnQueryContextMenu(HMENU__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MappingArray@CLibraryFolderContextMenu@@MEAAPEBUICIVERBTOIDMAP@@XZ
    virtual ICIVERBTOIDMAP const * get_MappingArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MenuID@CLibraryFolderContextMenu@@MEAAIXZ
    virtual unsigned int get_MenuID();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLibraryFolderContextMenu@@MEAA@XZ
    virtual ~CLibraryFolderContextMenu();
};
