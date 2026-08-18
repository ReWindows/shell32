#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CTypeAheadSearchHistorySettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSearchHistory@CTypeAheadSearchHistorySettings@@UEAAJPEAUITypeAheadSearchSettingsCallback@@@Z
    virtual long ClearSearchHistory(ITypeAheadSearchSettingsCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableSearchHistory@CTypeAheadSearchHistorySettings@@UEAAJH@Z
    virtual long EnableSearchHistory(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchHistoryEnabled@CTypeAheadSearchHistorySettings@@UEAAJXZ
    virtual long IsSearchHistoryEnabled();
};
