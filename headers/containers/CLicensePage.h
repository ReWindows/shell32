#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CLicensePage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPages@CLicensePage@@UEAAJP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPages(int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLicensePage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CLicensePage@@SAJPEAUIShellItemArray@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IShellItemArray *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLicensePage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLicensePage@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ReplacePage@CLicensePage@@UEAAJIP6AHPEAU_PSP@@_J@Z1@Z
    virtual long ReplacePage(unsigned int, int ( *)(_PSP *, int64_t), int64_t);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLicensePage@@AEAA@XZ
    CLicensePage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitDialog@CLicensePage@@AEAA_JXZ
    int64_t _OnInitDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DlgProc@CLicensePage@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PageCallback@CLicensePage@@CAIPEAUHWND__@@IPEAU_PROPSHEETPAGEW@@@Z
    static unsigned int s_PageCallback(HWND__*, unsigned int, _PROPSHEETPAGEW *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLicensePage@@AEAA@XZ
    ~CLicensePage();
};
