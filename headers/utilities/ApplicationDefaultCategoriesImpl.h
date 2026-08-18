#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
class ApplicationDefaultCategoriesImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ApplicationDefaultCategoriesImpl@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplicationDefaultCategoriesImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ApplicationDefaultCategoriesImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ApplicationDefaultCategoriesImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationDefaultCategoriesImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ApplicationDefaultCategoriesImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@ApplicationDefaultCategoriesImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ApplicationDefaultCategoriesImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplicationDefaultCategoriesImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultApplication@ApplicationDefaultCategoriesImpl@@UEAAJW4ApplicationDefaultCategory@ApplicationDefaults@Internal@Windows@@PEAUHSTRING__@@@Z
    virtual long SetDefaultApplication(int, HSTRING__*);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppIdAsDefaultForExtension@ApplicationDefaultCategoriesImpl@@AEAAJPEBG0@Z
    long SetAppIdAsDefaultForExtension(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppIdAsDefaultForKind@ApplicationDefaultCategoriesImpl@@AEAAJPEBG0@Z
    long SetAppIdAsDefaultForKind(unsigned short const *, unsigned short const *);
};
