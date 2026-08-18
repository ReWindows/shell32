#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CRegistryChangeListener {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRegistryChangeListener@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CRegistryChangeListener@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRegistryChangeListener@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CRegistryChangeListener@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRegistryChangeListener@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CRegistryChangeListener@@UEAAJXZ
    virtual long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CRegistryChangeListener@@QEAAJPEAUHKEY__@@PEBGW4REGISTRY_LISTENER_FLAGS@@P6AXPEAX@Z3@Z
    long _Initialize(HKEY__*, unsigned short const *, int, void ( *)(void *), void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupCB@CRegistryChangeListener@@AEAAXXZ
    void _CleanupCB();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreChangeCallback@CRegistryChangeListener@@AEAAJXZ
    long _RestoreChangeCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CleanupCB@CRegistryChangeListener@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z
    static void s_CleanupCB(_TP_CALLBACK_INSTANCE *, void *, _TP_WORK *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RegistryChangeCB@CRegistryChangeListener@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    static void s_RegistryChangeCB(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRegistryChangeListener@@AEAA@XZ
    ~CRegistryChangeListener();
};
