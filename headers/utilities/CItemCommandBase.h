#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 70 member(s).
class CItemCommandBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemCommandBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CItemCommandBase@@QEAA@XZ
    CItemCommandBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExecute@CItemCommandBase@@UEAAJPEAUIInspectable@@PEAE@Z
    virtual long CanExecute(IInspectable *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChangeCount@CItemCommandBase@@UEAAJPEAI@Z
    virtual long GetChangeCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomProperty@CItemCommandBase@@UEAAJPEAUHSTRING__@@PEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    virtual long GetCustomProperty(HSTRING__*, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CItemCommandBase@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedProperty@CItemCommandBase@@UEAAJPEAUHSTRING__@@UTypeName@Interop@Xaml@UI@Windows@@PEAPEAUICustomProperty@Data@567@@Z
    virtual long GetIndexedProperty(HSTRING__*, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemIDList@CItemCommandBase@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetItemIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CItemCommandBase@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetPropertyValue(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CItemCommandBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringRepresentation@CItemCommandBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetStringRepresentation(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CItemCommandBase@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CItemCommandBase@@UEAAJPEAUIUICommand@Popups@UI@Windows@@@Z
    virtual long Invoke(::Windows::UI::Popups::IUICommand *);
    // Category: Method | Source: PE Export
    // Symbol: ?NotifyPropertyChanged@CItemCommandBase@@UEAAJPEAUHSTRING__@@@Z
    virtual long NotifyPropertyChanged(HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemCommandBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlacement@CItemCommandBase@@UEAAJPEBUtagRECT@@K@Z
    virtual long SetPlacement(tagRECT const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CanExecuteChanged@CItemCommandBase@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CanExecuteChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Command@CItemCommandBase@@UEAAJPEAPEAUICommand@Input@Xaml@UI@Windows@@@Z
    virtual long get_Command(::Windows::UI::Xaml::Input::ICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandId@CItemCommandBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CommandId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Glyph@CItemCommandBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Glyph(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GlyphFontSize@CItemCommandBase@@UEAAJPEAI@Z
    virtual long get_GlyphFontSize(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@CItemCommandBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Label(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CItemCommandBase@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_Type(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UICommand@CItemCommandBase@@UEAAJPEAPEAUIUICommand@Popups@UI@Windows@@@Z
    virtual long get_UICommand(::Windows::UI::Popups::IUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Label@CItemCommandBase@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Label(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CanExecuteChanged@CItemCommandBase@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CanExecuteChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureObservableFactory@CItemCommandBase@@IEAAJXZ
    long _EnsureObservableFactory();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemCommandBase@@MEAA@XZ
    virtual ~CItemCommandBase();
};
