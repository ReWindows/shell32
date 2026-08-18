#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 63 member(s).
class CTasksFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTasksFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CTasksFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CTasksFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTasksFolder@@QEAA@XZ
    CTasksFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CTasksFolder@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    virtual long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CTasksFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAppletOrTaskPidl@CTasksFolder@@SAJI_NPEBVCControlPanelItem@@PEBUCONTROLPANELTASK@@1PEAPEAU_ITEMID_CHILD@@@Z
    static long CreateAppletOrTaskPidl(unsigned int, bool, CControlPanelItem const *, CONTROLPANELTASK const *, CControlPanelItem const *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CTasksFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CTasksFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CTasksFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CTasksFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CTasksFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CTasksFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultColumn@CTasksFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CTasksFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CTasksFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CTasksFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CTasksFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CTasksFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailHandler@CTasksFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetThumbnailHandler(_ITEMID_CHILD & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CTasksFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTasksFolder@@QEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTasksFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CTasksFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseDisplayName@CTasksFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTasksFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTasksFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CTasksFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQueryText@CTasksFolder@@UEAAJPEBGPEAUICondition@@@Z
    virtual long SetQueryText(unsigned short const *, ICondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CTasksFolder@@UEAAJPEAUIBindCtx@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z
    virtual long Update(IBindCtx *, _ITEMID_CHILD & volatile *, _ITEMID_CHILD * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ControlPanelItemLaunchedSQM@CTasksFolder@@AEAAXPEFBU_ITEMID_CHILD@@_N@Z
    void _ControlPanelItemLaunchedSQM(_ITEMID_CHILD & volatile *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteApplet@CTasksFolder@@AEAAJPEFBU_ITEMID_CHILD@@PEAUHWND__@@_N@Z
    long _ExecuteApplet(_ITEMID_CHILD & volatile *, HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppPidl@CTasksFolder@@AEAAJAEBU_GUID@@PEAPEAU_ITEMIDLIST_RELATIVE@@@Z
    long _GetAppPidl(_GUID const &, _ITEMIDLIST_RELATIVE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppletIDListFromTaskIDList@CTasksFolder@@AEAAJPEFBU_ITEMID_CHILD@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _GetAppletIDListFromTaskIDList(_ITEMID_CHILD & volatile *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemIcon@CTasksFolder@@AEAAJPEFBU_ITEMID_CHILD@@PEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    long _GetItemIcon(_ITEMID_CHILD & volatile *, HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemInfotip@CTasksFolder@@AEAAJPEFBU_ITEMID_CHILD@@PEAGI@Z
    long _GetItemInfotip(_ITEMID_CHILD & volatile *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTaskAppName@CTasksFolder@@AEAAJPEFBU_ITEMID_CHILD@@PEAUtagVARIANT@@@Z
    long _GetTaskAppName(_ITEMID_CHILD & volatile *, tagVARIANT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTasksFolder@@EEAA@XZ
    virtual ~CTasksFolder();
};
