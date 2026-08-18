#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CFileGroupDescriptorReader {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptor@CFileGroupDescriptorReader@@QEBAJIPEAU_FILEDESCRIPTORW@@@Z
    long GetDescriptor(unsigned int, _FILEDESCRIPTORW *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptorWithNameCleanup@CFileGroupDescriptorReader@@QEAAJPEBGIPEAU_FILEDESCRIPTORW@@@Z
    long GetDescriptorWithNameCleanup(unsigned short const *, unsigned int, _FILEDESCRIPTORW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalFileSize@CFileGroupDescriptorReader@@QEBA_KXZ
    uint64_t GetTotalFileSize() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFileGroupDescriptorReader@@QEAAJPEAUIDataObject@@@Z
    long Initialize(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Size@CFileGroupDescriptorReader@@QEBAIXZ
    unsigned int Size() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileGroupDescriptorReader@@QEAA@XZ
    ~CFileGroupDescriptorReader();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDataWithAspectFallback@CFileGroupDescriptorReader@@AEAAJPEAUIDataObject@@G@Z
    long _GetDataWithAspectFallback(IDataObject *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFileNamePresent@CFileGroupDescriptorReader@@AEBA_NPEBGI@Z
    bool _IsFileNamePresent(unsigned short const *, unsigned int) const;
};
