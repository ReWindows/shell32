#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class CLibrariesFolderBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLibrariesFolderBase@@QEAA@XZ
    CLibrariesFolderBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CLibrariesFolderBase@@QEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransfer@CLibrariesFolderBase@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetTransfer(_ITEMIDLIST_RELATIVE & volatile *, HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBindToObject@CLibrariesFolderBase@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long OnBindToObject(IShellFolder *, _ITEMID_CHILD & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateViewObject@CLibrariesFolderBase@@UEAAJPEAUIShellFolder@@PEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long OnCreateViewObject(IShellFolder *, HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAttributesOf@CLibrariesFolderBase@@UEAAJPEAUIShellFolder@@IPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long OnGetAttributesOf(IShellFolder *, unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetDetailsEx@CLibrariesFolderBase@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long OnGetDetailsEx(IShellFolder *, _ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetDisplayNameOf@CLibrariesFolderBase@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KPEAGH@Z
    virtual long OnGetDisplayNameOf(IShellFolder *, _ITEMID_CHILD & volatile *, unsigned long, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetUIObjectOf@CLibrariesFolderBase@@UEAAJPEAUIShellFolder@@PEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    virtual long OnGetUIObjectOf(IShellFolder *, HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnParseDisplayName@CLibrariesFolderBase@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIBindCtx@@PEAGPEAPEAU_ITEMIDLIST_RELATIVE@@PEAK@Z
    virtual long OnParseDisplayName(IShellFolder *, HWND__*, IBindCtx *, unsigned short *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CLibrariesFolderBase@@UEAAJPEAUIBindCtx@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z
    virtual long Update(IBindCtx *, _ITEMID_CHILD & volatile *, _ITEMID_CHILD * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AreAllLibraries@CLibrariesFolderBase@@MEAAHPEAUIShellFolder@@IPEBQEFBU_ITEMID_CHILD@@@Z
    virtual int v_AreAllLibraries(IShellFolder *, unsigned int, _ITEMID_CHILD & volatile * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsLibrary@CLibrariesFolderBase@@MEAAHPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual int v_IsLibrary(IShellFolder *, _ITEMID_CHILD & volatile *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePropertyStore@CLibrariesFolderBase@@AEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    long _CreatePropertyStore(IShellFolder *, _ITEMID_CHILD & volatile *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayName@CLibrariesFolderBase@@AEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KPEAGH@Z
    long _GetDisplayName(IShellFolder *, _ITEMID_CHILD & volatile *, unsigned long, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTransferMediumItem@CLibrariesFolderBase@@AEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    long _GetTransferMediumItem(IShellFolder *, _ITEMID_CHILD & volatile *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBindToObject@CLibrariesFolderBase@@AEAAJPEAUIShellFolder@@PEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    long _OnBindToObject(IShellFolder *, _ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreateViewObject@CLibrariesFolderBase@@AEAAJPEAUIShellFolder@@PEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    long _OnCreateViewObject(IShellFolder *, HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetAttributesOf@CLibrariesFolderBase@@AEAAJPEAUIShellFolder@@IPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    long _OnGetAttributesOf(IShellFolder *, unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetUIObjectOf@CLibrariesFolderBase@@AEAAJPEAUIShellFolder@@PEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    long _OnGetUIObjectOf(IShellFolder *, HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnParseDisplayName@CLibrariesFolderBase@@AEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIBindCtx@@PEAGPEAPEAU_ITEMIDLIST_RELATIVE@@PEAK@Z
    long _OnParseDisplayName(IShellFolder *, HWND__*, IBindCtx *, unsigned short *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WrapPropertyStore@CLibrariesFolderBase@@AEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAUIUnknown@@KAEBU_GUID@@PEAPEAX@Z
    long _WrapPropertyStore(IShellFolder *, _ITEMID_CHILD & volatile *, IUnknown *, unsigned long, _GUID const &, void * *);
};
