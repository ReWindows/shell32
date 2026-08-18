#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class Wallpaper2 {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Wallpaper2@@UEAA@XZ
    virtual ~Wallpaper2();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDevice@Wallpaper2@@AEAAXXZ
    void CreateDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardDevice@Wallpaper2@@AEAAXXZ
    void DiscardDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishInitialize@Wallpaper2@@AEAAXXZ
    void FinishInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCompositionCapabilitiesChanged@Wallpaper2@@AEAAXXZ
    void HandleCompositionCapabilitiesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Wallpaper2@@AEAAXXZ
    void Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@Wallpaper2@@AEAA_NXZ
    bool IsSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionCapabilitiesChanged@Wallpaper2@@AEAAXAEBUCompositionCapabilities@Composition@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnCompositionCapabilitiesChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDirect3DDeviceLost@Wallpaper2@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@45@@Z
    void OnDirect3DDeviceLost(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecreateDevice@Wallpaper2@@AEAAXXZ
    void RecreateDevice();
};
