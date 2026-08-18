#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class DefaultLocationUtilsImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@DefaultLocationUtilsImpl@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DefaultLocationUtilsImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultLocation@DefaultLocationUtilsImpl@@UEAAJPEAI@Z
    virtual long GetDefaultLocation(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultSyncRootPath@DefaultLocationUtilsImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDefaultSyncRootPath(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DefaultLocationUtilsImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DefaultLocationUtilsImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DefaultLocationUtilsImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@DefaultLocationUtilsImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@DefaultLocationUtilsImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DefaultLocationUtilsImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DefaultLocationUtilsImpl@@UEAAKXZ
    virtual unsigned long Release();
};
