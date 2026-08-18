#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class OperationTileHeader {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@OperationTileHeader@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@OperationTileHeader@@QEAAJIPEAVElement@DirectUI@@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OperationTileHeader@@QEAA@XZ
    OperationTileHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@OperationTileHeader@@SAJXZ
    static long Register();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OperationTileHeader@@UEAA@XZ
    virtual ~OperationTileHeader();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeHeaderStructure@OperationTileHeader@@AEAAJI@Z
    long _InitializeHeaderStructure(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeTextOrCountHeaderPart@OperationTileHeader@@AEAAJPEBG_KHPEA_N@Z
    long _InitializeTextOrCountHeaderPart(unsigned short const *, uint64_t, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateHeaderElementValues@OperationTileHeader@@AEAAJ_KPEAUIShellItem@@1QEBUOperationTileHeaderPart@@@Z
    long _UpdateHeaderElementValues(uint64_t, IShellItem *, IShellItem *, OperationTileHeaderPart const * const);
};
