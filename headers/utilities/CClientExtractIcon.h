#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 25 member(s).
class CClientExtractIcon {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CClientExtractIcon@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CClientExtractIcon@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CClientExtractIcon@@QEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?CompareIDs@CClientExtractIcon@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateViewObject@CClientExtractIcon@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?EnumObjects@CClientExtractIcon@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Extract@CClientExtractIcon@@UEAAJPEBDIPEAPEAUHICON__@@1I@Z
    virtual long Extract(char const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Extract@CClientExtractIcon@@UEAAJPEBGIPEAPEAUHICON__@@1I@Z
    virtual long Extract(unsigned short const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAttributesOf@CClientExtractIcon@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CClientExtractIcon@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CClientExtractIcon@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDisplayNameOf@CClientExtractIcon@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CClientExtractIcon@@UEAAJIPEADIPEAHPEAI@Z
    virtual long GetIconLocation(unsigned int, char *, unsigned int, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CClientExtractIcon@@UEAAJIPEAGIPEAHPEAI@Z
    virtual long GetIconLocation(unsigned int, unsigned short *, unsigned int, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CClientExtractIcon@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNew@CClientExtractIcon@@UEAAJXZ
    virtual long InitNew();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CClientExtractIcon@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CClientExtractIcon@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CClientExtractIcon@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreating@CClientExtractIcon@@UEAAJPEAUICreateProcessInputs@@@Z
    virtual long OnCreating(ICreateProcessInputs *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseDisplayName@CClientExtractIcon@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CClientExtractIcon@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CClientExtractIcon@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CClientExtractIcon@@UEAAJPEAUIPropertyBag@@HH@Z
    virtual long Save(IPropertyBag *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CClientExtractIcon@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
};
