#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 39 member(s).
class CFolderItemsMultiLevel {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFolderItemsMultiLevel@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFolderItemsMultiLevel@@QEAA@PEAVCFolder@@@Z
    CFolderItemsMultiLevel(CFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Filter@CFolderItemsMultiLevel@@UEAAJJPEAG@Z
    virtual long Filter(long, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CFolderItemsMultiLevel@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CFolderItemsMultiLevel@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CFolderItemsMultiLevel@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CFolderItemsMultiLevel@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFolderItemsMultiLevel@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertItem@CFolderItemsMultiLevel@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@@Z
    virtual long InsertItem(_ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CFolderItemsMultiLevel@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeVerbEx@CFolderItemsMultiLevel@@UEAAJUtagVARIANT@@0@Z
    virtual long InvokeVerbEx(tagVARIANT, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Item@CFolderItemsMultiLevel@@UEAAJUtagVARIANT@@PEAPEAUFolderItem@@@Z
    virtual long Item(tagVARIANT, FolderItem * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFolderItemsMultiLevel@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFolderItemsMultiLevel@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NewEnum@CFolderItemsMultiLevel@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long _NewEnum(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@CFolderItemsMultiLevel@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Application(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@CFolderItemsMultiLevel@@UEAAJPEAJ@Z
    virtual long get_Count(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@CFolderItemsMultiLevel@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Parent(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verbs@CFolderItemsMultiLevel@@UEAAJPEAPEAUFolderItemVerbs@@@Z
    virtual long get_Verbs(FolderItemVerbs * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureItem@CFolderItemsMultiLevel@@MEAAJIPEAPEAU_ITEMIDLIST_RELATIVE@@@Z
    virtual long _EnsureItem(unsigned int, _ITEMIDLIST_RELATIVE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHDPA@CFolderItemsMultiLevel@@IEAAPEAU_DPA@@XZ
    _DPA * _GetHDPA();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHDPACount@CFolderItemsMultiLevel@@IEAAIXZ
    unsigned int _GetHDPACount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUIObjectOf@CFolderItemsMultiLevel@@IEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetUIObjectOf(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SecurityCheck@CFolderItemsMultiLevel@@IEAAJXZ
    long _SecurityCheck();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFolderItemsMultiLevel@@MEAA@XZ
    virtual ~CFolderItemsMultiLevel();
};
