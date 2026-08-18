#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class ElementWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ElementWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ElementWrapper@@QEAA@PEAVElement@DirectUI@@@Z
    ElementWrapper(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@ElementWrapper@@UEAAJPEAPEAX@Z
    virtual long GetElement(void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ElementWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ElementWrapper@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ElementWrapper@@IEAA@XZ
    ~ElementWrapper();
};
