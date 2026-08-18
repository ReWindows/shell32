#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CompositionDevice {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compositor@CompositionDevice@@QEAA?AU0Composition@UI@Windows@winrt@@XZ
    WindissectOpaque Compositor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAttachedOutputs@CompositionDevice@@QEBA_NXZ
    bool HasAttachedOutputs() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionDevice@@QEAA@XZ
    ~CompositionDevice();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CompositionDevice@@IEAAJUCompositor@Composition@UI@Windows@winrt@@PEAUID2D1Factory1@@@Z
    long Initialize(WindissectOpaque, ID2D1Factory1*);
};
