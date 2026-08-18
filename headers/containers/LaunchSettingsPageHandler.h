#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class LaunchSettingsPageHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@LaunchSettingsPageHandler@@UEAAJXZ
    virtual long Execute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@LaunchSettingsPageHandler@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LaunchSettingsPageHandler@@QEAA@XZ
    LaunchSettingsPageHandler();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchSettingsPageHandler@@EEAA@XZ
    virtual ~LaunchSettingsPageHandler();
};
