#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class XmlToPropsEngine {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Process@XmlToPropsEngine@@QEAAJPEAUIXmlReader@@HPEBUXMLPROP_ITEM@@PEAUIUnknown@@@Z
    long Process(IXmlReader *, int, XMLPROP_ITEM const *, IUnknown *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConvertStringValueToCanonicalType@XmlToPropsEngine@@IEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@PEAU3@@Z
    long _ConvertStringValueToCanonicalType(_tagpropertykey const &, tagPROPVARIANT const &, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindMappedElementItem@XmlToPropsEngine@@IEAAPEBUXMLPROP_ITEM@@PEBG@Z
    XMLPROP_ITEM const * _FindMappedElementItem(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessAttributes@XmlToPropsEngine@@IEAAJPEAVCOpenMetadataProp@@@Z
    long _ProcessAttributes(COpenMetadataProp *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessElement@XmlToPropsEngine@@IEAAJPEBUXMLPROP_ITEM@@H@Z
    long _ProcessElement(XMLPROP_ITEM const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessElementChildren@XmlToPropsEngine@@IEAAJPEBUXMLPROP_ITEM@@PEAVCOpenMetadataProp@@@Z
    long _ProcessElementChildren(XMLPROP_ITEM const *, COpenMetadataProp *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveStringValueIntoPropStore@XmlToPropsEngine@@IEAAJPEBUXMLPROP_ITEM@@@Z
    long _SaveStringValueIntoPropStore(XMLPROP_ITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveValueIntoPropStore@XmlToPropsEngine@@IEAAJPEBUXMLPROP_ITEM@@PEBGG@Z
    long _SaveValueIntoPropStore(XMLPROP_ITEM const *, unsigned short const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StoreUnmappedEntity@XmlToPropsEngine@@IEAAJW4XmlNodeType@@@Z
    long _StoreUnmappedEntity(int);
};
