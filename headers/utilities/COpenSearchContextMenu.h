#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class COpenSearchContextMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@COpenSearchContextMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInvokeCommand@COpenSearchContextMenu@@MEAAJIPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long _OnInvokeCommand(unsigned int, _CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnQueryContextMenu@COpenSearchContextMenu@@MEAAJPEAUHMENU__@@I@Z
    virtual long _OnQueryContextMenu(HMENU__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MappingArray@COpenSearchContextMenu@@MEAAPEBUICIVERBTOIDMAP@@XZ
    virtual ICIVERBTOIDMAP const * get_MappingArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MenuID@COpenSearchContextMenu@@MEAAIXZ
    virtual unsigned int get_MenuID();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenSearchContextMenu@@MEAA@XZ
    virtual ~COpenSearchContextMenu();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateUrls@COpenSearchContextMenu@@AEAAJPEBG0@Z
    long _ValidateUrls(unsigned short const *, unsigned short const *);
};
