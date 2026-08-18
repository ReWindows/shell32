#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CXmlElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@CXmlElement@@QEAAJPEAVCXmlEntity@@@Z
    long AddChild(CXmlEntity *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChildMappedElem@CXmlElement@@QEAAJPEBUXMLPROP_ITEM@@PEAPEAV1@@Z
    long AddChildMappedElem(XMLPROP_ITEM const *, CXmlElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChildUnmappedElem@CXmlElement@@QEAAJPEAUIXmlReader@@PEAPEAV1@@Z
    long AddChildUnmappedElem(IXmlReader *, CXmlElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMappedChild@CXmlElement@@QEAAPEAVCMappedXmlElement@@PEBUXMLPROP_ITEM@@PEBGPEAH@Z
    CMappedXmlElement * FindMappedChild(XMLPROP_ITEM const *, unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamespaceUriFromAttribute@CXmlElement@@QEAAPEBGPEBG@Z
    unsigned short const * GetNamespaceUriFromAttribute(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComments@CXmlElement@@QEAAJPEAV1@@Z
    long SetComments(CXmlElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAttributes@CXmlElement@@QEAAJPEAUIXmlWriter@@@Z
    long WriteAttributes(IXmlWriter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteHeaderComments@CXmlElement@@QEAAJPEAUIXmlWriter@@@Z
    long WriteHeaderComments(IXmlWriter *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXmlElement@@UEAA@XZ
    virtual ~CXmlElement();
};
