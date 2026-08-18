#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 114 member(s).
class CObservableItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CObservableItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CObservableItem@@QEAA@XZ
    CObservableItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteCommand@CObservableItem@@UEAAJPEAUHSTRING__@@0@Z
    virtual long ExecuteCommand(HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChangeCount@CObservableItem@@UEAAJPEAI@Z
    virtual long GetChangeCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomProperty@CObservableItem@@UEAAJPEAUHSTRING__@@PEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    virtual long GetCustomProperty(HSTRING__*, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CObservableItem@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedProperty@CObservableItem@@UEAAJPEAUHSTRING__@@UTypeName@Interop@Xaml@UI@Windows@@PEAPEAUICustomProperty@Data@567@@Z
    virtual long GetIndexedProperty(HSTRING__*, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CObservableItem@@UEAAJPEAPEAUIItem@@@Z
    virtual long GetItem(IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CObservableItem@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetPropertyValue(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CObservableItem@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringRepresentation@CObservableItem@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetStringRepresentation(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CObservableItem@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CObservableItem@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CObservableItem@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CObservableItem@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImagePresent@CObservableItem@@UEAAJW4IMAGE_STREAM_TYPE@@@Z
    virtual long IsImagePresent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPropertyChanged@CObservableItem@@UEAAJPEAUHSTRING__@@@Z
    virtual long NotifyPropertyChanged(HSTRING__*);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancelled@CObservableItem@@UEAAJPEAUIItem@@@Z
    virtual long OnCancelled(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CObservableItem@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@PEAUIPropertyKeyStore@@@Z
    virtual long OnItemChanged(int, IItem *, IPropertyKeyStore *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemChanging@CObservableItem@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@@Z
    virtual long OnItemChanging(int, IItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CObservableItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CObservableItem@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomPropertyProvider@CObservableItem@@UEAAJW4CustomPropertyProviderType@Storage@Internal@Windows@@PEAUICustomPropertyProvider@Data@Xaml@UI@5@@Z
    virtual long SetCustomPropertyProvider(int, ::Windows::UI::Xaml::Data::ICustomPropertyProvider *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomPropertyProviderFactory@CObservableItem@@UEAAJPEAUICustomPropertyProviderFactory@Storage@Internal@Windows@@@Z
    virtual long SetCustomPropertyProviderFactory(::Windows::Internal::Storage::ICustomPropertyProviderFactory *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItem@CObservableItem@@UEAAJPEAUIItem@@@Z
    virtual long SetItem(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemValueProvider@CObservableItem@@UEAAJPEAUIItemValueProvider@Storage@Internal@Windows@@@Z
    virtual long SetItemValueProvider(::Windows::Internal::Storage::IItemValueProvider *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemValueProviderFactory@CObservableItem@@UEAAJPEAUIItemValueProviderFactory@Storage@Internal@Windows@@@Z
    virtual long SetItemValueProviderFactory(::Windows::Internal::Storage::IItemValueProviderFactory *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@CObservableItem@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@CObservableItem@@UEAAJPEAUIPropertyChangedEventHandler@Data@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PropertyChanged(::Windows::UI::Xaml::Data::IPropertyChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Commands@CObservableItem@@UEAAJPEAPEAU?$IVector@PEAUIItemCommand@Storage@Internal@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Commands(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Phase@CObservableItem@@UEAAJPEAW4BindingPhase@Storage@Internal@Windows@@@Z
    virtual long get_Phase(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CObservableItem@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_Type(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Phase@CObservableItem@@UEAAJW4BindingPhase@Storage@Internal@Windows@@@Z
    virtual long put_Phase(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@CObservableItem@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PropertyChanged(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheProperty@CObservableItem@@AEAAXPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    void _CacheProperty(::Windows::UI::Xaml::Data::ICustomProperty *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConfigureGroupCollectionImageManager@CObservableItem@@AEAAJPEAUIItemCollection@@@Z
    long _ConfigureGroupCollectionImageManager(IItemCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DelegateItemChanged@CObservableItem@@AEAAXPEAUIUnknown@@W4ITEM_CHANGED_TYPE@@PEAUIPropertyKeyStore@@@Z
    void _DelegateItemChanged(IUnknown *, int, IPropertyKeyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageForItemAsPropertyValue@CObservableItem@@AEAAJW4IMAGE_STREAM_TYPE@@HW4WTS_FLAGS@@_NHPEAPEAUIInspectable@@@Z
    long _GetImageForItemAsPropertyValue(int, int, int, bool, int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyFromCache@CObservableItem@@AEAAJPEAUHSTRING__@@AEBU_GUID@@PEAPEAX@Z
    long _GetPropertyFromCache(HSTRING__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRemappedPropertyName@CObservableItem@@AEAAJPEBGPEAPEAUHSTRING__@@@Z
    long _GetRemappedPropertyName(unsigned short const *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSystemPropertyHelper@CObservableItem@@AEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    long _GetSystemPropertyHelper(HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTooltipImageStreamForItemAsPropertyValue@CObservableItem@@AEAAJHPEAPEAUIInspectable@@@Z
    long _GetTooltipImageStreamForItemAsPropertyValue(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseImagePropertyParameters@CObservableItem@@AEAAJPEBGPEAW4IMAGE_STREAM_TYPE@@PEAIPEAW4WTS_FLAGS@@PEA_N2@Z
    long _ParseImagePropertyParameters(unsigned short const *, int *, unsigned int *, int *, bool *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParsePropertyNameAndParameters@CObservableItem@@AEAAJPEBGPEAPEAG1@Z
    long _ParsePropertyNameAndParameters(unsigned short const *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveThumbnailEntriesFromCachedProperties@CObservableItem@@AEAAXXZ
    void _RemoveThumbnailEntriesFromCachedProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendItemChangedNotification@CObservableItem@@AEAAJXZ
    long _SendItemChangedNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendPropertyChangedNotification@CObservableItem@@AEAAJAEBU_tagpropertykey@@0@Z
    long _SendPropertyChangedNotification(_tagpropertykey const &, _tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendPropertyChangedNotification@CObservableItem@@AEAAJPEAUHSTRING__@@_NPEA_N@Z
    long _SendPropertyChangedNotification(HSTRING__*, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SupportsPropertyNotifications@CObservableItem@@AEAA_NPEAUIUnknown@@@Z
    bool _SupportsPropertyNotifications(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryGetSystemProperty@CObservableItem@@AEAAJPEBG0PEAPEAUIInspectable@@@Z
    long _TryGetSystemProperty(unsigned short const *, unsigned short const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryRealizeItemsGroup@CObservableItem@@AEAAJXZ
    long _TryRealizeItemsGroup();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CObservableItem@@EEAA@XZ
    virtual ~CObservableItem();
};
