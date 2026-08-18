#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 34 member(s).
class CBaseShellFolderViewCB {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBaseShellFolderViewCB@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBaseShellFolderViewCB@@QEAA@PEFBU_ITEMIDLIST_ABSOLUTE@@J@Z
    CBaseShellFolderViewCB(_ITEMIDLIST_ABSOLUTE & volatile *, long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColumnPropertyList@CBaseShellFolderViewCB@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetColumnPropertyList(_GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFolderFlags@CBaseShellFolderViewCB@@UEAAJPEAW4FOLDERFLAGS@@0@Z
    virtual long GetFolderFlags(int *, int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetGroupByProperty@CBaseShellFolderViewCB@@UEAAJPEAU_tagpropertykey@@PEAH@Z
    virtual long GetGroupByProperty(_tagpropertykey *, int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetGroupSubsetCount@CBaseShellFolderViewCB@@UEAAJPEAI@Z
    virtual long GetGroupSubsetCount(unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIconSize@CBaseShellFolderViewCB@@UEAAJPEAI@Z
    virtual long GetIconSize(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortColumns@CBaseShellFolderViewCB@@UEAAJPEAUSORTCOLUMN@@IPEAI@Z
    virtual long GetSortColumns(SORTCOLUMN *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSupportedLogicalViews@CBaseShellFolderViewCB@@UEAA?AW4SUPPORTS_FOLDER_LOGICAL_VIEW_MODE@@XZ
    virtual int GetSupportedLogicalViews();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetViewMode@CBaseShellFolderViewCB@@UEAAJPEAW4FOLDERLOGICALVIEWMODE@@@Z
    virtual long GetViewMode(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsSupported@CBaseShellFolderViewCB@@UEAAHW4FOLDER_VIEW_CAPABILITY@@@Z
    virtual int IsSupported(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageSFVCB@CBaseShellFolderViewCB@@UEAAJI_K_J@Z
    virtual long MessageSFVCB(unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBaseShellFolderViewCB@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryObject@CBaseShellFolderViewCB@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBaseShellFolderViewCB@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBaseShellFolderViewCB@@MEAA@XZ
    virtual ~CBaseShellFolderViewCB();
};
