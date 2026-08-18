#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CXPContext {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CXPContext@@QEAA@PEAUIUnknown@@@Z
    CXPContext(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentIndex@CXPContext@@QEAAJPEBUXMLPROP_ITEM@@PEAI@Z
    long GetCurrentIndex(XMLPROP_ITEM const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextIndex@CXPContext@@QEAAJPEBUXMLPROP_ITEM@@PEAI@Z
    long GetNextIndex(XMLPROP_ITEM const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitForReading@CXPContext@@QEAAJPEAV1@PEBUXMLPROP_ITEM@@PEAUIXmlReader@@H@Z
    long InitForReading(CXPContext *, XMLPROP_ITEM const *, IXmlReader *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitForWriting@CXPContext@@QEAAJPEAV1@PEBUXMLPROP_ITEM@@IPEAVCXmlElement@@@Z
    long InitForWriting(CXPContext *, XMLPROP_ITEM const *, unsigned int, CXmlElement *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXPContext@@QEAA@XZ
    ~CXPContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUnmappedElement@CXPContext@@IEAAJPEBUXMLPROP_ITEM@@PEAUIXmlReader@@IH@Z
    long _CreateUnmappedElement(XMLPROP_ITEM const *, IXmlReader *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureIndex@CXPContext@@IEAAJXZ
    long _EnsureIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUnmappedElement@CXPContext@@IEAAJPEAVCXmlElement@@@Z
    long _SetUnmappedElement(CXmlElement *);
};
