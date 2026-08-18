#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 38 member(s).
class CFolderItems {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFolderItems@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFolderItems@@QEAA@PEAVCFolder@@H@Z
    CFolderItems(CFolder *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Filter@CFolderItems@@UEAAJJPEAG@Z
    virtual long Filter(long, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CFolderItems@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CFolderItems@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CFolderItems@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CFolderItems@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFolderItems@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CFolderItems@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeVerbEx@CFolderItems@@UEAAJUtagVARIANT@@0@Z
    virtual long InvokeVerbEx(tagVARIANT, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Item@CFolderItems@@UEAAJUtagVARIANT@@PEAPEAUFolderItem@@@Z
    virtual long Item(tagVARIANT, FolderItem * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFolderItems@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFolderItems@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NewEnum@CFolderItems@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long _NewEnum(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@CFolderItems@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Application(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@CFolderItems@@UEAAJPEAJ@Z
    virtual long get_Count(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@CFolderItems@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Parent(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verbs@CFolderItems@@UEAAJPEAPEAUFolderItemVerbs@@@Z
    virtual long get_Verbs(FolderItemVerbs * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyItem@CFolderItems@@IEAA_JIPEFBU_ITEMID_CHILD@@@Z
    int64_t _CopyItem(unsigned int, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureItem@CFolderItems@@MEAAJIPEAPEAU_ITEMID_CHILD@@@Z
    virtual long _EnsureItem(unsigned int, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHDPA@CFolderItems@@IEAAPEAU_DPA@@XZ
    _DPA * _GetHDPA();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHDPACount@CFolderItems@@IEAAIXZ
    unsigned int _GetHDPACount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUIObjectOf@CFolderItems@@IEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetUIObjectOf(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IncludeItem@CFolderItems@@IEAAHPEAUIShellFolder@@PEAU_ITEMID_CHILD@@@Z
    int _IncludeItem(IShellFolder *, _ITEMID_CHILD *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetIDListArray@CFolderItems@@IEAAXXZ
    void _ResetIDListArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SecurityCheck@CFolderItems@@IEAAJXZ
    long _SecurityCheck();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFolderItems@@MEAA@XZ
    virtual ~CFolderItems();
};
