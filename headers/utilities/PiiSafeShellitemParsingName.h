#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class PiiSafeShellitemParsingName {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PiiSafeShellitemParsingName@@QEBAPEBGXZ
    unsigned short const * Get() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPathDriveType@PiiSafeShellitemParsingName@@QEBA?BIXZ
    unsigned int GetPathDriveType() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PiiSafeShellitemParsingName@@QEAA@PEBG@Z
    PiiSafeShellitemParsingName(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PiiSafeShellitemParsingName@@QEAA@XZ
    ~PiiSafeShellitemParsingName();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePiiSafe@PiiSafeShellitemParsingName@@AEBAXXZ
    void EnsurePiiSafe() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellitemNameType@PiiSafeShellitemParsingName@@CA?AW4ShellItemParsingNameType@@PEBG@Z
    static int GetShellitemNameType(unsigned short const *);
};
