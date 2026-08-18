#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CUnmappedXmlString {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetXmlMappingType@CUnmappedXmlString@@UEBA?AW4XmlMappingType@@XZ
    virtual int GetXmlMappingType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CUnmappedXmlString@@UEAAJPEAUIXmlReader@@W4XmlNodeType@@@Z
    virtual long Init(IXmlReader *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CUnmappedXmlString@@UEAAJPEAUIXmlWriter@@@Z
    virtual long Write(IXmlWriter *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUnmappedXmlString@@UEAA@XZ
    virtual ~CUnmappedXmlString();
};
