#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 40 member(s).
namespace Microsoft::Internal::UI::Composition::Effects {
class CrossFadeEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ
    CrossFadeEffect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEBGPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@2Graphics@Windows@@@Z
    virtual long GetNamedPropertyMapping(unsigned short const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z
    virtual long GetProperty(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z
    virtual long GetSource(unsigned int, ::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source1@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z
    virtual long get_Source1(::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source2@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z
    virtual long get_Source2(::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Weight@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAM@Z
    virtual long get_Weight(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source1@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z
    virtual long put_Source1(::Windows::Graphics::Effects::IGraphicsEffectSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source2@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z
    virtual long put_Source2(::Windows::Graphics::Effects::IGraphicsEffectSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Weight@CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z
    virtual long put_Weight(float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CrossFadeEffect@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ
    virtual ~CrossFadeEffect();
};
} // namespace Microsoft::Internal::UI::Composition::Effects
