#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class IconNameTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@IconNameTable@@UEAAJPEAUIStream@@@Z
    virtual long Deserialize(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillItemFromIndex@IconNameTable@@QEBAJFAEAUIconGridItem@@@Z
    long FillItemFromIndex(short, IconGridItem &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@IconNameTable@@UEAAJPEAUIStream@@PEAG@Z
    virtual long Serialize(IStream *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcons@IconNameTable@@QEAAJQEBUIconGridItem@@_K@Z
    long SetIcons(IconGridItem const * const, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@IconNameTable@@UEAAJPEAG_KPEA_N@Z
    virtual long Validate(unsigned short *, uint64_t, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IconNameTable@@QEAA@XZ
    ~IconNameTable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadIcons@IconNameTable@@AEAAJPEAUIStream@@@Z
    long ReadIcons(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteIcons@IconNameTable@@AEAAJPEAUIStream@@PEAG@Z
    long WriteIcons(IStream *, unsigned short *);
};
