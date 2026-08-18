#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 28 member(s).
class CDeskHtmlProp {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPages@CDeskHtmlProp@@UEAAJP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPages(int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDeskHtmlProp@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdvancedDialog@CDeskHtmlProp@@UEAAJPEAPEAUIAdvancedDialog@@@Z
    virtual long GetAdvancedDialog(IAdvancedDialog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CDeskHtmlProp@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDeskHtmlProp@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApply@CDeskHtmlProp@@UEAAJW4tagPropPageOnApply@@@Z
    virtual long OnApply(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDeskHtmlProp@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CDeskHtmlProp@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDeskHtmlProp@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ReplacePage@CDeskHtmlProp@@UEAAJIP6AHPEAU_PSP@@_J@Z1@Z
    virtual long ReplacePage(unsigned int, int ( *)(_PSP *, int64_t), int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CDeskHtmlProp@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CDeskHtmlProp@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitBackgroundTab@CDeskHtmlProp@@AEAAJXZ
    long _InitBackgroundTab();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeskHtmlProp@@EEAA@XZ
    virtual ~CDeskHtmlProp();
};
