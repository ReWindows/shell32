#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CAssocListBase {
public:
    class ASSOC_ELEMENT;
    class CAssocListBaseEnum;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAssocListBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CAssocListBase@@UEAAJAEBU_GUID@@PEBG@Z
    virtual long Append(_GUID const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAssocElement@CAssocListBase@@UEAAJPEAUIAssociationElement@@@Z
    virtual long AppendAssocElement(IAssociationElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateElements@CAssocListBase@@UEAAJPEAPEAUIEnumerateAssociationElements@@@Z
    virtual long EnumerateElements(IEnumerateAssociationElements * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAssocElementAtFront@CAssocListBase@@UEAAJPEAUIAssociationElement@@@Z
    virtual long InsertAssocElementAtFront(IAssociationElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAtFront@CAssocListBase@@UEAAJAEBU_GUID@@PEBG@Z
    virtual long InsertAtFront(_GUID const &, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAssocListBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAssocListBase@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAssocListBase@@MEAA@XZ
    virtual ~CAssocListBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePopulatedAndOrdered@CAssocListBase@@AEAAJXZ
    long _EnsurePopulatedAndOrdered();
};
