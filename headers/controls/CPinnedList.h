#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 67 member(s).
class CPinnedList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ
    virtual long ApplyAppendDefaultTaskbarLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z
    virtual long ApplyInPlaceTaskbarLayout(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ
    virtual long ApplyPrependDefaultTaskbarLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z
    virtual long ApplyReorderTaskbarLayout(int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPinnedList@@QEAA@XZ
    CPinnedList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z
    long EnumAllObjects(IEnumFullIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z
    virtual long EnumObjects(IEnumFullIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CPinnedList@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumTombstones@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z
    virtual long EnumTombstones(IEnumFullIDList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppIDForPinnedItem@CPinnedList@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAG@Z
    virtual long GetAppIDForPinnedItem(_ITEMIDLIST_ABSOLUTE const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CPinnedList@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChangeCount@CPinnedList@@UEAAJPEAK@Z
    virtual long GetChangeCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CPinnedList@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CPinnedList@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIcon@CPinnedList@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinnableInfo@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAGPEAH@Z
    virtual long GetPinnableInfo(IDataObject *, int, IShellItem * *, IShellItem * *, unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinnedItem@CPinnedList@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU2@@Z
    virtual long GetPinnedItem(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetPinnedItemForAppID(unsigned short const *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CPinnedList@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTitle@CPinnedList@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetToolTip@CPinnedList@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPinnedList@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CPinnedList@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CPinnedList@@UEAAJPEAH@Z
    virtual long IsEmpty(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinnable@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@@Z
    virtual long IsPinnable(IDataObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@CPinnedList@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long IsPinned(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemChangeNotify@CPinnedList@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual long ItemChangeNotify(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PE Export
    // Symbol: ?LegacyModify@CPinnedList@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual long LegacyModify(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkAsTombstone@CPinnedList@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@W4PINNEDLISTMODIFYCALLER@@@Z
    virtual long MarkAsTombstone(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Modify@CPinnedList@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@0W4PINNEDLISTMODIFYCALLER@@@Z
    virtual long Modify(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z
    virtual long PinShellLink(unsigned short const *, IShellLinkW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CPinnedList@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU3@@Z
    virtual long Resolve(HWND__*, unsigned long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ
    virtual long UpdateForRemovedItemsAsNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEntries@CPinnedList@@SAPEBU_ATL_INTMAP_ENTRY@ATL@@XZ
    static WindissectOpaque const * _GetEntries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetBackupSubDirectoryName@CPinnedList@@UEAAJPEAGI@Z
    virtual long v_GetBackupSubDirectoryName(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCurrentVersion@CPinnedList@@UEAAKXZ
    virtual unsigned long v_GetCurrentVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UpgradeItem@CPinnedList@@UEAAJKPEAU_ITEMIDLIST_ABSOLUTE@@PEAPEAU2@@Z
    virtual long v_UpgradeItem(unsigned long, _ITEMIDLIST_ABSOLUTE *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPinnedList@@UEAA@XZ
    virtual ~CPinnedList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalModify@CPinnedList@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z
    long InternalModify(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    void _DoNotifyPinListChange(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPinnableInfoImpl@CPinnedList@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@3PEAPEAGPEAH@Z
    long _GetPinnableInfoImpl(_ITEMIDLIST_ABSOLUTE const *, IShellLinkW *, int, IShellItem * *, IShellItem * *, unsigned short * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ
    unsigned long _GetRemovedGlobalChangeCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IncrementRemovedGlobalChangeCount@CPinnedList@@IEAAJXZ
    long _IncrementRemovedGlobalChangeCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z
    int _IsLocalHardDisk(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResolveTargetLink@CPinnedList@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAH@Z
    long _ResolveTargetLink(_ITEMIDLIST_ABSOLUTE const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAddMenu@CPinnedList@@IEAAJI@Z
    long _ShouldAddMenu(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z
    long _TogglePinned(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z
    static int s_GetDarwinLinkInfo(IShellLinkW *, int *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z
    static long s_RemoveDarwinShortcut(IPinnedList3*, unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_AllowVerb@CPinnedList@@MEAAHI@Z
    virtual int v_AllowVerb(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z
    virtual int v_IsAcceptableTarget(_ITEMIDLIST_ABSOLUTE const *, IShellLinkW *, int, IShellItem * *, unsigned short * *, unsigned short * *, IShellItem * *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_TrackUnpinnedApp@CPinnedList@@MEAAJPEBG@Z
    virtual long v_TrackUnpinnedApp(unsigned short const *);
};
