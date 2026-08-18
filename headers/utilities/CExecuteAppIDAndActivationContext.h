#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CExecuteAppIDAndActivationContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CExecuteAppIDAndActivationContext@@UEAAJXZ
    virtual long Execute();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustPropStoreForImmersiveExecute@CExecuteAppIDAndActivationContext@@AEAAJPEBGPEAUIPropertyStore@@@Z
    long _AdjustPropStoreForImmersiveExecute(unsigned short const *, IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteAppIDAndActivationContext@CExecuteAppIDAndActivationContext@@AEAAJPEBG0PEAUIPropertyStore@@@Z
    long _ExecuteAppIDAndActivationContext(unsigned short const *, unsigned short const *, IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteSettingActivationContext@CExecuteAppIDAndActivationContext@@AEAAJPEBGPEAUIShellItem2@@AEBU_GUID@@@Z
    long _ExecuteSettingActivationContext(unsigned short const *, IShellItem2*, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGUIDProperty@CExecuteAppIDAndActivationContext@@AEAAJPEAUIShellItem2@@AEBU_tagpropertykey@@PEAU_GUID@@@Z
    long _GetGUIDProperty(IShellItem2*, _tagpropertykey const &, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStringProperty@CExecuteAppIDAndActivationContext@@AEAAJPEAUIShellItem2@@AEBU_tagpropertykey@@PEAPEAG@Z
    long _GetStringProperty(IShellItem2*, _tagpropertykey const &, unsigned short * *);
};
