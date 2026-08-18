#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class ConflictInterruptElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@ConflictInterruptElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@ConflictInterruptElement@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@ConflictInterruptElement@@SAJAEBVCDUIResourceManager@@_KW4OPERATION_TYPE@@PEAUIConflictInterrupt@@PEAUIOperationDataReader@@QEBVOperationTileHeader@@PEAVElement@DirectUI@@PEAKPEAPEAV78@@Z
    static long s_CreateInstance(CDUIResourceManager const &, uint64_t, int, IConflictInterrupt *, IOperationDataReader *, OperationTileHeader const * const, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConflictInterruptElement@@UEAA@XZ
    virtual ~ConflictInterruptElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithCustomCommandsForEdp@ConflictInterruptElement@@AEAAJAEBVCDUIResourceManager@@_KW4OPERATION_TYPE@@PEAUIConflictInterrupt@@PEAUIOperationDataReader@@PEBVOperationTileHeader@@W4OPERATION_INTERRUPT_FLAGS@@@Z
    long InitializeWithCustomCommandsForEdp(CDUIResourceManager const &, uint64_t, int, IConflictInterrupt *, IOperationDataReader *, OperationTileHeader const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateItemTile@ConflictInterruptElement@@AEAAJPEAUIConflictInterrupt@@PEAUIOperationDataReader@@W4OPERATION_TYPE@@W4RESOLUTION_TYPE@@PEAPEAVConflictItemTile@@@Z
    long _CreateItemTile(IConflictInterrupt *, IOperationDataReader *, int, int, ConflictItemTile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@ConflictInterruptElement@@AEAAJAEBVCDUIResourceManager@@_KW4OPERATION_TYPE@@PEAUIConflictInterrupt@@PEAUIOperationDataReader@@PEBVOperationTileHeader@@@Z
    long _Initialize(CDUIResourceManager const &, uint64_t, int, IConflictInterrupt *, IOperationDataReader *, OperationTileHeader const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeItemTiles@ConflictInterruptElement@@AEAAJW4OPERATION_TYPE@@PEAUIConflictInterrupt@@PEAUIOperationDataReader@@@Z
    long _InitializeItemTiles(int, IConflictInterrupt *, IOperationDataReader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDescription@ConflictInterruptElement@@AEAAJPEAUIConflictInterrupt@@K@Z
    long _SetDescription(IConflictInterrupt *, unsigned long);
};
