#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 28 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CTemplateBackground {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CTemplateBackground@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTemplateBackground@@QEAA@XZ
    CTemplateBackground();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CTemplateBackground@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIDsOfNames@CTemplateBackground@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfo@CTemplateBackground@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfoCount@CTemplateBackground@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CTemplateBackground@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PE Export
    // Symbol: ?LayoutInitialized@CTemplateBackground@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PE Export
    // Symbol: ?Notify@CTemplateBackground@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CTemplateBackground@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PE Export
    // Symbol: ?OnNavigateAway@CTemplateBackground@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTemplateBackground@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CTemplateBackground@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CTemplateBackground@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConnectToView@CTemplateBackground@@AEAAJH@Z
    long _ConnectToView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFolderType@CTemplateBackground@@AEAAJXZ
    long _SetFolderType();
};
