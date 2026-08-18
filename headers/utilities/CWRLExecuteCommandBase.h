#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CWRLExecuteCommandBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWRLExecuteCommandBase@@QEAA@XZ
    CWRLExecuteCommandBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssocElement@CWRLExecuteCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetAssocElement(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CWRLExecuteCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSelection(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z
    virtual long SetAssocElement(IAssociationElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectory@CWRLExecuteCommandBase@@UEAAJPEBG@Z
    virtual long SetDirectory(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyState@CWRLExecuteCommandBase@@UEAAJK@Z
    virtual long SetKeyState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoShowUI@CWRLExecuteCommandBase@@UEAAJH@Z
    virtual long SetNoShowUI(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParameters@CWRLExecuteCommandBase@@UEAAJPEBG@Z
    virtual long SetParameters(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CWRLExecuteCommandBase@@UEAAJUtagPOINT@@@Z
    virtual long SetPosition(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CWRLExecuteCommandBase@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSelection(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowWindow@CWRLExecuteCommandBase@@UEAAJH@Z
    virtual long SetShowWindow(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z
    long _GetSelectedItem(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDelegate@CWRLExecuteCommandBase@@IEAAJPEAUIExecuteCommand@@PEAUIShellItemArray@@@Z
    long _InitDelegate(IExecuteCommand *, IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectionCount@CWRLExecuteCommandBase@@IEAAKXZ
    unsigned long _SelectionCount();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWRLExecuteCommandBase@@MEAA@XZ
    virtual ~CWRLExecuteCommandBase();
};
