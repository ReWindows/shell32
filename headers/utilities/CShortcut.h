#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 33 member(s).
class CShortcut {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShortcut@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CShortcut@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CShortcut@@UEAAJPEAPEAGPEAH@Z
    virtual long GetIconLocation(unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CShortcut@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CShortcut@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CShortcut@@QEAAJPEAUHWND__@@PEAUIShellFolder@@PEAU_ITEMID_CHILD@@@Z
    long Init(HWND__*, IShellFolder *, _ITEMID_CHILD *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CShortcut@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShortcut@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShortcut@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CShortcut@@UEAAJH@Z
    virtual long Resolve(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CShortcut@@UEAAJUtagVARIANT@@@Z
    virtual long Save(tagVARIANT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconLocation@CShortcut@@UEAAJPEAGH@Z
    virtual long SetIconLocation(unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@CShortcut@@UEAAJPEAPEAG@Z
    virtual long get_Arguments(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@CShortcut@@UEAAJPEAPEAG@Z
    virtual long get_Description(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Hotkey@CShortcut@@UEAAJPEAH@Z
    virtual long get_Hotkey(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Path@CShortcut@@UEAAJPEAPEAG@Z
    virtual long get_Path(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowCommand@CShortcut@@UEAAJPEAH@Z
    virtual long get_ShowCommand(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Target@CShortcut@@UEAAJPEAPEAUFolderItem@@@Z
    virtual long get_Target(FolderItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WorkingDirectory@CShortcut@@UEAAJPEAPEAG@Z
    virtual long get_WorkingDirectory(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Arguments@CShortcut@@UEAAJPEAG@Z
    virtual long put_Arguments(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Description@CShortcut@@UEAAJPEAG@Z
    virtual long put_Description(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Hotkey@CShortcut@@UEAAJH@Z
    virtual long put_Hotkey(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Path@CShortcut@@UEAAJPEAG@Z
    virtual long put_Path(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShowCommand@CShortcut@@UEAAJH@Z
    virtual long put_ShowCommand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WorkingDirectory@CShortcut@@UEAAJPEAG@Z
    virtual long put_WorkingDirectory(unsigned short *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShortcut@@EEAA@XZ
    virtual ~CShortcut();
};
