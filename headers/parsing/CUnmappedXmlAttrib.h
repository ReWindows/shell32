#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CUnmappedXmlAttrib {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXmlMappingType@CUnmappedXmlAttrib@@UEBA?AW4XmlMappingType@@XZ
    virtual int GetXmlMappingType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CUnmappedXmlAttrib@@UEAAJPEAUIXmlReader@@W4XmlNodeType@@@Z
    virtual long Init(IXmlReader *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNamespaceUri@CUnmappedXmlAttrib@@QEBA_NPEBG@Z
    bool IsNamespaceUri(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CUnmappedXmlAttrib@@UEAAJPEAUIXmlWriter@@@Z
    virtual long Write(IXmlWriter *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUnmappedXmlAttrib@@UEAA@XZ
    virtual ~CUnmappedXmlAttrib();
};
