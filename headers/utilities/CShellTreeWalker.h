#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CShellTreeWalker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellTreeWalker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellTreeWalker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellTreeWalker@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkTree@CShellTreeWalker@@UEAAJHPEBG0HPEAUIShellTreeWalkerCallBack@@@Z
    virtual long WalkTree(int, unsigned short const *, unsigned short const *, int, IShellTreeWalkerCallBack *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallCallBacks@CShellTreeWalker@@AEAAJKPEAU_WIN32_FIND_DATAW@@_K@Z
    long _CallCallBacks(unsigned long, _WIN32_FIND_DATAW *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessAndRecurse@CShellTreeWalker@@AEAAJPEAU_WIN32_FIND_DATAW@@@Z
    long _ProcessAndRecurse(_WIN32_FIND_DATAW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WalkCurrentFolder@CShellTreeWalker@@AEAAJXZ
    long _WalkCurrentFolder();
};
