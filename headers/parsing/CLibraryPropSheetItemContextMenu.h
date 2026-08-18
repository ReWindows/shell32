#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class CLibraryPropSheetItemContextMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLibraryPropSheetItemContextMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenu@CLibraryPropSheetItemContextMenu@@UEAAJPEAUIContextMenu@@PEAPEAU2@@Z
    virtual long GetContextMenu(IContextMenu *, IContextMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLibraryPropSheetItemContextMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLibraryPropSheetItemContextMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLibraryPropSheetItemContextMenu@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInvokeCommand@CLibraryPropSheetItemContextMenu@@MEAAJIPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long _OnInvokeCommand(unsigned int, _CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnQueryContextMenu@CLibraryPropSheetItemContextMenu@@MEAAJPEAUHMENU__@@I@Z
    virtual long _OnQueryContextMenu(HMENU__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MappingArray@CLibraryPropSheetItemContextMenu@@MEAAPEBUICIVERBTOIDMAP@@XZ
    virtual ICIVERBTOIDMAP const * get_MappingArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MenuID@CLibraryPropSheetItemContextMenu@@MEAAIXZ
    virtual unsigned int get_MenuID();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLibraryPropSheetItemContextMenu@@MEAA@XZ
    virtual ~CLibraryPropSheetItemContextMenu();
};
