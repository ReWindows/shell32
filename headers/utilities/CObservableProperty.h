#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 27 member(s).
class CObservableProperty {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CObservableProperty@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CObservableProperty@@QEAA@XZ
    CObservableProperty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CObservableProperty@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedValue@CObservableProperty@@UEAAJPEAUIInspectable@@0PEAPEAU2@@Z
    virtual long GetIndexedValue(IInspectable *, IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CObservableProperty@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CObservableProperty@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CObservableProperty@@UEAAJPEAUIInspectable@@PEAPEAU2@@Z
    virtual long GetValue(IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateValue@CObservableProperty@@UEAAJXZ
    virtual long InvalidateValue();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CObservableProperty@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CObservableProperty@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CObservableProperty@@QEAAJPEBGPEAUIInspectable@@IPEAUIPropertyValueProvider@Storage@Internal@Windows@@@Z
    long RuntimeClassInitialize(unsigned short const *, IInspectable *, unsigned int, ::Windows::Internal::Storage::IPropertyValueProvider *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndexedValue@CObservableProperty@@UEAAJPEAUIInspectable@@00@Z
    virtual long SetIndexedValue(IInspectable *, IInspectable *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CObservableProperty@@UEAAJPEAUIInspectable@@0@Z
    virtual long SetValue(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanRead@CObservableProperty@@UEAAJPEAE@Z
    virtual long get_CanRead(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanWrite@CObservableProperty@@UEAAJPEAE@Z
    virtual long get_CanWrite(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CObservableProperty@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CObservableProperty@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_Type(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CObservableProperty@@UEAA@XZ
    virtual ~CObservableProperty();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIsStream@CObservableProperty@@AEAAXXZ
    void _SetIsStream();
};
