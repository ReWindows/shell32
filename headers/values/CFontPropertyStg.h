#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CFontPropertyStg {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFontPropertyStg@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFontPropertyStg@@QEAA@PEAVCFontPropertySetStg@@AEBU_GUID@@@Z
    CFontPropertyStg(CFontPropertySetStg *, _GUID const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Commit@CFontPropertyStg@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?DeleteMultiple@CFontPropertyStg@@UEAAJKQEBUtagPROPSPEC@@@Z
    virtual long DeleteMultiple(unsigned long, tagPROPSPEC const * const);
    // Category: Method | Source: PE Export
    // Symbol: ?DeletePropertyNames@CFontPropertyStg@@UEAAJKQEBK@Z
    virtual long DeletePropertyNames(unsigned long, unsigned long const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enum@CFontPropertyStg@@UEAAJPEAPEAUIEnumSTATPROPSTG@@@Z
    virtual long Enum(IEnumSTATPROPSTG * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFontPropertyStg@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadMultiple@CFontPropertyStg@@UEAAJKQEBUtagPROPSPEC@@QEAUtagPROPVARIANT@@@Z
    virtual long ReadMultiple(unsigned long, tagPROPSPEC const * const, tagPROPVARIANT * const);
    // Category: Method | Source: PE Export
    // Symbol: ?ReadPropertyNames@CFontPropertyStg@@UEAAJKQEBKQEAPEAG@Z
    virtual long ReadPropertyNames(unsigned long, unsigned long const * const, unsigned short * * const);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFontPropertyStg@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Revert@CFontPropertyStg@@UEAAJXZ
    virtual long Revert();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClass@CFontPropertyStg@@UEAAJAEBU_GUID@@@Z
    virtual long SetClass(_GUID const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTimes@CFontPropertyStg@@UEAAJPEBU_FILETIME@@00@Z
    virtual long SetTimes(_FILETIME const *, _FILETIME const *, _FILETIME const *);
    // Category: Method | Source: PE Export
    // Symbol: ?Stat@CFontPropertyStg@@UEAAJPEAUtagSTATPROPSETSTG@@@Z
    virtual long Stat(tagSTATPROPSETSTG *);
    // Category: Method | Source: PE Export
    // Symbol: ?WriteMultiple@CFontPropertyStg@@UEAAJKQEBUtagPROPSPEC@@QEBUtagPROPVARIANT@@K@Z
    virtual long WriteMultiple(unsigned long, tagPROPSPEC const * const, tagPROPVARIANT const * const, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?WritePropertyNames@CFontPropertyStg@@UEAAJKQEBKQEBQEAG@Z
    virtual long WritePropertyNames(unsigned long, unsigned long const * const, unsigned short * const * const);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?_ReadProp@CFontPropertyStg@@AEAAJPEBUtagPROPSPEC@@PEAUtagPROPVARIANT@@@Z
    long _ReadProp(tagPROPSPEC const *, tagPROPVARIANT *);
};
