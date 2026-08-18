#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 56 member(s).
class CAppSuggestedLocationsFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppSuggestedLocationsFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CAppSuggestedLocationsFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CAppSuggestedLocationsFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppSuggestedLocationsFolder@@QEAA@XZ
    CAppSuggestedLocationsFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CAppSuggestedLocationsFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CAppSuggestedLocationsFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CAppSuggestedLocationsFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CAppSuggestedLocationsFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CAppSuggestedLocationsFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CAppSuggestedLocationsFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CAppSuggestedLocationsFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumn@CAppSuggestedLocationsFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CAppSuggestedLocationsFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CAppSuggestedLocationsFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CAppSuggestedLocationsFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CAppSuggestedLocationsFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CAppSuggestedLocationsFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationOptions@CAppSuggestedLocationsFolder@@UEAAJPEAW4NAVIGATIONOPTIONS@@@Z
    virtual long GetNavigationOptions(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealLocations@CAppSuggestedLocationsFolder@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetRealLocations(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CAppSuggestedLocationsFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAppSuggestedLocationsFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CAppSuggestedLocationsFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseDisplayName@CAppSuggestedLocationsFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppSuggestedLocationsFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppSuggestedLocationsFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CAppSuggestedLocationsFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddNameToPropertyStore@CAppSuggestedLocationsFolder@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIPropertyStore@@@Z
    long _AddNameToPropertyStore(_ITEMIDLIST_ABSOLUTE const *, IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAppPlaceIDList@CAppSuggestedLocationsFolder@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@AEBUtagPROPVARIANT@@IPEAPEAU_ITEMID_CHILD@@@Z
    long _CreateAppPlaceIDList(_ITEMIDLIST_ABSOLUTE const *, tagPROPVARIANT const &, unsigned int, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFolderForItem@CAppSuggestedLocationsFolder@@AEAAJPEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAXPEAPEAU2@@Z
    long _CreateFolderForItem(_ITEMID_CHILD & volatile *, _GUID const &, void * *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFolderIDListForItem@CAppSuggestedLocationsFolder@@AEAAJPEFBU_ITEMID_CHILD@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _CreateFolderIDListForItem(_ITEMID_CHILD & volatile *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateProbeIDList@CAppSuggestedLocationsFolder@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU_ITEMID_CHILD@@@Z
    long _CreateProbeIDList(_ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePropertyStoreOnIDList@CAppSuggestedLocationsFolder@@AEAAJPEFBU_ITEMIDLIST_RELATIVE@@AEBU_GUID@@PEAPEAX@Z
    long _CreatePropertyStoreOnIDList(_ITEMIDLIST_RELATIVE & volatile *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InternalQueryInterface@CAppSuggestedLocationsFolder@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_InternalQueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppSuggestedLocationsFolder@@EEAA@XZ
    virtual ~CAppSuggestedLocationsFolder();
};
