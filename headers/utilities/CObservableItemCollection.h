#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 133 member(s).
class CObservableItemCollection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CObservableItemCollection@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CObservableItemCollection@@UEAAJPEAUIInspectable@@@Z
    virtual long Append(IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CObservableItemCollection@@QEAA@XZ
    CObservableItemCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CObservableItemCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CObservableItemCollection@@UEAAJPEAPEAUIBindableIterator@Interop@Xaml@UI@Windows@@@Z
    virtual long First(::Windows::UI::Xaml::Interop::IBindableIterator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CObservableItemCollection@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChangeCount@CObservableItemCollection@@UEAAJPEAI@Z
    virtual long GetChangeCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomProperty@CObservableItemCollection@@UEAAJPEAUHSTRING__@@PEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    virtual long GetCustomProperty(HSTRING__*, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CObservableItemCollection@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedProperty@CObservableItemCollection@@UEAAJPEAUHSTRING__@@UTypeName@Interop@Xaml@UI@Windows@@PEAPEAUICustomProperty@Data@567@@Z
    virtual long GetIndexedProperty(HSTRING__*, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCollection@CObservableItemCollection@@UEAAJPEAPEAUIItemCollection@@@Z
    virtual long GetItemCollection(IItemCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CObservableItemCollection@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetPropertyValue(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CObservableItemCollection@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringRepresentation@CObservableItemCollection@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetStringRepresentation(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CObservableItemCollection@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@CObservableItemCollection@@UEAAJPEAPEAUIBindableVectorView@Interop@Xaml@UI@Windows@@@Z
    virtual long GetView(::Windows::UI::Xaml::Interop::IBindableVectorView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CObservableItemCollection@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CObservableItemCollection@@UEAAJPEAUIInspectable@@PEAIPEAE@Z
    virtual long IndexOf(IInspectable *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@CObservableItemCollection@@UEAAJIPEAUIInspectable@@@Z
    virtual long InsertAt(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CObservableItemCollection@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CObservableItemCollection@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPropertyChanged@CObservableItemCollection@@UEAAJPEAUHSTRING__@@@Z
    virtual long NotifyPropertyChanged(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAsyncResetTaskComplete@CObservableItemCollection@@UEAAJIIJPEAV?$CLocalSimpleArray@UTranslateResetEvent@@$0PPPPPPPO@@@@Z
    virtual long OnAsyncResetTaskComplete(unsigned int, unsigned int, long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelled@CObservableItemCollection@@UEAAJXZ
    virtual long OnCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CObservableItemCollection@@UEAAJIW4COLLECTION_CHANGE_STATE@@@Z
    virtual long OnCollectionChanged(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetCountDone@CObservableItemCollection@@UEAAJIW4COUNT_TYPE@@J@Z
    virtual long OnGetCountDone(unsigned int, int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMoved@CObservableItemCollection@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemMoved(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTranslated@CObservableItemCollection@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemTranslated(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@CObservableItemCollection@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsAdded(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsDeleted@CObservableItemCollection@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsDeleted(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPrepareDone@CObservableItemCollection@@UEAAJIJ@Z
    virtual long OnPrepareDone(unsigned int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniqueLeafCountChanged@CObservableItemCollection@@UEAAJXZ
    virtual long OnUniqueLeafCountChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CObservableItemCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CObservableItemCollection@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CObservableItemCollection@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@CObservableItemCollection@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CObservableItemCollection@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@CObservableItemCollection@@UEAAJIPEAUIInspectable@@@Z
    virtual long SetAt(unsigned int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomPropertyProvider@CObservableItemCollection@@UEAAJW4CustomPropertyProviderType@Storage@Internal@Windows@@PEAUICustomPropertyProvider@Data@Xaml@UI@5@@Z
    virtual long SetCustomPropertyProvider(int, ::Windows::UI::Xaml::Data::ICustomPropertyProvider *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomPropertyProviderFactory@CObservableItemCollection@@UEAAJPEAUICustomPropertyProviderFactory@Storage@Internal@Windows@@@Z
    virtual long SetCustomPropertyProviderFactory(::Windows::Internal::Storage::ICustomPropertyProviderFactory *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemCollection@CObservableItemCollection@@UEAAJW4ITEM_COLLECTION_FLAGS@@PEAUIItemCollection@@@Z
    virtual long SetItemCollection(int, IItemCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemValueProvider@CObservableItemCollection@@UEAAJPEAUIItemValueProvider@Storage@Internal@Windows@@@Z
    virtual long SetItemValueProvider(::Windows::Internal::Storage::IItemValueProvider *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemValueProviderFactory@CObservableItemCollection@@UEAAJPEAUIItemValueProviderFactory@Storage@Internal@Windows@@@Z
    virtual long SetItemValueProviderFactory(::Windows::Internal::Storage::IItemValueProviderFactory *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CObservableItemCollection@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@CObservableItemCollection@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@CObservableItemCollection@@UEAAJPEAUIPropertyChangedEventHandler@Data@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PropertyChanged(::Windows::UI::Xaml::Data::IPropertyChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VectorChanged@CObservableItemCollection@@UEAAJPEAUIBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VectorChanged(::Windows::UI::Xaml::Interop::IBindableVectorChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSizeRealized@CObservableItemCollection@@UEAAJPEAE@Z
    virtual long get_IsSizeRealized(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CObservableItemCollection@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CObservableItemCollection@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_Type(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@CObservableItemCollection@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PropertyChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VectorChanged@CObservableItemCollection@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VectorChanged(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearItemCache@CObservableItemCollection@@AEAAXJII@Z
    void _ClearItemCache(long, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyCacheEntriesForHandlingReset@CObservableItemCollection@@AEAAJPEAPEAUIObjectCollection@@@Z
    long _CopyCacheEntriesForHandlingReset(IObjectCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCachedItemAt@CObservableItemCollection@@AEAAJIPEAPEAUIObjectWithItem@@@Z
    long _GetCachedItemAt(unsigned int, IObjectWithItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentSizeAndVersion@CObservableItemCollection@@AEAAJPEAI0@Z
    long _GetCurrentSizeAndVersion(unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentVersion@CObservableItemCollection@@AEAAJPEAI@Z
    long _GetCurrentVersion(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItem@CObservableItemCollection@@AEAAJIIPEAPEAUIInspectable@@@Z
    long _GetItem(unsigned int, unsigned int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSnapshotSize@CObservableItemCollection@@AEAAJPEAI@Z
    long _GetSnapshotSize(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleCollectionResetEvent@CObservableItemCollection@@AEAAJXZ
    long _HandleCollectionResetEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendItemChanged@CObservableItemCollection@@AEAAXI@Z
    void _SendItemChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendPropertyChangedNotification@CObservableItemCollection@@AEAAJPEBG@Z
    long _SendPropertyChangedNotification(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIsLoadingCountFlag@CObservableItemCollection@@AEAAX_N@Z
    void _SetIsLoadingCountFlag(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetWindowOnItem@CObservableItemCollection@@AEAAXPEAUIUnknown@@@Z
    void _SetWindowOnItem(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CObservableItemCollection@@EEAA@XZ
    virtual ~CObservableItemCollection();
};
