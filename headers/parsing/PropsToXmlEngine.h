#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class PropsToXmlEngine {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CollectExplicitlyMappedNamedProps@PropsToXmlEngine@@IEAAJPEBUXMLPROP_ITEM@@AEAV?$CDPA@$$CBGV?$CTContainer_PolicyUnOwned@$$CBG@@@@@Z
    long _CollectExplicitlyMappedNamedProps(XMLPROP_ITEM const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CollectWrittenNamedProps@PropsToXmlEngine@@IEAAJPEBUXMLPROP_ITEM@@AEAV?$CDPA@$$CBGV?$CTContainer_PolicyUnOwned@$$CBG@@@@@Z
    long _CollectWrittenNamedProps(XMLPROP_ITEM const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetElementNamespaceUriFromPS@PropsToXmlEngine@@IEAAJPEAVCXPContext@@PEAUtagPROPVARIANT@@@Z
    long _GetElementNamespaceUriFromPS(CXPContext *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropValue@PropsToXmlEngine@@IEAAJPEBUXMLPROP_ITEM@@PEBGPEAUtagPROPVARIANT@@@Z
    long _GetPropValue(XMLPROP_ITEM const *, unsigned short const *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteAttributes@PropsToXmlEngine@@IEAAJPEBUXMLPROP_ITEM@@PEBGAEBUtagPROPVARIANT@@@Z
    long _WriteAttributes(XMLPROP_ITEM const *, unsigned short const *, tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteItemStartElement@PropsToXmlEngine@@IEAAJPEAVCXPContext@@PEBG1@Z
    long _WriteItemStartElement(CXPContext *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteNode@PropsToXmlEngine@@IEAAJPEBUXMLPROP_ITEM@@PEBGIPEAVCXmlElement@@@Z
    long _WriteNode(XMLPROP_ITEM const *, unsigned short const *, unsigned int, CXmlElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteNode@PropsToXmlEngine@@IEAAJPEBUXMLPROP_ITEM@@PEBGIPEAVCXmlElement@@H@Z
    long _WriteNode(XMLPROP_ITEM const *, unsigned short const *, unsigned int, CXmlElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WritePendingElement@PropsToXmlEngine@@IEAAJPEAVCXPContext@@@Z
    long _WritePendingElement(CXPContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WritePropAttributeString@PropsToXmlEngine@@IEAAJPEBG00@Z
    long _WritePropAttributeString(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WritePropvarAttrib@PropsToXmlEngine@@IEAAJPEBGPEAUtagPROPVARIANT@@@Z
    long _WritePropvarAttrib(unsigned short const *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteRemainingOpenProps@PropsToXmlEngine@@IEAAJPEBUXMLPROP_ITEM@@@Z
    long _WriteRemainingOpenProps(XMLPROP_ITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteSubNodes@PropsToXmlEngine@@IEAAJPEBUXMLPROP_ITEM@@@Z
    long _WriteSubNodes(XMLPROP_ITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_PropVarToStringPropVar@PropsToXmlEngine@@KAJPEAUtagPROPVARIANT@@@Z
    static long _s_PropVarToStringPropVar(tagPROPVARIANT *);
};
