#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CSaveLocationsTask {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLibraryIcon@CSaveLocationsTask@@QEAAJPEBGJ@Z
    long SetLibraryIcon(unsigned short const *, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLibraryLocations@CSaveLocationsTask@@QEAAJPEAUIShellItemArray@@HH@Z
    long SetLibraryLocations(IShellItemArray *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CSaveLocationsTask@@SAJPEAUHWND__@@PEAUIShellItem@@W4LIBRARY_ADD_LOCATION_ENTRY_POINTS@@PEAPEAV1@@Z
    static long s_CreateInstance(HWND__*, IShellItem *, int, CSaveLocationsTask * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyChanges@CSaveLocationsTask@@IEAAJXZ
    long _ApplyChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshTopView@CSaveLocationsTask@@IEAAXPEAUIShellItem@@H@Z
    void _RefreshTopView(IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateLibraryIcon@CSaveLocationsTask@@IEAAJPEAUIShellLibraryPriv@@PEBG@Z
    long _UpdateLibraryIcon(IShellLibraryPriv *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_RunTask@CSaveLocationsTask@@MEAAXXZ
    virtual void v_RunTask();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSaveLocationsTask@@MEAA@XZ
    virtual ~CSaveLocationsTask();
};
