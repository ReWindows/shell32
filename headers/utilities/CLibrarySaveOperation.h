#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CLibrarySaveOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForExistingLibrary@CLibrarySaveOperation@@SAJPEAUIShellItem@@PEAPEAV1@@Z
    static long CreateForExistingLibrary(IShellItem *, CLibrarySaveOperation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForNewLibrary@CLibrarySaveOperation@@SAJPEBGW4CNLIFLAGS@@PEAUIShellItem@@PEAPEAV1@@Z
    static long CreateForNewLibrary(unsigned short const *, int, IShellItem *, CLibrarySaveOperation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveLibrary@CLibrarySaveOperation@@QEAAJPEAUHWND__@@PEAUILibraryDescription@@W4SLTIFLAGS@@PEAUIShellItemArray@@3@Z
    long SaveLibrary(HWND__*, ILibraryDescription *, int, IShellItemArray *, IShellItemArray *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeNotifySuspendResume@CLibrarySaveOperation@@AEAAXH@Z
    void _ChangeNotifySuspendResume(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRealItems@CLibrarySaveOperation@@AEAAJXZ
    long _EnsureRealItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureStream@CLibrarySaveOperation@@AEAAJW4SLTIFLAGS@@@Z
    long _EnsureStream(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLibrarySaveOperation@@EEAA@XZ
    virtual ~CLibrarySaveOperation();
};
