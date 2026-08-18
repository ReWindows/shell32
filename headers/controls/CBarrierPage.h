#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 36 member(s).
class CBarrierPage {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CBarrierPage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBarrierPage@@QEAA@XZ
    CBarrierPage();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIDsOfNames@CBarrierPage@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfo@CBarrierPage@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfoCount@CBarrierPage@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CBarrierPage@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CBarrierPage@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PE Export
    // Symbol: ?Notify@CBarrierPage@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CBarrierPage@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PE Export
    // Symbol: ?OnNavigateAway@CBarrierPage@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OptionallyTakeInitialFocus@CBarrierPage@@UEAAJPEAH@Z
    virtual long OptionallyTakeInitialFocus(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBarrierPage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CBarrierPage@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CBarrierPage@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDetailsResourceId@CBarrierPage@@MEAAHXZ
    virtual int _GetDetailsResourceId();
    // Category: Method | Source: PE Export
    // Symbol: ?_OnNavigate@CBarrierPage@@MEAAXXZ
    virtual void _OnNavigate();
    // Category: Method | Source: PE Export
    // Symbol: ?_SetCustomText@CBarrierPage@@MEAAXPEBG@Z
    virtual void _SetCustomText(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetElementText@CBarrierPage@@IEAAXPEAVElement@DirectUI@@HPEBG@Z
    void _SetElementText(::DirectUI::Element *, int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBarrierPage@@MEAA@XZ
    virtual ~CBarrierPage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConnectToBrowser@CBarrierPage@@AEAAJXZ
    long _ConnectToBrowser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDetailsText@CBarrierPage@@AEAAXPEBG@Z
    void _SetDetailsText(unsigned short const *);
};
