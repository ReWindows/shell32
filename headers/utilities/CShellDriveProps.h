#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CShellDriveProps {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributes@CShellDriveProps@@UEAAJPEAK@Z
    virtual long GetAttributes(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapacity@CShellDriveProps@@UEAAJPEA_K0@Z
    virtual long GetCapacity(uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@CShellDriveProps@@UEAAJPEAGH@Z
    virtual long GetDisplayName(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSystem@CShellDriveProps@@UEAAJPEAGH@Z
    virtual long GetFileSystem(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CShellDriveProps@@UEAAJPEAPEAUHICON__@@@Z
    virtual long GetIcon(HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CShellDriveProps@@UEAAJPEAGH@Z
    virtual long GetType(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolumeLabel@CShellDriveProps@@UEAAJPEAGHPEAHPEAI@Z
    virtual long GetVolumeLabel(unsigned short *, int, int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CShellDriveProps@@QEAAJPEAUIShellItem@@@Z
    long Init(IShellItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellDriveProps@@UEAA@XZ
    virtual ~CShellDriveProps();
};
