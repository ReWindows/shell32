#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 30 member(s).
class CAutoplayDeviceHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAutoplayDeviceHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoplayDeviceHandler@@QEAA@XZ
    CAutoplayDeviceHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAutoplayDeviceHandler@@SAJPEAPEAUIAutoplayDeviceHandler@@PEBG@Z
    static long Create(IAutoplayDeviceHandler * *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfigHandlerList@CAutoplayDeviceHandler@@UEAAJPEAPEAUIAutoplayHandlerList@@@Z
    virtual long GetConfigHandlerList(IAutoplayHandlerList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultHandler@CAutoplayDeviceHandler@@UEAAJW4AUTOPLAY_DEFAULT_TYPE@@PEAPEAG@Z
    virtual long GetDefaultHandler(int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultHandlerLastWriteTime@CAutoplayDeviceHandler@@UEAAJW4AUTOPLAY_DEFAULT_TYPE@@PEAU_FILETIME@@PEAPEAG@Z
    virtual long GetDefaultHandlerLastWriteTime(int, _FILETIME *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CAutoplayDeviceHandler@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevicePath@CAutoplayDeviceHandler@@UEAAJPEAPEAG@Z
    virtual long GetDevicePath(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceStageHandlerList@CAutoplayDeviceHandler@@UEAAJPEAPEAUIAutoplayHandlerList@@@Z
    virtual long GetDeviceStageHandlerList(IAutoplayHandlerList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID@CAutoplayDeviceHandler@@UEAAJPEAPEAG@Z
    virtual long GetID(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CAutoplayDeviceHandler@@UEAAJHPEAPEAUHICON__@@@Z
    virtual long GetIcon(int, HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CAutoplayDeviceHandler@@UEAAJPEAPEAG@Z
    virtual long GetIconLocation(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLabel@CAutoplayDeviceHandler@@UEAAJPEAPEAG@Z
    virtual long GetLabel(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewlyInstalledHandlerList@CAutoplayDeviceHandler@@UEAAJPEAPEAUIAutoplayHandlerList@@@Z
    virtual long GetNewlyInstalledHandlerList(IAutoplayHandlerList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPromptHandlerList@CAutoplayDeviceHandler@@UEAAJPEAPEAUIAutoplayHandlerList@@@Z
    virtual long GetPromptHandlerList(IAutoplayHandlerList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTooltip@CAutoplayDeviceHandler@@UEAAJPEAPEAG@Z
    virtual long GetTooltip(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAutoplayDeviceHandler@@UEAAJPEBG@Z
    virtual long Initialize(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeByID@CAutoplayDeviceHandler@@UEAAJPEBG@Z
    virtual long InitializeByID(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAutoplayDeviceHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutoplayDeviceHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveKnownDeviceInfo@CAutoplayDeviceHandler@@UEAAJXZ
    virtual long SaveKnownDeviceInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultHandler@CAutoplayDeviceHandler@@UEAAJW4AUTOPLAY_DEFAULT_TYPE@@PEBG@Z
    virtual long SetDefaultHandler(int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInclusionExclusionLists@CAutoplayDeviceHandler@@QEAAJPEBQEBGK0K@Z
    long SetInclusionExclusionLists(unsigned short const * const *, unsigned long, unsigned short const * const *, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CAutoplayDeviceHandler@@AEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppsInfoFromMetadata@CAutoplayDeviceHandler@@AEAAJPEBGPEAPEAG1@Z
    long _GetAppsInfoFromMetadata(unsigned short const *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAutoplayHandlerList@CAutoplayDeviceHandler@@AEAAJHPEBU_FILETIME@@PEAPEAUIAutoplayHandlerList@@@Z
    long _GetAutoplayHandlerList(int, _FILETIME const *, IAutoplayHandlerList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInterfaceGUID@CAutoplayDeviceHandler@@AEAAJPEAU_GUID@@@Z
    long _GetInterfaceGUID(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadLegacyHandler@CAutoplayDeviceHandler@@AEAAJPEBG@Z
    long _LoadLegacyHandler(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryInitializeCustomEvent@CAutoplayDeviceHandler@@AEAAJPEBG@Z
    long _TryInitializeCustomEvent(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoplayDeviceHandler@@AEAA@XZ
    ~CAutoplayDeviceHandler();
};
