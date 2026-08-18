#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 21 member(s).
class CMetadataExtractorWorkItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CMetadataExtractorWorkItem@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CMetadataExtractorWorkItem@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInfo@CMetadataExtractorWorkItem@@QEAAJPEAVCPreviewMetadataInner@@HPEBG1PEAUIPropertyStoreCache@@PEAUIShellItemArray@@KKPEAUIUnknown@@HH@Z
    long SetInfo(CPreviewMetadataInner *, int, unsigned short const *, unsigned short const *, IPropertyStoreCache *, IShellItemArray *, unsigned long, unsigned long, IUnknown *, int, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddFileCount@CMetadataExtractorWorkItem@@IEAAJK@Z
    long _AddFileCount(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddKeyAndValueToPropArray@CMetadataExtractorWorkItem@@IEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@W4PROPDESC_VIEW_FLAGS@@H@Z
    long _AddKeyAndValueToPropArray(_tagpropertykey const &, tagPROPVARIANT const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddListToPropArray@CMetadataExtractorWorkItem@@IEAAXPEAUIPropertyStore@@PEAUIPropertyDescriptionList@@PEAUIPropertyStoreCache@@PEAH@Z
    void _AddListToPropArray(IPropertyStore *, IPropertyDescriptionList *, IPropertyStoreCache *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSaveCancel@CMetadataExtractorWorkItem@@IEAAJPEAVDUIXmlParser@DirectUI@@@Z
    long _AddSaveCancel(::DirectUI::DUIXmlParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSpacer@CMetadataExtractorWorkItem@@IEAAJPEAVDUIXmlParser@DirectUI@@@Z
    long _AddSpacer(::DirectUI::DUIXmlParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTitle@CMetadataExtractorWorkItem@@IEAAKHKPEBG0PEAVDUIXmlParser@DirectUI@@@Z
    unsigned long _AddTitle(int, unsigned long, unsigned short const *, unsigned short const *, ::DirectUI::DUIXmlParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTitleRow@CMetadataExtractorWorkItem@@IEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@PEBG2HPEAVDUIXmlParser@DirectUI@@@Z
    long _AddTitleRow(_tagpropertykey const &, tagPROPVARIANT const &, unsigned short const *, unsigned short const *, int, ::DirectUI::DUIXmlParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTitleToPropArray@CMetadataExtractorWorkItem@@IEAAJPEAUIShellItem@@PEAUIPropertyStore@@PEAUIPropertyDescription@@@Z
    long _AddTitleToPropArray(IShellItem *, IPropertyStore *, IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToPropArray@CMetadataExtractorWorkItem@@IEAAJPEAUIPropertyStore@@PEAUIPropertyDescription@@PEAUIPropertyStoreCache@@PEAH@Z
    long _AddToPropArray(IPropertyStore *, IPropertyDescription *, IPropertyStoreCache *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeItemReadOnly@CMetadataExtractorWorkItem@@IEAAHPEAUIShellItemArray@@@Z
    int _ComputeItemReadOnly(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractNullSelection@CMetadataExtractorWorkItem@@IEAAXK@Z
    void _ExtractNullSelection(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractSelection@CMetadataExtractorWorkItem@@IEAAXKPEAUIShellItemArray@@@Z
    void _ExtractSelection(unsigned long, IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValue@CMetadataExtractorWorkItem@@IEAAJPEAUIPropertyStoreCache@@PEAUIPropertyStore@@U_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    long _GetValue(IPropertyStoreCache *, IPropertyStore *, _tagpropertykey, tagPROPVARIANT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMetadataExtractorWorkItem@@MEAA@XZ
    virtual ~CMetadataExtractorWorkItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddDUIUSBElement@CMetadataExtractorWorkItem@@AEAAXPEBGPEAVDUIXmlParser@DirectUI@@@Z
    void _AddDUIUSBElement(unsigned short const *, ::DirectUI::DUIXmlParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisplayUSB3Info@CMetadataExtractorWorkItem@@AEAAXPEAVDUIXmlParser@DirectUI@@@Z
    void _DisplayUSB3Info(::DirectUI::DUIXmlParser *);
};
