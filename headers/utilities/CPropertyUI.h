#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CPropertyUI {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPropertyUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPropertyUI@@QEAA@XZ
    CPropertyUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatForDisplay@CPropertyUI@@UEAAJAEBU_GUID@@KPEBUtagPROPVARIANT@@KPEAGK@Z
    virtual long FormatForDisplay(_GUID const &, unsigned long, tagPROPVARIANT const *, unsigned long, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCannonicalName@CPropertyUI@@UEAAJAEBU_GUID@@KPEAGK@Z
    virtual long GetCannonicalName(_GUID const &, unsigned long, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultWidth@CPropertyUI@@UEAAJAEBU_GUID@@KPEAK@Z
    virtual long GetDefaultWidth(_GUID const &, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@CPropertyUI@@UEAAJAEBU_GUID@@KKPEAGK@Z
    virtual long GetDisplayName(_GUID const &, unsigned long, unsigned long, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CPropertyUI@@UEAAJAEBU_GUID@@KPEAK@Z
    virtual long GetFlags(_GUID const &, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHelpInfo@CPropertyUI@@UEAAJAEBU_GUID@@KPEAGKPEAI@Z
    virtual long GetHelpInfo(_GUID const &, unsigned long, unsigned short *, unsigned long, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyDescription@CPropertyUI@@UEAAJAEBU_GUID@@KPEAGK@Z
    virtual long GetPropertyDescription(_GUID const &, unsigned long, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParsePropertyName@CPropertyUI@@UEAAJPEBGPEAU_GUID@@PEAK2@Z
    virtual long ParsePropertyName(unsigned short const *, _GUID *, unsigned long *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPropertyUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPropertyUI@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?_NextProp@CPropertyUI@@AEAAJPEBGPEAKPEAGI@Z
    long _NextProp(unsigned short const *, unsigned long *, unsigned short *, unsigned int);
};
