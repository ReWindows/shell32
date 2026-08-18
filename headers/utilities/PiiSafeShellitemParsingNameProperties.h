#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class PiiSafeShellitemParsingNameProperties {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PiiSafeShellitemParsingNameProperties@@QEAA@AEBVPiiSafeShellitemParsingName@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    PiiSafeShellitemParsingNameProperties(PiiSafeShellitemParsingName const &, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PiiSafeShellitemParsingNameProperties@@QEAA@AEBVPiiSafeShellitemParsingName@@PEAUIShellItem@@@Z
    PiiSafeShellitemParsingNameProperties(PiiSafeShellitemParsingName const &, IShellItem *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PiiSafeShellitemParsingNameProperties@@QEAA@AEBVPiiSafeShellitemParsingName@@PEAUIShellItem@@W4ShellItemParsingNameType@@@Z
    PiiSafeShellitemParsingNameProperties(PiiSafeShellitemParsingName const &, IShellItem *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PiiSafeShellitemParsingNameProperties@@QEAA@XZ
    ~PiiSafeShellitemParsingNameProperties();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePathDepth@PiiSafeShellitemParsingNameProperties@@CAEPEBG_N@Z
    static unsigned char CalculatePathDepth(unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReasonMarkerType@PiiSafeShellitemParsingNameProperties@@CANQEBG@Z
    static double GetReasonMarkerType(unsigned short const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LastInstanceOfChar@PiiSafeShellitemParsingNameProperties@@CAPEBGPEBGG@Z
    static unsigned short const * LastInstanceOfChar(unsigned short const *, unsigned short);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PiiSafeShellitemParsingNameProperties@@AEAA@AEBVPiiSafeShellitemParsingName@@@Z
    PiiSafeShellitemParsingNameProperties(PiiSafeShellitemParsingName const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PiiSafeShellitemParsingNameProperties@@AEAA@AEBVPiiSafeShellitemParsingName@@W4ShellItemParsingNameType@@@Z
    PiiSafeShellitemParsingNameProperties(PiiSafeShellitemParsingName const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateBasicFields@PiiSafeShellitemParsingNameProperties@@AEAAXPEAUIShellItem@@@Z
    void PopulateBasicFields(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateShellitemParsingNameRootType@PiiSafeShellitemParsingNameProperties@@AEAA?AW4ShellitemParsingNameRootType@@XZ
    int PopulateShellitemParsingNameRootType();
};
