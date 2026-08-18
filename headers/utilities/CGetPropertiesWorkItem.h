#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CGetPropertiesWorkItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CGetPropertiesWorkItem@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CGetPropertiesWorkItem@@UEAAJXZ
    virtual long DoWork();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGetPropertiesWorkItem@@AEAA@PEAVCStatusBarModuleInner@@IIAEBU_tagpropertykey@@_N@Z
    CGetPropertiesWorkItem(CStatusBarModuleInner *, unsigned int, unsigned int, _tagpropertykey const &, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGetPropertiesWorkItem@@AEAA@PEAVCStatusBarModuleInner@@IIAEBU_tagpropertykey@@_N2AEBUhstring@winrt@@@Z
    CGetPropertiesWorkItem(CStatusBarModuleInner *, unsigned int, unsigned int, _tagpropertykey const &, bool, bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisclaimerShouldBeVisible@CGetPropertiesWorkItem@@AEAA_NXZ
    bool DisclaimerShouldBeVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheProperty@CGetPropertiesWorkItem@@AEAAJPEAUIPropertyStore@@PEAUIPropertyDescription@@@Z
    long _CacheProperty(IPropertyStore *, IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CachePropertyList@CGetPropertiesWorkItem@@AEAAXPEAUIPropertyStore@@PEAUIPropertyDescriptionList@@@Z
    void _CachePropertyList(IPropertyStore *, IPropertyDescriptionList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePropertyDescriptionList@CGetPropertiesWorkItem@@AEAAJPEAUIPropertyStore@@PEAPEAUIPropertyDescriptionList@@@Z
    long _CreatePropertyDescriptionList(IPropertyStore *, IPropertyDescriptionList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CGetPropertiesWorkItem@@AEAAJPEAUIUnknown@@PEAUIShellItemArray@@1@Z
    long _Initialize(IUnknown *, IShellItemArray *, IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeWork@CGetPropertiesWorkItem@@AEAAJPEAPEAUIPropertyStore@@@Z
    long _InitializeWork(IPropertyStore * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGetPropertiesWorkItem@@EEAA@XZ
    virtual ~CGetPropertiesWorkItem();
};
