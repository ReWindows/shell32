#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 29 member(s).
class CTaskbandPin {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskbandPin@@QEAA@XZ
    CTaskbandPin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z
    virtual long RemoveFromList(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetPinStreamVersion@CTaskbandPin@@UEAAKXZ
    virtual unsigned long v_GetPinStreamVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_NotifyPinListChange@CTaskbandPin@@UEAAXPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    virtual void v_NotifyPinListChange(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OpenLinksRegStream@CTaskbandPin@@UEAAPEAUIStream@@K@Z
    virtual IStream * v_OpenLinksRegStream(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OpenPinRegStream@CTaskbandPin@@UEAAPEAUIStream@@K@Z
    virtual IStream * v_OpenPinRegStream(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetChangeCount@CTaskbandPin@@UEAAJK@Z
    virtual long v_SetChangeCount(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetPinStreamVersion@CTaskbandPin@@UEAAJK@Z
    virtual long v_SetPinStreamVersion(unsigned long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z
    long _GetApplication(IApplicationResolver *, unsigned short const *, IShellItem * *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBU_ITEMIDLIST_ABSOLUTE@@KPEAPEAUIShellItem@@PEAPEAG3@Z
    long _ProcessDestinationFile(IApplicationResolver *, _ITEMIDLIST_ABSOLUTE const *, unsigned long, IShellItem * *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBU_ITEMIDLIST_ABSOLUTE@@KPEAPEAUIShellItem@@PEAPEAG@Z
    long _ProcessDestinationFolder(IApplicationResolver *, _ITEMIDLIST_ABSOLUTE const *, unsigned long, IShellItem * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEAPEAUIShellItem@@PEAPEAG3@Z
    long _TryDestinationViaAppID(IAssociationArray *, IApplicationResolver *, IShellItem * *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AllowVerb@CTaskbandPin@@MEAAHI@Z
    virtual int v_AllowVerb(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetChangeCount@CTaskbandPin@@MEAAJPEAK@Z
    virtual long v_GetChangeCount(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHelpText@CTaskbandPin@@MEAAJ_KPEAGI@Z
    virtual long v_GetHelpText(uint64_t, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetMenuStringID@CTaskbandPin@@MEAAJPEAI@Z
    virtual long v_GetMenuStringID(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetPinListMutexName@CTaskbandPin@@MEAAPEBGXZ
    virtual unsigned short const * v_GetPinListMutexName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetRemovedChangeCount@CTaskbandPin@@MEAAKXZ
    virtual unsigned long v_GetRemovedChangeCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetVerb@CTaskbandPin@@MEAAPEBGI@Z
    virtual unsigned short const * v_GetVerb(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z
    virtual int v_IsAcceptableTarget(_ITEMIDLIST_ABSOLUTE const *, IShellLinkW *, int, IShellItem * *, unsigned short * *, unsigned short * *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsRestricted@CTaskbandPin@@MEAAHXZ
    virtual int v_IsRestricted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SendPinRearrangeSQM@CTaskbandPin@@MEAAXXZ
    virtual void v_SendPinRearrangeSQM();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetRemovedChangeCount@CTaskbandPin@@MEAAJK@Z
    virtual long v_SetRemovedChangeCount(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?v_ShouldHideMenu@CTaskbandPin@@MEAAHI@Z
    virtual int v_ShouldHideMenu(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_TrackUnpinnedApp@CTaskbandPin@@MEAAJPEBG@Z
    virtual long v_TrackUnpinnedApp(unsigned short const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z
    bool IsPinnable(IShellItem2*);
};
