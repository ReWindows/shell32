#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CMappedXmlElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXmlMappingType@CMappedXmlElement@@UEBA?AW4XmlMappingType@@XZ
    virtual int GetXmlMappingType() const;
    // Category: Method | Source: PE Export
    // Symbol: ?Init@CMappedXmlElement@@UEAAJPEAUIXmlReader@@W4XmlNodeType@@@Z
    virtual long Init(IXmlReader *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?Write@CMappedXmlElement@@UEAAJPEAUIXmlWriter@@@Z
    virtual long Write(IXmlWriter *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMappedXmlElement@@UEAA@XZ
    virtual ~CMappedXmlElement();
};
