#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 58 member(s).
class CDrivesViewCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDrivesViewCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrivesViewCallback@@QEAA@PEAUIDriveFolderViewCallbackProvider@@@Z
    CDrivesViewCallback(IDriveFolderViewCallbackProvider *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEnumFlags@CDrivesViewCallback@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAUHWND__@@PEAK@Z
    virtual long GetEnumFlags(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, HWND__* *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFlags@CDrivesViewCallback@@UEAAJPEAW4FOLDERFLAGS@@0@Z
    virtual long GetFolderFlags(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupByProperty@CDrivesViewCallback@@UEAAJPEAU_tagpropertykey@@PEAH@Z
    virtual long GetGroupByProperty(_tagpropertykey *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDrivesViewCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CDrivesViewCallback@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDrivesViewCallback@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShow@CDrivesViewCallback@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@@Z
    virtual long ShouldShow(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanAutoplay@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanAutoplay(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanBurnDisc@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanBurnDisc(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanClearStagingArea@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanClearStagingArea(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanCloseUDFSession@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanCloseUDFSession(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanDriveProperties@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanDriveProperties(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanEject@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanEject(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanEraseDisc@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanEraseDisc(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanMapDrive@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanMapDrive(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanOpenSystemSettings@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanOpenSystemSettings(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAddRemovePrograms@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnAddRemovePrograms(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAddRemoveProgramsPunkSite@CDrivesViewCallback@@SAJPEAUIUnknown@@0PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnAddRemoveProgramsPunkSite(IUnknown *, IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAutoplay@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnAutoplay(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBurnDisc@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnBurnDisc(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClearStagingArea@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnClearStagingArea(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCloseUDFSession@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnCloseUDFSession(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDriveProperties@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnDriveProperties(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEject@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnEject(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEraseDisc@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnEraseDisc(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMapDrive@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnMapDrive(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMapDrivePunkSite@CDrivesViewCallback@@SAJPEAUIUnknown@@0PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnMapDrivePunkSite(IUnknown *, IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOpenSystemSettings@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnOpenSystemSettings(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOpenSystemSettingsPunkSite@CDrivesViewCallback@@SAJPEAUIUnknown@@0PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnOpenSystemSettingsPunkSite(IUnknown *, IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSystemProperties@CDrivesViewCallback@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnSystemProperties(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSystemPropertiesPunkSite@CDrivesViewCallback@@SAJPEAUIUnknown@@0PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnSystemPropertiesPunkSite(IUnknown *, IUnknown *, IShellItemArray *, IBindCtx *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckBurnTasks@CDrivesViewCallback@@CAJPEAUIShellItemArray@@W4TASKCHECKENUM@1@PEAH@Z
    static long _CheckBurnTasks(IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckMountPointTasks@CDrivesViewCallback@@CAJPEAUIShellItemArray@@W4TASKCHECKENUM@1@PEAH@Z
    static long _CheckMountPointTasks(IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDriveNumber@CDrivesViewCallback@@CAJPEAUIShellItemArray@@PEAH@Z
    static long _GetDriveNumber(IShellItemArray *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrivesViewCallback@@EEAA@XZ
    virtual ~CDrivesViewCallback();
};
