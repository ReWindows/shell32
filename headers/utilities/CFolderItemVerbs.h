#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 26 member(s).
class CFolderItemVerbs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFolderItemVerbs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFolderItemVerbs@@QEAA@PEAUIContextMenu@@@Z
    CFolderItemVerbs(IContextMenu *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CFolderItemVerbs@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CFolderItemVerbs@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CFolderItemVerbs@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CFolderItemVerbs@@QEAAHXZ
    int Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CFolderItemVerbs@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Item@CFolderItemVerbs@@UEAAJUtagVARIANT@@PEAPEAUFolderItemVerb@@@Z
    virtual long Item(tagVARIANT, FolderItemVerb * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFolderItemVerbs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFolderItemVerbs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NewEnum@CFolderItemVerbs@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long _NewEnum(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@CFolderItemVerbs@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Application(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@CFolderItemVerbs@@UEAAJPEAJ@Z
    virtual long get_Count(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@CFolderItemVerbs@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Parent(IDispatch * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFolderItemVerbs@@EEAA@XZ
    virtual ~CFolderItemVerbs();
};
