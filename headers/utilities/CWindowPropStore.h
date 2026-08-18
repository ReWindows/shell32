#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CWindowPropStore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWindowPropStore@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?Commit@CWindowPropStore@@UEAAJXZ
    virtual long Commit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CWindowPropStore@@UEAAJKPEAU_tagpropertykey@@@Z
    virtual long GetAt(unsigned long, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CWindowPropStore@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CWindowPropStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CWindowPropStore@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWindowPropStore@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWindowPropStore@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CWindowPropStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetValue(_tagpropertykey const &, tagPROPVARIANT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@CWindowPropStore@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindow(HWND__*);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowPropStore@@AEAA@XZ
    CWindowPropStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTaskBandWindow@CWindowPropStore@@AEAAPEAUHWND__@@XZ
    HWND__* _GetTaskBandWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PropEnumProcEx@CWindowPropStore@@CAHPEAUHWND__@@PEAGPEAX_K@Z
    static int s_PropEnumProcEx(HWND__*, unsigned short *, void *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowPropStore@@AEAA@XZ
    ~CWindowPropStore();
};
