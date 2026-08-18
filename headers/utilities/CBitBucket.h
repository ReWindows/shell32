#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 84 member(s).
class CBitBucket {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPages@CBitBucket@@UEAAJP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPages(int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitBucket@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CBitBucket@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CBitBucket@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CBitBucket@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    virtual long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CBitBucket@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CBitBucket@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CBitBucket@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CBitBucket@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CBitBucket@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CBitBucket@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CBitBucket@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultColumn@CBitBucket@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CBitBucket@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CBitBucket@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CBitBucket@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CBitBucket@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CBitBucket@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderType@CBitBucket@@UEAAJPEAU_GUID@@@Z
    virtual long GetFolderType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIconIndex@CBitBucket@@UEAAJPEFBU_ITEMID_CHILD@@PEAH@Z
    virtual long GetOverlayIconIndex(_ITEMID_CHILD & volatile *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIndex@CBitBucket@@UEAAJPEFBU_ITEMID_CHILD@@PEAH@Z
    virtual long GetOverlayIndex(_ITEMID_CHILD & volatile *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneState@CBitBucket@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetPaneState(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CBitBucket@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBitBucket@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CBitBucket@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CBitBucket@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@CBitBucket@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitBucket@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitBucket@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBackReferences@CBitBucket@@UEAAJXZ
    virtual long RemoveBackReferences();
    // Category: Method | Source: PE Export
    // Symbol: ?ReplacePage@CBitBucket@@UEAAJIP6AHPEAU_PSP@@_J@Z1@Z
    virtual long ReplacePage(unsigned int, int ( *)(_PSP *, int64_t), int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CBitBucket@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDestSpecs@CBitBucket@@IEAAPEAXPEAU_IDA@@@Z
    void * BuildDestSpecs(_IDA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataEntryToIDList@CBitBucket@@IEAAPEAU_ITEMID_CHILD@@PEBUtagDELETEDITEM@@@Z
    _ITEMID_CHILD * DataEntryToIDList(tagDELETEDITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PathToIDList@CBitBucket@@IEAAPEAU_ITEMID_CHILD@@PEBG@Z
    _ITEMID_CHILD * PathToIDList(unsigned short const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitBucket@@AEAA@XZ
    CBitBucket();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AttributesFromIDList@CBitBucket@@AEAAJPEFBU_ITEMID_CHILD@@PEAK@Z
    long _AttributesFromIDList(_ITEMID_CHILD & volatile *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BackgroundMenuCallBack@CBitBucket@@CAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    static long _BackgroundMenuCallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Compare@CBitBucket@@AEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    long _Compare(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DataObjToRecycleItems@CBitBucket@@AEAAJPEAUIDataObject@@PEAPEAGPEAI@Z
    long _DataObjToRecycleItems(IDataObject *, unsigned short * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DispatchThreadProc@CBitBucket@@CAKPEAX@Z
    static unsigned long _DispatchThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DropThreadInit@CBitBucket@@CAKPEAUBBTHREADDATA@@@Z
    static unsigned long _DropThreadInit(BBTHREADDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FilePropDlgProc@CBitBucket@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t _FilePropDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FileProperties@CBitBucket@@AEAAXPEAUIDataObject@@@Z
    void _FileProperties(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FolderFromIDList@CBitBucket@@AEAAJPEFBU_ITEMIDLIST_RELATIVE@@AEBU_GUID@@PEAPEAX@Z
    long _FolderFromIDList(_ITEMIDLIST_RELATIVE & volatile *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FolderFromPath@CBitBucket@@AEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    long _FolderFromPath(unsigned short const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDeletedFileTime@CBitBucket@@AEAAXPEFBU_ITEMIDLIST_RELATIVE@@PEAU_FILETIME@@@Z
    void _GetDeletedFileTime(_ITEMIDLIST_RELATIVE & volatile *, _FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDeletedSize@CBitBucket@@AEAA_KPEFBU_ITEMID_CHILD@@@Z
    uint64_t _GetDeletedSize(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitRecycleBin@CBitBucket@@AEAAJXZ
    long _InitRecycleBin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchThread@CBitBucket@@AEAAJPEAUHWND__@@PEAUIDataObject@@_KPEBUDFMICS@@@Z
    long _LaunchThread(HWND__*, IDataObject *, uint64_t, DFMICS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapColIndex@CBitBucket@@AEAAHPEAI@Z
    int _MapColIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OriginalDirectory@CBitBucket@@AEAAJPEFBU_ITEMID_CHILD@@PEAPEAG@Z
    long _OriginalDirectory(_ITEMID_CHILD & volatile *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OriginalPath@CBitBucket@@CAJPEFBU_ITEMID_CHILD@@PEAPEAG@Z
    static long _OriginalPath(_ITEMID_CHILD & volatile *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PermanentDeleteFileList@CBitBucket@@AEAAXPEAUHWND__@@PEAUIDataObject@@@Z
    void _PermanentDeleteFileList(HWND__*, IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveBackReferenceCB@CBitBucket@@CAXPEAUIUnknown@@@Z
    static void _RemoveBackReferenceCB(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreFileList@CBitBucket@@AEAAXPEAUHWND__@@PEAUIDataObject@@@Z
    void _RestoreFileList(HWND__*, IDataObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitBucket@@AEAA@XZ
    ~CBitBucket();
};
