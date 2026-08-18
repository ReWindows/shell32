#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
class CControlPanelEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CControlPanelEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelEnum@@QEAA@KPEAUIRegItemCustomAttributes@@@Z
    CControlPanelEnum(unsigned long, IRegItemCustomAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CControlPanelEnum@@UEAAJPEAPEAUIEnumIDList@@@Z
    virtual long Clone(IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CControlPanelEnum@@UEAAJKPEAPEAU_ITEMID_CHILD@@PEAK@Z
    virtual long Next(unsigned long, _ITEMID_CHILD * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CControlPanelEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CControlPanelEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CControlPanelEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CControlPanelEnum@@UEAAJKW4PRIVENUMF@@@Z
    virtual long SetFlags(unsigned long, int);
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CControlPanelEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanEnumerateApplet@CControlPanelEnum@@AEAA_NPEBUCPLMODULE@@PEBUCPLITEM@@PEAPEAU_ITEMID_CHILD@@@Z
    bool _CanEnumerateApplet(CPLMODULE const *, CPLITEM const *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NextCachedCpl@CControlPanelEnum@@AEAA_NPEAPEAU_ITEMID_CHILD@@@Z
    bool _NextCachedCpl(_ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NextCachedWowCpl@CControlPanelEnum@@AEAA_NPEAPEAU_ITEMID_CHILD@@@Z
    bool _NextCachedWowCpl(_ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NextNonCachedCpl@CControlPanelEnum@@AEAA_NPEAPEAU_ITEMID_CHILD@@@Z
    bool _NextNonCachedCpl(_ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateWowCache@CControlPanelEnum@@AEAAJXZ
    long _UpdateWowCache();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelEnum@@AEAA@XZ
    ~CControlPanelEnum();
};
