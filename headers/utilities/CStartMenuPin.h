#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
class CStartMenuPin {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStartMenuPin@@QEAA@XZ
    CStartMenuPin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromList@CStartMenuPin@@UEAAJPEAUIShellItem@@@Z
    virtual long RemoveFromList(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetPinStreamVersion@CStartMenuPin@@UEAAKXZ
    virtual unsigned long v_GetPinStreamVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_NotifyPinListChange@CStartMenuPin@@UEAAXPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    virtual void v_NotifyPinListChange(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OpenLinksRegStream@CStartMenuPin@@UEAAPEAUIStream@@K@Z
    virtual IStream * v_OpenLinksRegStream(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OpenPinRegStream@CStartMenuPin@@UEAAPEAUIStream@@K@Z
    virtual IStream * v_OpenPinRegStream(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetChangeCount@CStartMenuPin@@UEAAJK@Z
    virtual long v_SetChangeCount(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetPinStreamVersion@CStartMenuPin@@UEAAJK@Z
    virtual long v_SetPinStreamVersion(unsigned long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetBackupSubDirectoryName@CStartMenuPin@@MEAAJPEAGI@Z
    virtual long v_GetBackupSubDirectoryName(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetChangeCount@CStartMenuPin@@MEAAJPEAK@Z
    virtual long v_GetChangeCount(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHelpText@CStartMenuPin@@MEAAJ_KPEAGI@Z
    virtual long v_GetHelpText(uint64_t, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetMenuStringID@CStartMenuPin@@MEAAJPEAI@Z
    virtual long v_GetMenuStringID(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetPinListMutexName@CStartMenuPin@@MEAAPEBGXZ
    virtual unsigned short const * v_GetPinListMutexName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetRemovedChangeCount@CStartMenuPin@@MEAAKXZ
    virtual unsigned long v_GetRemovedChangeCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetVerb@CStartMenuPin@@MEAAPEBGI@Z
    virtual unsigned short const * v_GetVerb(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsRestricted@CStartMenuPin@@MEAAHXZ
    virtual int v_IsRestricted();
    // Category: Method | Source: PE Export
    // Symbol: ?v_SendPinRearrangeSQM@CStartMenuPin@@MEAAXXZ
    virtual void v_SendPinRearrangeSQM();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetRemovedChangeCount@CStartMenuPin@@MEAAJK@Z
    virtual long v_SetRemovedChangeCount(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?v_ShouldHideMenu@CStartMenuPin@@MEAAHI@Z
    virtual int v_ShouldHideMenu(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveDarwinShortcutFromTaskbarList@CStartMenuPin@@AEAAJPEBG@Z
    long _RemoveDarwinShortcutFromTaskbarList(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveFromTaskbarList@CStartMenuPin@@AEAAJPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _RemoveFromTaskbarList(_ITEMIDLIST_ABSOLUTE *);
};
