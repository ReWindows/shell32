#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CCDBurnGlobalSettingsDialog {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCDBurnGlobalSettingsDialog@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCDBurnGlobalSettingsDialog@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCDBurnGlobalSettingsDialog@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CCDBurnGlobalSettingsDialog@@UEAAJPEAUHWND__@@H@Z
    virtual long Show(HWND__*, int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCDBurnGlobalSettingsDialog@@AEAA@XZ
    CCDBurnGlobalSettingsDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDialogCreated@CCDBurnGlobalSettingsDialog@@AEAAXPEAUHWND__@@@Z
    void _OnDialogCreated(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOkClicked@CCDBurnGlobalSettingsDialog@@AEAAJPEAUHWND__@@@Z
    long _OnOkClicked(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CDBurnGlobalSettingsDialogCallbackProc@CCDBurnGlobalSettingsDialog@@CAJPEAUHWND__@@I_K_J2@Z
    static long s_CDBurnGlobalSettingsDialogCallbackProc(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
};
