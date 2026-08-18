#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CDeviceEventHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDeviceEventHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDeviceEventHandler@@QEAA@H@Z
    CDeviceEventHandler(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleEvent@CDeviceEventHandler@@UEAAJPEBG00@Z
    virtual long HandleEvent(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleEventWithContent@CDeviceEventHandler@@UEAAJPEBG000PEAUIDataObject@@@Z
    virtual long HandleEventWithContent(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDeviceEventHandler@@UEAAJPEBG@Z
    virtual long Initialize(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDeviceEventHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDeviceEventHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContainerID@CDeviceEventHandler@@UEAAJAEBU_GUID@@@Z
    virtual long SetContainerID(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LaunchDXP@CDeviceEventHandler@@SAJAEBU_GUID@@PEBG1HPEAH@Z
    static long s_LaunchDXP(_GUID const &, unsigned short const *, unsigned short const *, int, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AddInterfaceToDXPHandledList@CDeviceEventHandler@@CAJAEBU_GUID@@PEBG@Z
    static long s_AddInterfaceToDXPHandledList(_GUID const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ConditionallyLaunchDXP@CDeviceEventHandler@@CAJAEBU_GUID@@PEBGHPEAH2PEAPEAG@Z
    static long s_ConditionallyLaunchDXP(_GUID const &, unsigned short const *, int, int *, int *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DeviceAlreadyHandledByDXP@CDeviceEventHandler@@CAHAEBU_GUID@@PEBG@Z
    static int s_DeviceAlreadyHandledByDXP(_GUID const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HandlePossibleDXPDeviceInterfaceRemoval@CDeviceEventHandler@@CAJPEBG@Z
    static long s_HandlePossibleDXPDeviceInterfaceRemoval(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ProcessDeviceEvents@CDeviceEventHandler@@CAKPEAX@Z
    static unsigned long s_ProcessDeviceEvents(void *);
};
