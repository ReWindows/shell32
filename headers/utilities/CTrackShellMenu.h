#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 44 member(s).
class CTrackShellMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTrackShellMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTrackShellMenu@@QEAA@XZ
    CTrackShellMenu();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenu@CTrackShellMenu@@UEAAJPEAPEAUHMENU__@@PEAPEAUHWND__@@PEAK@Z
    virtual long GetMenu(HMENU__* *, HWND__* *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenuInfo@CTrackShellMenu@@UEAAJPEAPEAUIShellMenuCallback@@PEAI1PEAK@Z
    virtual long GetMenuInfo(IShellMenuCallback * *, unsigned int *, unsigned int *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellFolder@CTrackShellMenu@@UEAAJPEAKPEAPEAU_ITEMIDLIST_ABSOLUTE@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetShellFolder(unsigned long *, _ITEMIDLIST_ABSOLUTE * *, _GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSite@CTrackShellMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CTrackShellMenu@@UEAAJPEAUtagSMDATA@@@Z
    virtual long GetState(tagSMDATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubMenu@CTrackShellMenu@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetSubMenu(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTrackShellMenu@@UEAAJPEAUIShellMenuCallback@@IIK@Z
    virtual long Initialize(IShellMenuCallback *, unsigned int, unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateItem@CTrackShellMenu@@UEAAJPEAUtagSMDATA@@K@Z
    virtual long InvalidateItem(tagSMDATA *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Popup@CTrackShellMenu@@UEAAJPEAUHWND__@@PEAU_POINTL@@PEAU_RECTL@@H@Z
    virtual long Popup(HWND__*, _POINTL *, _RECTL *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTrackShellMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CTrackShellMenu@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTrackShellMenu@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenu@CTrackShellMenu@@UEAAJPEAUHMENU__@@PEAUHWND__@@K@Z
    virtual long SetMenu(HMENU__*, HWND__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMenuToolbar@CTrackShellMenu@@UEAAJPEAUIUnknown@@K@Z
    virtual long SetMenuToolbar(IUnknown *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinWidth@CTrackShellMenu@@UEAAJH@Z
    virtual long SetMinWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoBorder@CTrackShellMenu@@UEAAJH@Z
    virtual long SetNoBorder(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetObscured@CTrackShellMenu@@UEAAJPEAUHWND__@@PEAUIUnknown@@K@Z
    virtual long SetObscured(HWND__*, IUnknown *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellFolder@CTrackShellMenu@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAUHKEY__@@K@Z
    virtual long SetShellFolder(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, HKEY__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CTrackShellMenu@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CTrackShellMenu@@UEAAJPEBG@Z
    virtual long SetTheme(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToolbar@CTrackShellMenu@@UEAAJPEAUHWND__@@K@Z
    virtual long SetToolbar(HWND__*, unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTrackShellMenu@@EEAA@XZ
    virtual ~CTrackShellMenu();
};
