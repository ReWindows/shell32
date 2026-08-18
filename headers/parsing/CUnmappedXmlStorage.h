#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CUnmappedXmlStorage {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUnmappedXmlStorage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUnmappedXmlStorage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUnmappedXmlStorage@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CUnmappedXmlStorage@@SAJPEBUXMLPROP_ITEM@@PEAPEAV1@@Z
    static long s_CreateInstance(XMLPROP_ITEM const *, CUnmappedXmlStorage * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUnmappedXmlStorage@@AEAA@XZ
    ~CUnmappedXmlStorage();
};
