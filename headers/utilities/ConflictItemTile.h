#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
// Base evidence: InterruptButton (likely; classinfo-template-instantiation).
class ConflictItemTile {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?DescriptionProp@ConflictItemTile@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * DescriptionProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@ConflictItemTile@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchConflictDialog@ConflictItemTile@@QEAAJXZ
    long LaunchConflictDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@ConflictItemTile@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ConflictItemTile@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@ConflictItemTile@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?TileTypeProp@ConflictItemTile@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * TileTypeProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateAggregatedInterruptResponseFromSingle@ConflictItemTile@@SAPEAUOPERATION_INTERRUPT_RESPONSE_AGGREGATED@@HW4OPERATION_INTERRUPT_RESPONSE_SINGLE@@@Z
    static OPERATION_INTERRUPT_RESPONSE_AGGREGATED * s_CreateAggregatedInterruptResponseFromSingle(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@ConflictItemTile@@SAJAEBVCDUIResourceManager@@PEAUIConflictInterrupt@@PEAUIOperationDataReader@@W4OPERATION_TYPE@@W4RESOLUTION_TYPE@@PEAVCollectedConflictTelemetry@@PEAVElement@DirectUI@@PEAKPEAPEAV89@@Z
    static long s_CreateInstance(CDUIResourceManager const &, IConflictInterrupt *, IOperationDataReader *, int, int, CollectedConflictTelemetry *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConflictItemTile@@UEAA@XZ
    virtual ~ConflictItemTile();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccessibleText@ConflictItemTile@@AEAAJXZ
    long SetAccessibleText();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSubText@ConflictItemTile@@AEAAJPEBG@Z
    long SetSubText(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@ConflictItemTile@@AEAAJPEAUIConflictInterrupt@@PEAUIOperationDataReader@@W4OPERATION_TYPE@@W4RESOLUTION_TYPE@@PEAVCollectedConflictTelemetry@@@Z
    long _Initialize(IConflictInterrupt *, IOperationDataReader *, int, int, CollectedConflictTelemetry *);
};
