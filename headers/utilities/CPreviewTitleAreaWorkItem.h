#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CPreviewTitleAreaWorkItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CPreviewTitleAreaWorkItem@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CPreviewTitleAreaWorkItem@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInfo@CPreviewTitleAreaWorkItem@@QEAAJPEAVCPreviewTitleAreaInner@@PEBGPEAUIPropertyStoreCache@@PEAUIShellItemArray@@KKPEAUIUnknown@@@Z
    long SetInfo(CPreviewTitleAreaInner *, unsigned short const *, IPropertyStoreCache *, IShellItemArray *, unsigned long, unsigned long, IUnknown *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddFileCount@CPreviewTitleAreaWorkItem@@IEAAJK@Z
    long _AddFileCount(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddKeyAndValueToPropArray@CPreviewTitleAreaWorkItem@@IEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@W4PROPDESC_VIEW_FLAGS@@@Z
    long _AddKeyAndValueToPropArray(_tagpropertykey const &, tagPROPVARIANT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddListToPropArray@CPreviewTitleAreaWorkItem@@IEAAXPEAUIPropertyStore@@PEAUIPropertyDescriptionList@@PEAUIPropertyStoreCache@@@Z
    void _AddListToPropArray(IPropertyStore *, IPropertyDescriptionList *, IPropertyStoreCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSpacer@CPreviewTitleAreaWorkItem@@IEAAJPEAVElement@DirectUI@@PEBGPEAVDUIXmlParser@3@@Z
    long _AddSpacer(::DirectUI::Element *, unsigned short const *, ::DirectUI::DUIXmlParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTitle@CPreviewTitleAreaWorkItem@@IEAAK_NKHPEBG11PEAVDUIXmlParser@DirectUI@@@Z
    unsigned long _AddTitle(bool, unsigned long, int, unsigned short const *, unsigned short const *, unsigned short const *, ::DirectUI::DUIXmlParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTitleRow@CPreviewTitleAreaWorkItem@@IEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@PEBG2PEAVDUIXmlParser@DirectUI@@@Z
    long _AddTitleRow(_tagpropertykey const &, tagPROPVARIANT const &, unsigned short const *, unsigned short const *, ::DirectUI::DUIXmlParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTitleToPropArray@CPreviewTitleAreaWorkItem@@IEAAJPEAUIShellItem@@PEAUIPropertyStore@@PEAUIPropertyDescription@@@Z
    long _AddTitleToPropArray(IShellItem *, IPropertyStore *, IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToPropArray@CPreviewTitleAreaWorkItem@@IEAAJPEAUIPropertyStore@@PEAUIPropertyDescription@@PEAUIPropertyStoreCache@@@Z
    long _AddToPropArray(IPropertyStore *, IPropertyDescription *, IPropertyStoreCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractNullSelection@CPreviewTitleAreaWorkItem@@IEAAXK@Z
    void _ExtractNullSelection(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractSelection@CPreviewTitleAreaWorkItem@@IEAAXKPEAUIShellItemArray@@@Z
    void _ExtractSelection(unsigned long, IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValue@CPreviewTitleAreaWorkItem@@IEAAJPEAUIPropertyStoreCache@@PEAUIPropertyStore@@U_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    long _GetValue(IPropertyStoreCache *, IPropertyStore *, _tagpropertykey, tagPROPVARIANT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPreviewTitleAreaWorkItem@@MEAA@XZ
    virtual ~CPreviewTitleAreaWorkItem();
};
