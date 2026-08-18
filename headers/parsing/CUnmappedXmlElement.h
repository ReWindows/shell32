#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CUnmappedXmlElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXmlMappingType@CUnmappedXmlElement@@UEBA?AW4XmlMappingType@@XZ
    virtual int GetXmlMappingType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CUnmappedXmlElement@@UEAAJPEAUIXmlReader@@W4XmlNodeType@@@Z
    virtual long Init(IXmlReader *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CUnmappedXmlElement@@UEAAJPEAUIXmlWriter@@@Z
    virtual long Write(IXmlWriter *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUnmappedXmlElement@@UEAA@XZ
    virtual ~CUnmappedXmlElement();
};
