#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 43 member(s).
class CDelegateFolderBaseNoUI {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDelegateFolderBaseNoUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CDelegateFolderBaseNoUI@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CDelegateFolderBaseNoUI@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CDelegateFolderBaseNoUI@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateViewObject@CDelegateFolderBaseNoUI@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?EnumObjects@CDelegateFolderBaseNoUI@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CDelegateFolderBaseNoUI@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CDelegateFolderBaseNoUI@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CDelegateFolderBaseNoUI@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultColumn@CDelegateFolderBaseNoUI@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultColumnState@CDelegateFolderBaseNoUI@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CDelegateFolderBaseNoUI@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDetailsEx@CDelegateFolderBaseNoUI@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDetailsOf@CDelegateFolderBaseNoUI@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CDelegateFolderBaseNoUI@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CDelegateFolderBaseNoUI@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDelegateFolderBaseNoUI@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PE Export
    // Symbol: ?MapColumnToSCID@CDelegateFolderBaseNoUI@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@CDelegateFolderBaseNoUI@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDelegateFolderBaseNoUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDelegateFolderBaseNoUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CDelegateFolderBaseNoUI@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?AddInitProperties@CDelegateFolderBaseNoUI@@MEAAJPEAUIPropertyBag@@PEAUIBindCtx@@@Z
    virtual long AddInitProperties(IPropertyBag *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFolder@CDelegateFolderBaseNoUI@@MEAAJPEAUIPropertyBag@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateFolder(IPropertyBag *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAggregatorCookieIfAvailable@CDelegateFolderBaseNoUI@@IEAAJPEAUIPropertyBag@@PEAUIBindCtx@@@Z
    long _AddAggregatorCookieIfAvailable(IPropertyBag *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInFolderDisplayName@CDelegateFolderBaseNoUI@@MEAAJPEFBU_ITEMID_CHILD@@KPEAPEAG@Z
    virtual long _GetInFolderDisplayName(_ITEMID_CHILD & volatile *, unsigned long, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInFolderParsingName@CDelegateFolderBaseNoUI@@MEAAJPEFBU_ITEMID_CHILD@@PEAPEAG@Z
    virtual long _GetInFolderParsingName(_ITEMID_CHILD & volatile *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInFolderParsingNameHelper@CDelegateFolderBaseNoUI@@MEAAJPEFBU_ITEMID_CHILD@@PEAPEAG@Z
    virtual long _GetInFolderParsingNameHelper(_ITEMID_CHILD & volatile *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyStorageFromIDList@CDelegateFolderBaseNoUI@@IEAAJPEFBU_ITEMIDLIST_RELATIVE@@AEBU_GUID@@PEAPEAX@Z
    long _GetPropertyStorageFromIDList(_ITEMIDLIST_RELATIVE & volatile *, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDelegateFolderBaseNoUI@@MEAA@XZ
    virtual ~CDelegateFolderBaseNoUI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndInit@CDelegateFolderBaseNoUI@@AEAAJPEFBU_ITEMID_CHILD@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    long _CreateAndInit(_ITEMID_CHILD & volatile *, IBindCtx *, _GUID const &, void * *);
};
