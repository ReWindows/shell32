#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CXmlEntity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateUnmappedEntity@CXmlEntity@@SAJPEAUIXmlReader@@W4XmlNodeType@@PEAPEAV1@@Z
    static long s_CreateUnmappedEntity(IXmlReader *, int, CXmlEntity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ReadName@CXmlEntity@@SAJPEAUIXmlReader@@PEAPEAG@Z
    static long s_ReadName(IXmlReader *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ReadPrefix@CXmlEntity@@SAJPEAUIXmlReader@@PEAPEAG@Z
    static long s_ReadPrefix(IXmlReader *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ReadText@CXmlEntity@@SAJPEAUIXmlReader@@PEAPEAG@Z
    static long s_ReadText(IXmlReader *, unsigned short * *);
};
