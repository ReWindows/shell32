#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 96 member(s).
class CControlPanelFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CControlPanelFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CControlPanelFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CControlPanelFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelFolder@@QEAA@PEAUIUnknown@@W4tagCPCAT@@@Z
    CControlPanelFolder(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CControlPanelFolder@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    virtual long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CControlPanelFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CControlPanelFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CControlPanelFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CControlPanelFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CControlPanelFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CControlPanelFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CControlPanelFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomAttributes@CControlPanelFolder@@UEAAJPEBU_ITEMID_CHILD@@KPEAUtagControlPanelCategoryInfo@@PEAK@Z
    virtual long GetCustomAttributes(_ITEMID_CHILD const *, unsigned long, tagControlPanelCategoryInfo *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultColumn@CControlPanelFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CControlPanelFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CControlPanelFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CControlPanelFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CControlPanelFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CControlPanelFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CControlPanelFolder@@UEAAJPEAW4SEARCHBOX_FLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderType@CControlPanelFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetFolderType(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMRULocation@CControlPanelFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetMRULocation(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneState@CControlPanelFolder@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetPaneState(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealLocations@CControlPanelFolder@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetRealLocations(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestPopupSetting@CControlPanelFolder@@UEAAJPEAW4SEARCH_BOX_SUGGEST_POPUP_SETTING@@@Z
    virtual long GetSuggestPopupSetting(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimerDelay@CControlPanelFolder@@UEAAJPEAI@Z
    virtual long GetTimerDelay(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CControlPanelFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CControlPanelFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CControlPanelFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@CControlPanelFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CControlPanelFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CControlPanelFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CControlPanelFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CControlPanelFolder@@UEAAJPEAUIBindCtx@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z
    virtual long Update(IBindCtx *, _ITEMID_CHILD & volatile *, _ITEMID_CHILD * *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@CControlPanelFolder@@KAJPEFBU_IDCONTROL@@PEAGI@Z
    static long GetDisplayName(_IDCONTROL & volatile *, unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExecName@CControlPanelFolder@@KAJPEFBU_IDCONTROL@@_NPEAGI@Z
    static long GetExecName(_IDCONTROL & volatile *, bool, unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModule@CControlPanelFolder@@KAJPEFBU_IDCONTROL@@PEAGI@Z
    static long GetModule(_IDCONTROL & volatile *, unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModuleMapped@CControlPanelFolder@@KAJPEFBU_IDCONTROL@@_NPEAGIPEAI2I@Z
    static long GetModuleMapped(_IDCONTROL & volatile *, bool, unsigned short *, unsigned int, unsigned int *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InternalQueryInterface@CControlPanelFolder@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_InternalQueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelFolder@@MEAA@XZ
    virtual ~CControlPanelFolder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheExtPropRegValName@CControlPanelFolder@@AEAAKHPEBG0_N1@Z
    unsigned long _CacheExtPropRegValName(int, unsigned short const *, unsigned short const *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheIndexFromPropkey@CControlPanelFolder@@CAHAEBU_tagpropertykey@@@Z
    static int _CacheIndexFromPropkey(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyExtPropsRegValEntry@CControlPanelFolder@@CAHPEAX0@Z
    static int _DestroyExtPropsRegValEntry(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumAndCacheExtPropRegValues@CControlPanelFolder@@AEAAJPEAUHKEY__@@0H_N1@Z
    long _EnumAndCacheExtPropRegValues(HKEY__*, HKEY__*, int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindMatchingAppletId@CControlPanelFolder@@AEAA_NPEAUHKEY__@@PEBGPEAGI@Z
    bool _FindMatchingAppletId(HKEY__*, unsigned short const *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppletPathForTemporaryAppId@CControlPanelFolder@@AEAAJPEBGPEAGI@Z
    long _GetAppletPathForTemporaryAppId(unsigned short const *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDescription@CControlPanelFolder@@CAJPEFBU_IDCONTROL@@PEAGI@Z
    static long _GetDescription(_IDCONTROL & volatile *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExtPropRegKey@CControlPanelFolder@@CAJPEAUHKEY__@@AEBU_tagpropertykey@@_NPEAPEAU2@3@Z
    static long _GetExtPropRegKey(HKEY__*, _tagpropertykey const &, bool, HKEY__* *, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExtPropVariantFromCachedName@CControlPanelFolder@@AEAAJHAEBU_tagpropertykey@@PEAGHPEAUtagVARIANT@@@Z
    long _GetExtPropVariantFromCachedName(int, _tagpropertykey const &, unsigned short *, int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFullCPLName@CControlPanelFolder@@CAJPEFBU_IDCONTROL@@_NPEAGI@Z
    static long _GetFullCPLName(_IDCONTROL & volatile *, bool, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPidlFromAppletId@CControlPanelFolder@@AEAAJPEBGPEAPEAU_ITEMID_CHILD@@@Z
    long _GetPidlFromAppletId(unsigned short const *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTemporaryAppIdForApplet@CControlPanelFolder@@AEAAJPEFBU_IDCONTROL@@PEAGI@Z
    long _GetTemporaryAppIdForApplet(_IDCONTROL & volatile *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitExtPropRegValNameCache@CControlPanelFolder@@AEAAJHAEBU_tagpropertykey@@_N@Z
    long _InitExtPropRegValNameCache(int, _tagpropertykey const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsBitLockerOrDeviceEncryptionSupported@CControlPanelFolder@@CA_NXZ
    static bool _IsBitLockerOrDeviceEncryptionSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDigitizerAttached@CControlPanelFolder@@CA_NXZ
    static bool _IsDigitizerAttached();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsIrDASupported@CControlPanelFolder@@CA_NXZ
    static bool _IsIrDASupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRegisteredCPLApplet@CControlPanelFolder@@AEAA_NPEBG@Z
    bool _IsRegisteredCPLApplet(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsUnicodeCPLWorker@CControlPanelFolder@@CAPEFBU_IDCONTROLW@@PEFBU_IDCONTROL@@@Z
    static _IDCONTROLW & volatile * _IsUnicodeCPLWorker(_IDCONTROL & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsValid@CControlPanelFolder@@CAPEFAU_IDCONTROL@@PEFBU_ITEMIDLIST_RELATIVE@@@Z
    static _IDCONTROL & const * _IsValid(_ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsWowCPL@CControlPanelFolder@@CA_NPEFBU_IDCONTROL@@@Z
    static bool _IsWowCPL(_IDCONTROL & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LookupExtPropRegValName@CControlPanelFolder@@AEAA_NHPEAGH0IPEA_N1@Z
    bool _LookupExtPropRegValName(int, unsigned short *, int, unsigned short *, unsigned int, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NormalizeCplSpec@CControlPanelFolder@@AEAAKPEAG0I@Z
    unsigned long _NormalizeCplSpec(unsigned short *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NormalizePath@CControlPanelFolder@@AEAAKPEBGPEAGI@Z
    unsigned long _NormalizePath(unsigned short const *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropertyFromPidl@CControlPanelFolder@@AEAAJPEFBU_IDCONTROL@@AEBU_tagpropertykey@@_NPEAUtagVARIANT@@@Z
    long _PropertyFromPidl(_IDCONTROL & volatile *, _tagpropertykey const &, bool, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TrimSpaces@CControlPanelFolder@@AEAAXPEAG@Z
    void _TrimSpaces(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DSAFindAppId@CControlPanelFolder@@CAHPEBUPATHTOAPPID@1@0_J@Z
    static int s_DSAFindAppId(WindissectOpaque const *, WindissectOpaque const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DSAFindAppletPath@CControlPanelFolder@@CAHPEBUPATHTOAPPID@1@0_J@Z
    static int s_DSAFindAppletPath(WindissectOpaque const *, WindissectOpaque const *, int64_t);
};
