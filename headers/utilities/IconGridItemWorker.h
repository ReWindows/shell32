#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class IconGridItemWorker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFieldsFrom@IconGridItemWorker@@QEAAJPEBUIconGridItem@@@Z
    long CopyFieldsFrom(IconGridItem const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@IconGridItemWorker@@UEAAJPEAUIStream@@@Z
    virtual long Deserialize(IStream *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IconGridItemWorker@@QEAA@XZ
    IconGridItemWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@IconGridItemWorker@@UEAAJPEAUIStream@@PEAG@Z
    virtual long Serialize(IStream *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@IconGridItemWorker@@UEAAJPEAG_KPEA_N@Z
    virtual long Validate(unsigned short *, uint64_t, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IconGridItemWorker@@QEAA@XZ
    ~IconGridItemWorker();
};
