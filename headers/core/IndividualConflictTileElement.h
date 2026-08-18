#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class IndividualConflictTileElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@IndividualConflictTileElement@@SAJPEAVDUIXmlParser@DirectUI@@PEAVElement@3@KK_NPEAVIndividualConflictsDialogHWNDElement@@PEAKPEAPEAV43@@Z
    static long CreateInstance(::DirectUI::DUIXmlParser *, ::DirectUI::Element *, unsigned long, unsigned long, bool, IndividualConflictsDialogHWNDElement *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisible@IndividualConflictTileElement@@UEAA_NHHHH@Z
    virtual bool EnsureVisible(int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@IndividualConflictTileElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@IndividualConflictTileElement@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetTileContentToDiscovering@IndividualConflictTileElement@@QEAAJKK_N@Z
    long ResetTileContentToDiscovering(unsigned long, unsigned long, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConflictItemState@IndividualConflictTileElement@@QEAAJW4CONFLICT_ITEM_DATA_FLAGS@@W4CONFLICT_CHECKBOX_STATE@@@Z
    long SetConflictItemState(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConflictItemThumbnail@IndividualConflictTileElement@@QEAAJW4CONFLICT_ITEM_DATA_FLAGS@@PEAVValue@DirectUI@@@Z
    long SetConflictItemThumbnail(int, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileAspect@IndividualConflictTileElement@@QEAAX_N@Z
    void SetTileAspect(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileContent@IndividualConflictTileElement@@QEAAJPEBUINDIVIDUAL_CONFLICT_FAST_DATA@@PEAUIShellItem@@1PEAVValue@DirectUI@@@Z
    long SetTileContent(INDIVIDUAL_CONFLICT_FAST_DATA const *, IShellItem *, IShellItem *, ::DirectUI::Value *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDestinationCheckboxAccessibleName@IndividualConflictTileElement@@AEAAJAEBVCIndividualConflictFastDataHelper@@@Z
    long SetDestinationCheckboxAccessibleName(CIndividualConflictFastDataHelper const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceCheckboxAccessibleName@IndividualConflictTileElement@@AEAAJAEBVCIndividualConflictFastDataHelper@@@Z
    long SetSourceCheckboxAccessibleName(CIndividualConflictFastDataHelper const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@IndividualConflictTileElement@@AEAAJPEAVDUIXmlParser@DirectUI@@KK_NPEAVIndividualConflictsDialogHWNDElement@@PEAVElement@3@PEAK@Z
    long _Initialize(::DirectUI::DUIXmlParser *, unsigned long, unsigned long, bool, IndividualConflictsDialogHWNDElement *, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectTileCheckbox@IndividualConflictTileElement@@AEAAJPEAVElement@DirectUI@@_N@Z
    long _SelectTileCheckbox(::DirectUI::Element *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectTileCheckboxAndUpdateSiblingIfNeeded@IndividualConflictTileElement@@AEAAJPEAVElement@DirectUI@@_N@Z
    long _SelectTileCheckboxAndUpdateSiblingIfNeeded(::DirectUI::Element *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateElements@IndividualConflictTileElement@@AEAAJPEAVElement@DirectUI@@0HPEBG1@Z
    long _UpdateElements(::DirectUI::Element *, ::DirectUI::Element *, int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SetItemIconIfEmpty@IndividualConflictTileElement@@CAJPEAVElement@DirectUI@@PEBGPEAVValue@3@@Z
    static long s_SetItemIconIfEmpty(::DirectUI::Element *, unsigned short const *, ::DirectUI::Value *);
};
