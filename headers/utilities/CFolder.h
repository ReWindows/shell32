#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 53 member(s).
class CFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFolder@@QEAA@PEAUHWND__@@@Z
    CFolder(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyHere@CFolder@@UEAAJUtagVARIANT@@0@Z
    virtual long CopyHere(tagVARIANT, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissedWebViewBarricade@CFolder@@UEAAJXZ
    virtual long DismissedWebViewBarricade();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassID@CFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CFolder@@UEAAJUtagVARIANT@@HPEAPEAG@Z
    virtual long GetDetailsOf(tagVARIANT, int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CFolder@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellFolderView@CFolder@@QEAAJPEAPEAUIShellFolderView@@@Z
    long GetShellFolderView(IShellFolderView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CFolder@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CFolder@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CFolder@@QEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIShellFolder@@@Z
    long Init(_ITEMIDLIST_RELATIVE & volatile *, IShellFolder *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CFolder@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeVerbHelper@CFolder@@QEAAJUtagVARIANT@@0PEBQEFBU_ITEMID_CHILD@@HK@Z
    long InvokeVerbHelper(tagVARIANT, tagVARIANT, _ITEMID_CHILD & volatile * const *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Items@CFolder@@UEAAJPEAPEAUFolderItems@@@Z
    virtual long Items(FolderItems * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveHere@CFolder@@UEAAJUtagVARIANT@@0@Z
    virtual long MoveHere(tagVARIANT, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NewFolder@CFolder@@UEAAJPEAGUtagVARIANT@@@Z
    virtual long NewFolder(unsigned short *, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseName@CFolder@@UEAAJPEAGPEAPEAUFolderItem@@@Z
    virtual long ParseName(unsigned short *, FolderItem * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CFolder@@UEAAJPEAUIUnknown@@@Z
    virtual long SetOwner(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CFolder@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Synchronize@CFolder@@UEAAJXZ
    virtual long Synchronize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@CFolder@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Application(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HaveToShowWebViewBarricade@CFolder@@UEAAJPEAF@Z
    virtual long get_HaveToShowWebViewBarricade(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OfflineStatus@CFolder@@UEAAJPEAJ@Z
    virtual long get_OfflineStatus(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@CFolder@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Parent(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentFolder@CFolder@@UEAAJPEAPEAUFolder@@@Z
    virtual long get_ParentFolder(Folder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Self@CFolder@@UEAAJPEAPEAUFolderItem@@@Z
    virtual long get_Self(FolderItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowWebViewBarricade@CFolder@@UEAAJPEAF@Z
    virtual long get_ShowWebViewBarricade(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@CFolder@@UEAAJPEAPEAG@Z
    virtual long get_Title(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShowWebViewBarricade@CFolder@@UEAAJF@Z
    virtual long put_ShowWebViewBarricade(short);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveOrCopy@CFolder@@AEAAJIUtagVARIANT@@0@Z
    long _MoveOrCopy(unsigned int, tagVARIANT, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParentFolder@CFolder@@AEAAJPEAPEAUFolder@@@Z
    long _ParentFolder(Folder * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFolder@@EEAA@XZ
    virtual ~CFolder();
};
