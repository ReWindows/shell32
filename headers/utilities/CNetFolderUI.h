#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 35 member(s).
class CNetFolderUI {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?BindToObject@CNetFolderUI@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?BindToStorage@CNetFolderUI@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNetFolderUI@@QEAA@XZ
    CNetFolderUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CNetFolderUI@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    virtual long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?CompareIDs@CNetFolderUI@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CNetFolderUI@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?EnumObjects@CNetFolderUI@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CNetFolderUI@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CNetFolderUI@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CNetFolderUI@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CNetFolderUI@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultColumn@CNetFolderUI@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CNetFolderUI@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultSearchGUID@CNetFolderUI@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CNetFolderUI@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CNetFolderUI@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CNetFolderUI@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CNetFolderUI@@QEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceDisplayType@CNetFolderUI@@QEAAIXZ
    unsigned int GetResourceDisplayType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CNetFolderUI@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CNetFolderUI@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrintShare@CNetFolderUI@@SAHPEBUIDNETRESOURCE@@@Z
    static int IsPrintShare(IDNETRESOURCE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidID@CNetFolderUI@@SAPEBUIDNETRESOURCE@@PEFBU_ITEMIDLIST_RELATIVE@@@Z
    static IDNETRESOURCE const * IsValidID(_ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CNetFolderUI@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseDisplayName@CNetFolderUI@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetNameOf@CNetFolderUI@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNetFolderUI@@UEAA@XZ
    virtual ~CNetFolderUI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AssocCreate@CNetFolderUI@@AEAAJPEBUIDNETRESOURCE@@PEBGAEBU_GUID@@PEAPEAX@Z
    long _AssocCreate(IDNETRESOURCE const *, unsigned short const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyResName@CNetFolderUI@@CAPEAGPEBUIDNETRESOURCE@@PEAGI@Z
    static unsigned short * _CopyResName(IDNETRESOURCE const *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ItemDFMCallBack@CNetFolderUI@@CAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    static long _ItemDFMCallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapItemToStockIcon@CNetFolderUI@@AEAA?AW4SHSTOCKICONID@@PEFBU_ITEMID_CHILD@@@Z
    int _MapItemToStockIcon(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrinterDFMCallBack@CNetFolderUI@@CAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    static long _PrinterDFMCallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateIDNetResource@CNetFolderUI@@CAPEBUIDNETRESOURCE@@PEBU2@@Z
    static IDNETRESOURCE const * _ValidateIDNetResource(IDNETRESOURCE const *);
};
