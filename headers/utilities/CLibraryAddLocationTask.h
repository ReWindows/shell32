#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CLibraryAddLocationTask {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLibraryAddLocationTask@@QEAA@XZ
    CLibraryAddLocationTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferActivity@CLibraryAddLocationTask@@QEAAXAEAVAddLibraryLocation@LibraryTelemetry@@@Z
    void TransferActivity(::LibraryTelemetry::AddLibraryLocation &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandInNavigationPane@CLibraryAddLocationTask@@QEAAXPEAUIShellItem@@@Z
    void _ExpandInNavigationPane(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CLibraryAddLocationTask@@QEAAJPEAUHWND__@@PEAUIUnknown@@PEAUIShellItem@@@Z
    long _Initialize(HWND__*, IUnknown *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LibraryAddLocation@CLibraryAddLocationTask@@QEAAXXZ
    void _LibraryAddLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LibraryAddLocation@CLibraryAddLocationTask@@SAKPEAX@Z
    static unsigned long s_LibraryAddLocation(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLibraryAddLocationTask@@QEAA@XZ
    ~CLibraryAddLocationTask();
};
