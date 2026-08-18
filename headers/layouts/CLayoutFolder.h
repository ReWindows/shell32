#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 78 member(s).
class CLayoutFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLayoutFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CLayoutFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CLayoutFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLayoutFolder@@QEAA@XZ
    CLayoutFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CLayoutFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CLayoutFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CLayoutFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PE Export
    // Symbol: ?EnumSearches@CLayoutFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CLayoutFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CLayoutFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CLayoutFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumn@CLayoutFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CLayoutFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CLayoutFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CLayoutFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CLayoutFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CLayoutFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CLayoutFolder@@UEAAJPEAW4SEARCHBOX_FLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputParams@CLayoutFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetInputParams(_GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMRULocation@CLayoutFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetMRULocation(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneState@CLayoutFolder@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetPaneState(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParamCount@CLayoutFolder@@UEAAJPEAK@Z
    virtual long GetParamCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParamNameAt@CLayoutFolder@@UEAAJKPEAPEAG@Z
    virtual long GetParamNameAt(unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParamValue@CLayoutFolder@@UEAAJPEBGPEAPEAG@Z
    virtual long GetParamValue(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPossibleRedirectTarget@CLayoutFolder@@QEAAJAEBU_GUID@@PEAHPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long GetPossibleRedirectTarget(_GUID const &, int *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoot@CLayoutFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetRoot(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestPopupSetting@CLayoutFolder@@UEAAJPEAW4SEARCH_BOX_SUGGEST_POPUP_SETTING@@@Z
    virtual long GetSuggestPopupSetting(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimerDelay@CLayoutFolder@@UEAAJPEAI@Z
    virtual long GetTimerDelay(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CLayoutFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitNew@CLayoutFolder@@UEAAJXZ
    virtual long InitNew();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLayoutFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CLayoutFolder@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CLayoutFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@CLayoutFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLayoutFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLayoutFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CLayoutFolder@@UEAAJPEAUIPropertyBag@@HH@Z
    virtual long Save(IPropertyBag *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CLayoutFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareIDListAllNamedProperties@CLayoutFolder@@AEAAJPEFBU_ITEMIDLIST_RELATIVE@@0@Z
    long _CompareIDListAllNamedProperties(_ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareIDListProperty@CLayoutFolder@@AEAAJAEBU_tagpropertykey@@PEFBU_ITEMIDLIST_RELATIVE@@1@Z
    long _CompareIDListProperty(_tagpropertykey const &, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFolder@CLayoutFolder@@AEAAJPEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    long _CreateFolder(_ITEMID_CHILD & volatile *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureChildren@CLayoutFolder@@AEAAJXZ
    long _EnsureChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLayoutStream@CLayoutFolder@@AEAAJXZ
    long _EnsureLayoutStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureOwnProperties@CLayoutFolder@@AEAAJXZ
    long _EnsureOwnProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNamedPropertyStore@CLayoutFolder@@AEAAJXZ
    long _GetNamedPropertyStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyStoreForItem@CLayoutFolder@@AEAAJHPEBGPEAPEAUIPropertyStore@@@Z
    long _GetPropertyStoreForItem(int, unsigned short const *, IPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeFromFolderAndDOM@CLayoutFolder@@AEAAJPEAV1@PEAUIXMLDOMElement@@@Z
    long _InitializeFromFolderAndDOM(CLayoutFolder *, IXMLDOMElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadElementFromStream@CLayoutFolder@@AEAAJPEAUIStream@@PEAPEAUIXMLDOMElement@@@Z
    long _LoadElementFromStream(IStream *, IXMLDOMElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadLocalOnlyInfo@CLayoutFolder@@AEAAJPEAUIXMLDOMElement@@PEA_NPEAGH@Z
    long _ReadLocalOnlyInfo(IXMLDOMElement *, bool *, unsigned short *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLayoutFolder@@EEAA@XZ
    virtual ~CLayoutFolder();
};
