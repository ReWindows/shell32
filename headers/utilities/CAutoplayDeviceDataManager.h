#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CAutoplayDeviceDataManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDeviceData@CAutoplayDeviceDataManager@@QEAAJPEBGAEBU_GUID@@PEAPEAVCAutoplayDeviceData@@@Z
    long AddDeviceData(unsigned short const *, _GUID const &, CAutoplayDeviceData * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoplayDeviceDataManager@@QEAA@XZ
    CAutoplayDeviceDataManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceData@CAutoplayDeviceDataManager@@QEAAJPEBGPEAPEAVCAutoplayDeviceData@@@Z
    long GetDeviceData(unsigned short const *, CAutoplayDeviceData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddDeviceData@CAutoplayDeviceDataManager@@QEAAJPEBGAEBU_GUID@@PEAPEAVCAutoplayDeviceData@@@Z
    long GetOrAddDeviceData(unsigned short const *, _GUID const &, CAutoplayDeviceData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveUI@CAutoplayDeviceDataManager@@UEAAJPEBG@Z
    virtual long RemoveUI(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoplayDeviceDataManager@@UEAA@XZ
    virtual ~CAutoplayDeviceDataManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDPA@CAutoplayDeviceDataManager@@AEAAJXZ
    long _EnsureDPA();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveDeviceData@CAutoplayDeviceDataManager@@AEAAJPEBG@Z
    long _RemoveDeviceData(unsigned short const *);
};
