#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CStatusBarPropertyStore {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Commit@CStatusBarPropertyStore@@UEAAJXZ
    virtual long Commit();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAt@CStatusBarPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z
    virtual long GetAt(unsigned long, _tagpropertykey *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCount@CStatusBarPropertyStore@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CStatusBarPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetValue@CStatusBarPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetValue(_tagpropertykey const &, tagPROPVARIANT const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStatusBarPropertyStore@@UEAA@XZ
    virtual ~CStatusBarPropertyStore();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FormatStatusBarCountAndSize@CStatusBarPropertyStore@@AEAAJIIAEBUtagPROPVARIANT@@PEAU2@@Z
    long _FormatStatusBarCountAndSize(unsigned int, unsigned int, tagPROPVARIANT const &, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolderStorageProviderError@CStatusBarPropertyStore@@AEAAJPEAUtagPROPVARIANT@@@Z
    long _GetFolderStorageProviderError(tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItemCountAndSize@CStatusBarPropertyStore@@AEAAJPEAUtagPROPVARIANT@@@Z
    long _GetSelectedItemCountAndSize(tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItemsAvailability@CStatusBarPropertyStore@@AEAAJPEAUtagPROPVARIANT@@@Z
    long _GetSelectedItemsAvailability(tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectionSize@CStatusBarPropertyStore@@AEAAJPEAUtagPROPVARIANT@@@Z
    long _GetSelectionSize(tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPropertyCommonToAllItems@CStatusBarPropertyStore@@AEAAJAEBU_tagpropertykey@@PEA_N@Z
    long _IsPropertyCommonToAllItems(_tagpropertykey const &, bool *);
};
