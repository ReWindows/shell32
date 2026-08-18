#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CNavigateButton {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CNavigateButton@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CNavigateButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellExecute@CNavigateButton@@QEAAPEBGPEAPEAVValue@DirectUI@@@Z
    unsigned short const * GetShellExecute(::DirectUI::Value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CNavigateButton@@SAXPEBG0PEAUIUnknown@@_N@Z
    static void Navigate(unsigned short const *, unsigned short const *, IUnknown *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CNavigateButton@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNavigateButton@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CNavigateButton@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCplRoot@CNavigateButton@@CAJPEAUIShellBrowser@@PEAPEFAU_ITEMIDLIST@@@Z
    static long GetCplRoot(IShellBrowser *, _ITEMIDLIST & const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Execute@CNavigateButton@@AEAAXXZ
    void _Execute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Navigate@CNavigateButton@@AEAAXXZ
    void _Navigate();
};
