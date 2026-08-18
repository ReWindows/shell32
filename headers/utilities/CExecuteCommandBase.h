#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 28 member(s).
class CExecuteCommandBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExecuteCommandBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExecuteCommandBase@@QEAA@XZ
    CExecuteCommandBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssocElement@CExecuteCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetAssocElement(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CExecuteCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSelection(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExecuteCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExecuteCommandBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssocElement@CExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z
    virtual long SetAssocElement(IAssociationElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectory@CExecuteCommandBase@@UEAAJPEBG@Z
    virtual long SetDirectory(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyState@CExecuteCommandBase@@UEAAJK@Z
    virtual long SetKeyState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoShowUI@CExecuteCommandBase@@UEAAJH@Z
    virtual long SetNoShowUI(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParameters@CExecuteCommandBase@@UEAAJPEBG@Z
    virtual long SetParameters(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CExecuteCommandBase@@UEAAJUtagPOINT@@@Z
    virtual long SetPosition(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CExecuteCommandBase@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSelection(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowWindow@CExecuteCommandBase@@UEAAJH@Z
    virtual long SetShowWindow(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItem@CExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z
    long _GetSelectedItem(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectionCount@CExecuteCommandBase@@IEAAKXZ
    unsigned long _SelectionCount();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExecuteCommandBase@@MEAA@XZ
    virtual ~CExecuteCommandBase();
};
