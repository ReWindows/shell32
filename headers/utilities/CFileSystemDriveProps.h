#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CFileSystemDriveProps {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileSystemDriveProps@@QEAA@PEAVCMountPoint@@@Z
    CFileSystemDriveProps(CMountPoint *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributes@CFileSystemDriveProps@@UEAAJPEAK@Z
    virtual long GetAttributes(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapacity@CFileSystemDriveProps@@UEAAJPEA_K0@Z
    virtual long GetCapacity(uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@CFileSystemDriveProps@@UEAAJPEAGH@Z
    virtual long GetDisplayName(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSystem@CFileSystemDriveProps@@UEAAJPEAGH@Z
    virtual long GetFileSystem(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CFileSystemDriveProps@@UEAAJPEAPEAUHICON__@@@Z
    virtual long GetIcon(HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CFileSystemDriveProps@@UEAAJPEAGH@Z
    virtual long GetType(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolumeLabel@CFileSystemDriveProps@@UEAAJPEAGHPEAHPEAI@Z
    virtual long GetVolumeLabel(unsigned short *, int, int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CFileSystemDriveProps@@QEAAJPEBG@Z
    long Init(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileSystemDriveProps@@UEAA@XZ
    virtual ~CFileSystemDriveProps();
};
