#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 135 member(s).
class CMergedFolder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNameSpace@CMergedFolder@@UEAAJPEBU_GUID@@PEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@KI@Z
    virtual long AddNameSpace(_GUID const *, IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, unsigned long, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMergedFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CMergedFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CMergedFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMergedFolder@@QEAA@PEAV0@AEBU_GUID@@K@Z
    CMergedFolder(CMergedFolder *, _GUID const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CMergedFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CMergedFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumNameSpace@CMergedFolder@@UEAAJKPEAK@Z
    virtual long EnumNameSpace(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CMergedFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CMergedFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CMergedFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CMergedFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CMergedFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultColumn@CMergedFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CMergedFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CMergedFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CMergedFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CMergedFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CMergedFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlagsForChild@CMergedFolder@@UEAAJPEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAK@Z
    virtual long GetFlagsForChild(_ITEMID_CHILD & volatile *, _GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderType@CMergedFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetFolderType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameSpaceGroupID@CMergedFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAI@Z
    virtual long GetNameSpaceGroupID(_ITEMID_CHILD & volatile *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameSpaceID@CMergedFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAU_GUID@@@Z
    virtual long GetNameSpaceID(_ITEMID_CHILD & volatile *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealLocations@CMergedFolder@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetRealLocations(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceDisplayName@CMergedFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAGIPEAH@Z
    virtual long GetResourceDisplayName(_ITEMID_CHILD & volatile *, unsigned short *, unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceDisplayNameAlloc@CMergedFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAPEAGPEAH@Z
    virtual long GetResourceDisplayNameAlloc(_ITEMID_CHILD & volatile *, unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CMergedFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMergedFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChildID@CMergedFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    virtual long IsChildID(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqualID@CMergedFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual long IsEqualID(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CMergedFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@CMergedFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMergedFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryNameSpace@CMergedFolder@@UEAAJKPEAU_GUID@@PEAPEAUIShellFolder@@@Z
    virtual long QueryNameSpace(unsigned long, _GUID *, IShellFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryNameSpace2@CMergedFolder@@UEAAJKPEAUQUERYNAMESPACEINFO@@@Z
    virtual long QueryNameSpace2(unsigned long, QUERYNAMESPACEINFO *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMergedFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveBackReferences@CMergedFolder@@UEAAJXZ
    virtual long RemoveBackReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLocalizedDisplayName@CMergedFolder@@UEAAJPEFBU_ITEMID_CHILD@@@Z
    virtual long RemoveLocalizedDisplayName(_ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocalizedDisplayName@CMergedFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBG@Z
    virtual long SetLocalizedDisplayName(_ITEMID_CHILD & volatile *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CMergedFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CMergedFolder@@UEAAJPEAUIUnknown@@@Z
    virtual long SetOwner(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResourceDisplayName@CMergedFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBGH@Z
    virtual long SetResourceDisplayName(_ITEMID_CHILD & volatile *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateIDs@CMergedFolder@@UEAAJPEAJPEBU_ITEMIDLIST_ABSOLUTE@@1PEAPEAU2@2022@Z
    virtual long TranslateIDs(long *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE * *, _ITEMIDLIST_ABSOLUTE * *, long *, _ITEMIDLIST_ABSOLUTE * *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnWrapIDList@CMergedFolder@@UEAAJPEFBU_ITEMID_CHILD@@JPEAPEAUIShellFolder@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@PEAPEAU2@PEAJ@Z
    virtual long UnWrapIDList(_ITEMID_CHILD & volatile *, long, IShellFolder * *, _ITEMIDLIST_ABSOLUTE * *, _ITEMID_CHILD * *, long *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAllOtherNameSpacesIfNeeded@CMergedFolder@@IEAAXPEAPEAU_ITEMID_CHILD@@@Z
    void _AddAllOtherNameSpacesIfNeeded(_ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareArbitraryPidls@CMergedFolder@@KAHPEFBU_ITEMID_CHILD@@0@Z
    static int _CompareArbitraryPidls(_ITEMID_CHILD & volatile *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareSingleLevelIDs@CMergedFolder@@IEAAJ_JPEFBU_ITEMID_CHILD@@1@Z
    long _CompareSingleLevelIDs(int64_t, _ITEMID_CHILD & volatile *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ContainsSrcID@CMergedFolder@@IEAAHPEFBU_ITEMID_CHILD@@I@Z
    int _ContainsSrcID(_ITEMID_CHILD & volatile *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Create@CMergedFolder@@MEAAJPEAPEAV1@@Z
    virtual long _Create(CMergedFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFolderBindCtx@CMergedFolder@@IEAAXPEAUIBindCtx@@PEAPEAU2@@Z
    void _CreateFolderBindCtx(IBindCtx *, IBindCtx * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateWrap@CMergedFolder@@IEAAJPEFBU_ITEMID_CHILD@@IGPEAPEAU2@@Z
    long _CreateWrap(_ITEMID_CHILD & volatile *, unsigned int, unsigned short, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyNamespacesProc@CMergedFolder@@KAHPEAX0@Z
    static int _DestroyNamespacesProc(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindNamespace@CMergedFolder@@IEAAJKKIPEAPEAVCMergedFldrNamespace@@@Z
    long _FindNamespace(unsigned long, unsigned long, unsigned int, CMergedFldrNamespace * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixStrRetOffset@CMergedFolder@@IEAAJPEFBU_ITEMID_CHILD@@PEAU_STRRET@@@Z
    long _FixStrRetOffset(_ITEMID_CHILD & volatile *, _STRRET *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDestinationStorage@CMergedFolder@@IEAAJKPEAPEAUIStorage@@@Z
    long _GetDestinationStorage(unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolder2@CMergedFolder@@IEAAJPEFBU_ITEMID_CHILD@@PEAPEAU2@PEAPEAUIShellFolder2@@@Z
    long _GetFolder2(_ITEMID_CHILD & volatile *, _ITEMID_CHILD * *, IShellFolder2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSourceCount@CMergedFolder@@KAKPEFBU_ITEMID_CHILD@@@Z
    static unsigned long _GetSourceCount(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSubPidl@CMergedFolder@@IEAAJPEFBU_ITEMID_CHILD@@IPEAIPEAGPEAPEAU2@PEAPEAVCMergedFldrNamespace@@@Z
    long _GetSubPidl(_ITEMID_CHILD & volatile *, unsigned int, unsigned int *, unsigned short *, _ITEMID_CHILD * *, CMergedFldrNamespace * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSubPidlForNamespace@CMergedFolder@@IEAAJPEFBU_ITEMID_CHILD@@IPEAPEAU2@@Z
    long _GetSubPidlForNamespace(_ITEMID_CHILD & volatile *, unsigned int, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWhichFolderColumn@CMergedFolder@@IEAAJPEFBU_ITEMID_CHILD@@PEAGH@Z
    long _GetWhichFolderColumn(_ITEMID_CHILD & volatile *, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWrappedPidlAtOffset@CMergedFolder@@KAJPEFBU_ITEMID_CHILD@@IPEAPEFBUWRAPPED_IDLIST@@@Z
    static long _GetWrappedPidlAtOffset(_ITEMID_CHILD & volatile *, unsigned int, WRAPPED_IDLIST & volatile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFolder@CMergedFolder@@IEAAHPEFBU_ITEMID_CHILD@@@Z
    int _IsFolder(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsOurColumn@CMergedFolder@@IEAAHI@Z
    int _IsOurColumn(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSimple@CMergedFolder@@IEAAHPEFBU_ITEMIDLIST_RELATIVE@@@Z
    int _IsSimple(_ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsWrap@CMergedFolder@@KAJPEFBU_ITEMID_CHILD@@@Z
    static long _IsWrap(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Namespace@CMergedFolder@@IEAAJHPEAPEAVCMergedFldrNamespace@@@Z
    long _Namespace(int, CMergedFldrNamespace * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Namespace@CMergedFolder@@IEAAPEAVCMergedFldrNamespace@@H@Z
    CMergedFldrNamespace * _Namespace(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NamespaceCount@CMergedFolder@@IEBAHXZ
    int _NamespaceCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NamespaceForItem@CMergedFolder@@IEAAJPEFBU_ITEMID_CHILD@@KKPEAPEAUIShellFolder@@PEAPEAU2@PEAPEAVCMergedFldrNamespace@@H@Z
    long _NamespaceForItem(_ITEMID_CHILD & volatile *, unsigned long, unsigned long, IShellFolder * *, _ITEMID_CHILD * *, CMergedFldrNamespace * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSimple@CMergedFolder@@IEAAXPEAPEAU_ITEMIDLIST_RELATIVE@@@Z
    void _SetSimple(_ITEMIDLIST_RELATIVE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldMergeNamespaces@CMergedFolder@@IEAAHPEBVCMergedFldrNamespace@@0@Z
    int _ShouldMergeNamespaces(CMergedFldrNamespace const *, CMergedFldrNamespace const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryParseNameWithNamespace@CMergedFolder@@MEAAJPEBVCMergedFldrNamespace@@PEAUHWND__@@PEAUIBindCtx@@PEBGPEAPEAU_ITEMID_CHILD@@@Z
    virtual long _TryParseNameWithNamespace(CMergedFldrNamespace const *, HWND__*, IBindCtx *, unsigned short const *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WrapAddIDList@CMergedFolder@@IEAAJPEFBU_ITEMID_CHILD@@IGPEAPEAU2@@Z
    long _WrapAddIDList(_ITEMID_CHILD & volatile *, unsigned int, unsigned short, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WrapRemoveIDList@CMergedFolder@@IEAAJPEFBU_ITEMID_CHILD@@IPEAPEAU2@@Z
    long _WrapRemoveIDList(_ITEMID_CHILD & volatile *, unsigned int, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WrapRemoveIDListAbs@CMergedFolder@@IEAAJPEBU_ITEMIDLIST_ABSOLUTE@@IPEAPEAU2@@Z
    long _WrapRemoveIDListAbs(_ITEMIDLIST_ABSOLUTE const *, unsigned int, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMergedFolder@@MEAA@XZ
    virtual ~CMergedFolder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AbsPidlToAbsWrap@CMergedFolder@@AEAAJPEAVCMergedFldrNamespace@@PEBU_ITEMIDLIST_ABSOLUTE@@HHPEAHPEAPEAU3@@Z
    long _AbsPidlToAbsWrap(CMergedFldrNamespace *, _ITEMIDLIST_ABSOLUTE const *, int, int, int *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AcquireObjects@CMergedFolder@@AEAAHXZ
    int _AcquireObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAllOtherNamespaces@CMergedFolder@@AEAAXPEAPEAU_ITEMID_CHILD@@@Z
    void _AddAllOtherNamespaces(_ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Compare@CMergedFolder@@CAHPEBX0_J@Z
    static int _Compare(void const *, void const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteItemByIDList@CMergedFolder@@EEAAJPEFBU_ITEMID_CHILD@@@Z
    virtual long _DeleteItemByIDList(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyObjectsProc@CMergedFolder@@CAHPEAX0@Z
    static int _DestroyObjectsProc(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ForceParseDisplayName@CMergedFolder@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGHHPEAHPEAPEAU_ITEMID_CHILD@@@Z
    long _ForceParseDisplayName(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, int, int, int *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeObjects@CMergedFolder@@AEAAXXZ
    void _FreeObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenu@CMergedFolder@@AEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    long _GetContextMenu(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPidl@CMergedFolder@@AEAAJPEAHKPEAPEAU_ITEMID_CHILD@@@Z
    long _GetPidl(int *, unsigned long, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTargetUIObjectOf@CMergedFolder@@AEAAJPEAUIShellFolder@@PEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    long _GetTargetUIObjectOf(IShellFolder *, HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsChildIDInternal@CMergedFolder@@AEAAHPEBU_ITEMIDLIST_ABSOLUTE@@HPEAH@Z
    int _IsChildIDInternal(_ITEMIDLIST_ABSOLUTE const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Merge@CMergedFolder@@CAPEBXIPEBX0_J@Z
    static void const * _Merge(unsigned int, void const *, void const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_New@CMergedFolder@@AEAAJPEFBU_ITEMID_CHILD@@PEAPEAV1@@Z
    long _New(_ITEMID_CHILD & volatile *, CMergedFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ObjectCount@CMergedFolder@@AEBAHXZ
    int _ObjectCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetOwnerProc@CMergedFolder@@CAHPEAX0@Z
    static int _SetOwnerProc(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldMergeNamespaces@CMergedFolder@@AEAAHHH@Z
    int _ShouldMergeNamespaces(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SimpleAddNamespace@CMergedFolder@@AEAAJPEAVCMergedFldrNamespace@@@Z
    long _SimpleAddNamespace(CMergedFldrNamespace *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StgCreate@CMergedFolder@@EEAAJPEFBU_ITEMID_CHILD@@KAEBU_GUID@@PEAPEAX@Z
    virtual long _StgCreate(_ITEMID_CHILD & volatile *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TransformSingleNotify@CMergedFolder@@AEAAJPEAVCMergedFldrNamespace@@HHHPEBU_ITEMIDLIST_ABSOLUTE@@PEAJPEAPEAU3@3@Z
    long _TransformSingleNotify(CMergedFldrNamespace *, int, int, int, _ITEMIDLIST_ABSOLUTE const *, long *, _ITEMIDLIST_ABSOLUTE * *, _ITEMIDLIST_ABSOLUTE * *);
};
