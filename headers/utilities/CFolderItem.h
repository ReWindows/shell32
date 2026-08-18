#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 50 member(s).
class CFolderItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFolderItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFolderItem@@QEAA@XZ
    CFolderItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendedProperty@CFolderItem@@UEAAJPEAGPEAUtagVARIANT@@@Z
    virtual long ExtendedProperty(unsigned short *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CFolderItem@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CFolderItem@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CFolderItem@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentAndItem@CFolderItem@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@PEAPEAUIShellFolder@@PEAPEAU_ITEMID_CHILD@@@Z
    virtual long GetParentAndItem(_ITEMIDLIST_ABSOLUTE * *, IShellFolder * *, _ITEMID_CHILD * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CFolderItem@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CFolderItem@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFolderItem@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CFolderItem@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeVerb@CFolderItem@@UEAAJUtagVARIANT@@@Z
    virtual long InvokeVerb(tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeVerbEx@CFolderItem@@UEAAJUtagVARIANT@@0@Z
    virtual long InvokeVerbEx(tagVARIANT, tagVARIANT);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFolderItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFolderItem@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetParentAndItem@CFolderItem@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long SetParentAndItem(_ITEMIDLIST_ABSOLUTE const *, IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Verbs@CFolderItem@@UEAAJPEAPEAUFolderItemVerbs@@@Z
    virtual long Verbs(FolderItemVerbs * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIDListFromVariant@CFolderItem@@SAPEAU_ITEMID_CHILD@@PEBUtagVARIANT@@@Z
    static _ITEMID_CHILD * _GetIDListFromVariant(tagVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@CFolderItem@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Application(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GetFolder@CFolderItem@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_GetFolder(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GetLink@CFolderItem@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_GetLink(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsBrowsable@CFolderItem@@UEAAJPEAF@Z
    virtual long get_IsBrowsable(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFileSystem@CFolderItem@@UEAAJPEAF@Z
    virtual long get_IsFileSystem(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFolder@CFolderItem@@UEAAJPEAF@Z
    virtual long get_IsFolder(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLink@CFolderItem@@UEAAJPEAF@Z
    virtual long get_IsLink(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ModifyDate@CFolderItem@@UEAAJPEAN@Z
    virtual long get_ModifyDate(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CFolderItem@@UEAAJPEAPEAG@Z
    virtual long get_Name(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@CFolderItem@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Parent(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Path@CFolderItem@@UEAAJPEAPEAG@Z
    virtual long get_Path(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CFolderItem@@UEAAJPEAJ@Z
    virtual long get_Size(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CFolderItem@@UEAAJPEAPEAG@Z
    virtual long get_Type(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ModifyDate@CFolderItem@@UEAAJN@Z
    virtual long put_ModifyDate(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@CFolderItem@@UEAAJPEAG@Z
    virtual long put_Name(unsigned short *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckAttribute@CFolderItem@@AEAAJKPEAF@Z
    long _CheckAttribute(unsigned long, short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ItemName@CFolderItem@@AEAAJIPEAPEAG@Z
    long _ItemName(unsigned int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SecurityCheck@CFolderItem@@AEAAJXZ
    long _SecurityCheck();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFolderItem@@EEAA@XZ
    virtual ~CFolderItem();
};
