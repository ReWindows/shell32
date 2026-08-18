#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 21 member(s).
class CControlPanelAssocHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CControlPanelAssocHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelAssocHandler@@QEAA@XZ
    CControlPanelAssocHandler();
    // Category: Method | Source: PE Export
    // Symbol: ?CreateInvoker@CControlPanelAssocHandler@@UEAAJPEAUIDataObject@@PEAPEAUIAssocHandlerInvoker@@@Z
    virtual long CreateInvoker(IDataObject *, IAssocHandlerInvoker * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppID@CControlPanelAssocHandler@@UEAAJPEAPEAG@Z
    virtual long GetAppID(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CControlPanelAssocHandler@@UEAAJPEAPEAGPEAH@Z
    virtual long GetIconLocation(unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@CControlPanelAssocHandler@@UEAAJPEAPEAG@Z
    virtual long GetName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgID@CControlPanelAssocHandler@@UEAAJPEAPEAG@Z
    virtual long GetProgID(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIName@CControlPanelAssocHandler@@UEAAJPEAPEAG@Z
    virtual long GetUIName(unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Invoke@CControlPanelAssocHandler@@UEAAJPEAUIDataObject@@@Z
    virtual long Invoke(IDataObject *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsRecommended@CControlPanelAssocHandler@@UEAAJXZ
    virtual long IsRecommended();
    // Category: Method | Source: PE Export
    // Symbol: ?MakeDefault@CControlPanelAssocHandler@@UEAAJPEBG@Z
    virtual long MakeDefault(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CControlPanelAssocHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CControlPanelAssocHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAppID@CControlPanelAssocHandler@@UEAAJPEBG@Z
    virtual long SetAppID(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetProgID@CControlPanelAssocHandler@@UEAAJPEBG@Z
    virtual long SetProgID(unsigned short const *);
};
