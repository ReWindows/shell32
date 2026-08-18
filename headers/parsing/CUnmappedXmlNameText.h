#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CUnmappedXmlNameText {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXmlMappingType@CUnmappedXmlNameText@@UEBA?AW4XmlMappingType@@XZ
    virtual int GetXmlMappingType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CUnmappedXmlNameText@@UEAAJPEAUIXmlReader@@W4XmlNodeType@@@Z
    virtual long Init(IXmlReader *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CUnmappedXmlNameText@@UEAAJPEAUIXmlWriter@@@Z
    virtual long Write(IXmlWriter *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUnmappedXmlNameText@@UEAA@XZ
    virtual ~CUnmappedXmlNameText();
};
