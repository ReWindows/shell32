#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 57 member(s).
class CShellFolderView {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellFolderView@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellFolderView@@QEAA@XZ
    CShellFolderView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumConnectionPoints@CShellFolderView@@UEAAJPEAPEAUIEnumConnectionPoints@@@Z
    virtual long EnumConnectionPoints(IEnumConnectionPoints * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterView@CShellFolderView@@UEAAJPEAG@Z
    virtual long FilterView(unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CShellFolderView@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CShellFolderView@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CShellFolderView@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CShellFolderView@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopupItemMenu@CShellFolderView@@UEAAJPEAUFolderItem@@UtagVARIANT@@1PEAPEAG@Z
    virtual long PopupItemMenu(FolderItem *, tagVARIANT, tagVARIANT, unsigned short * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellFolderView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CShellFolderView@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellFolderView@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectItem@CShellFolderView@@UEAAJPEAUtagVARIANT@@H@Z
    virtual long SelectItem(tagVARIANT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectItemRelative@CShellFolderView@@UEAAJH@Z
    virtual long SelectItemRelative(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedItems@CShellFolderView@@UEAAJPEAPEAUFolderItems@@@Z
    virtual long SelectedItems(FolderItems * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CShellFolderView@@UEAAJPEAUIUnknown@@@Z
    virtual long SetOwner(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CShellFolderView@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@CShellFolderView@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Application(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentViewMode@CShellFolderView@@UEAAJPEAI@Z
    virtual long get_CurrentViewMode(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FocusedItem@CShellFolderView@@UEAAJPEAPEAUFolderItem@@@Z
    virtual long get_FocusedItem(FolderItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Folder@CShellFolderView@@UEAAJPEAPEAUFolder@@@Z
    virtual long get_Folder(Folder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FolderFlags@CShellFolderView@@UEAAJPEAK@Z
    virtual long get_FolderFlags(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GroupBy@CShellFolderView@@UEAAJPEAPEAG@Z
    virtual long get_GroupBy(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IconSize@CShellFolderView@@UEAAJPEAH@Z
    virtual long get_IconSize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@CShellFolderView@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Parent(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Script@CShellFolderView@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Script(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SortColumns@CShellFolderView@@UEAAJPEAPEAG@Z
    virtual long get_SortColumns(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewOptions@CShellFolderView@@UEAAJPEAJ@Z
    virtual long get_ViewOptions(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CurrentViewMode@CShellFolderView@@UEAAJI@Z
    virtual long put_CurrentViewMode(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FolderFlags@CShellFolderView@@UEAAJK@Z
    virtual long put_FolderFlags(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GroupBy@CShellFolderView@@UEAAJPEAG@Z
    virtual long put_GroupBy(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IconSize@CShellFolderView@@UEAAJH@Z
    virtual long put_IconSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SortColumns@CShellFolderView@@UEAAJPEAG@Z
    virtual long put_SortColumns(unsigned short *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckState@CShellFolderView@@AEAAJXZ
    long _CheckState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindCConnectionPointNoRef@CShellFolderView@@EEAAPEAVCConnectionPoint@@HAEBU_GUID@@@Z
    virtual CConnectionPoint * _FindCConnectionPointNoRef(int, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolder@CShellFolderView@@AEAAJXZ
    long _GetFolder();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellFolderView@@EEAA@XZ
    virtual ~CShellFolderView();
};
