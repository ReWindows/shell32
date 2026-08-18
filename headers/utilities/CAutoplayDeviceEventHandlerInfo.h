#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CAutoplayDeviceEventHandlerInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAutoplayDeviceEventHandlerInfo@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumHandlersForDevice@CAutoplayDeviceEventHandlerInfo@@UEAAJU_GUID@@PEAPEBGK1KPEAPEAUIAutoplayHandlerList@@@Z
    virtual long EnumHandlersForDevice(_GUID, unsigned short const * *, unsigned long, unsigned short const * *, unsigned long, IAutoplayHandlerList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerDefaultHandler@CAutoplayDeviceEventHandlerInfo@@UEAAJU_GUID@@PEAPEAUIAutoplayHandler@@@Z
    virtual long GetContainerDefaultHandler(_GUID, IAutoplayHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandler@CAutoplayDeviceEventHandlerInfo@@UEAAJU_GUID@@PEBG1PEAPEAUIAutoplayHandler@@@Z
    virtual long GetHandler(_GUID, unsigned short const *, unsigned short const *, IAutoplayHandler * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAutoplayDeviceEventHandlerInfo@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutoplayDeviceEventHandlerInfo@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContainerDefaultHandler@CAutoplayDeviceEventHandlerInfo@@UEAAJU_GUID@@PEAUIAutoplayHandler@@@Z
    virtual long SetContainerDefaultHandler(_GUID, IAutoplayHandler *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoplayDeviceEventHandlerInfo@@IEAA@XZ
    CAutoplayDeviceEventHandlerInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RepackageEventHandlerListAsDPA@CAutoplayDeviceEventHandlerInfo@@IEAAJAEAV?$CDPACoTaskMem@G@@PEAPEBGKH@Z
    long _RepackageEventHandlerListAsDPA(WindissectOpaque &, unsigned short const * *, unsigned long, int);
};
