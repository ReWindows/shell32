#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
// Base evidence: Button3d (likely; classinfo-template-instantiation).
class CPropertyButton {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CPropertyButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CPropertyButton@@QEAAJPEAUIPropertyStoreCache@@PEAUIPropertyDescription@@@Z
    long Init(IPropertyStoreCache *, IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CPropertyButton@@SAJXZ
    static long Register();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropertyButton@@UEAA@XZ
    virtual ~CPropertyButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIcon@CPropertyButton@@AEAAJPEAUIPropertyStoreCache@@PEAUIPropertyDescriptionRelatedPropertyInfo@@PEAUIPropertyDescription@@@Z
    long _SetIcon(IPropertyStoreCache *, IPropertyDescriptionRelatedPropertyInfo *, IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetText@CPropertyButton@@AEAAJPEAUIPropertyStoreCache@@PEAUIPropertyDescriptionRelatedPropertyInfo@@PEAUIPropertyDescription@@@Z
    long _SetText(IPropertyStoreCache *, IPropertyDescriptionRelatedPropertyInfo *, IPropertyDescription *);
};
