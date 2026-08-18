#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CDriveLetterCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPathLookupEntry@CDriveLetterCache@@QEAAJPEBG0PEAVCMountPoint@@@Z
    long AddPathLookupEntry(unsigned short const *, unsigned short const *, CMountPoint *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDriveLetterData@CDriveLetterCache@@QEAAPEAVCDriveLetterData@@H@Z
    CDriveLetterData * GetDriveLetterData(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocal@CDriveLetterCache@@QEAAPEAVCMtPtLocal@@H@Z
    CMtPtLocal * GetLocal(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemote@CDriveLetterCache@@QEAAPEAVCMtPtRemote@@H@Z
    CMtPtRemote * GetRemote(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolumePathNameAndCachedMountPoint@CDriveLetterCache@@QEAAJPEBGW4AddToDriveLetterCache@@PEAG_KPEAPEAVCMountPoint@@@Z
    long GetVolumePathNameAndCachedMountPoint(unsigned short const *, int, unsigned short *, uint64_t, CMountPoint * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePathLookupEntry@CDriveLetterCache@@QEAAXPEAVCMountPoint@@@Z
    void RemovePathLookupEntry(CMountPoint *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocal@CDriveLetterCache@@QEAAXHPEAVCMtPtLocal@@@Z
    void SetLocal(int, CMtPtLocal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemote@CDriveLetterCache@@QEAAXHPEAVCMtPtRemote@@@Z
    void SetRemote(int, CMtPtRemote *);
};
