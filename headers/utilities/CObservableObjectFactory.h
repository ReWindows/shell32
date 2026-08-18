#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class CObservableObjectFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CObservableObjectFactory@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CObservableObjectFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateObservableProperty@CObservableObjectFactory@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAUIPropertyValueProvider@Storage@Internal@Windows@@IPEAPEAUICustomProperty@Data@Xaml@UI@7@@Z
    virtual long CreateObservableProperty(HSTRING__*, IInspectable *, ::Windows::Internal::Storage::IPropertyValueProvider *, unsigned int, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVectorChangedEventArgs@CObservableObjectFactory@@UEAAJW4CollectionChange@Collections@Foundation@Windows@@IPEAPEAUIVectorChangedEventArgs@345@@Z
    virtual long CreateVectorChangedEventArgs(int, unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CObservableObjectFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CObservableObjectFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CObservableObjectFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CObservableObjectFactory@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CObservableObjectFactory@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CObservableObjectFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CObservableObjectFactory@@UEAAKXZ
    virtual unsigned long Release();
};
