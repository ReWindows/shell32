#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class CCIDGroupControl {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CCIDGroupControl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CCIDGroupControl@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CCIDGroupControl@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CCIDGroupControl@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCIDGroupControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CCIDGroupControl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppControl@CCIDGroupControl@@QEAAJPEAUIAppControl@@@Z
    long SetAppControl(IAppControl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlId@CCIDGroupControl@@QEAAJPEBG@Z
    long SetControlId(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLabelEnabled@CCIDGroupControl@@UEAAJH@Z
    virtual long SetLabelEnabled(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLabelId@CCIDGroupControl@@QEAAJPEBG@Z
    long SetLabelId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLabelText@CCIDGroupControl@@UEAAJPEBG@Z
    virtual long SetLabelText(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLabelVisible@CCIDGroupControl@@UEAAJH@Z
    virtual long SetLabelVisible(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCIDGroupControl@@UEAA@XZ
    virtual ~CCIDGroupControl();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLabelColor@CCIDGroupControl@@AEAAXXZ
    void SetLabelColor();
};
