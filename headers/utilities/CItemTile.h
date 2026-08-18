#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class CItemTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendTag@CItemTile@@QEAAJPEBGI@Z
    long AppendTag(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CItemTile@@SAJPEAVDUIXmlParser@DirectUI@@W4CONFLICTDLG_ITEMTILE_TYPE@@HPEAUISyncMgrConflictItems@@PEAVElement@3@PEAKPEAPEAV63@@Z
    static long Create(::DirectUI::DUIXmlParser *, int, int, ISyncMgrConflictItems *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResolutionItemsItf@CItemTile@@SAJPEAUISyncMgrConflictItems@@PEAPEAUISyncMgrConflictResolutionItems@@@Z
    static long CreateResolutionItemsItf(ISyncMgrConflictItems *, ISyncMgrConflictResolutionItems * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CItemTile@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CItemTile@@QEAAJPEAVElement@DirectUI@@PEAKPEAVDUIXmlParser@3@W4CONFLICTDLG_ITEMTILE_TYPE@@HPEAUISyncMgrConflictItems@@@Z
    long Initialize(::DirectUI::Element *, unsigned long *, ::DirectUI::DUIXmlParser *, int, int, ISyncMgrConflictItems *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenu@CItemTile@@QEAAJPEAUHWND__@@@Z
    long OnContextMenu(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemTile@@UEAA@XZ
    virtual ~CItemTile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemPropertyValueAndText2@CItemTile@@AEAAJPEAUIShellItem2@@AEBU_tagpropertykey@@1W4PROPDESC_FORMAT_FLAGS@@PEAUtagPROPVARIANT@@PEAPEAG@Z
    long _GetItemPropertyValueAndText2(IShellItem2*, _tagpropertykey const &, _tagpropertykey const &, int, tagPROPVARIANT *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitAccName@CItemTile@@AEAAJXZ
    long _InitAccName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitAlternateName@CItemTile@@AEAAJXZ
    long _InitAlternateName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDate@CItemTile@@AEAAJPEBUCONFIRM_CONFLICT_ITEM@@_N@Z
    long _InitDate(CONFIRM_CONFLICT_ITEM const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitIcon@CItemTile@@AEAAJPEBUCONFIRM_CONFLICT_ITEM@@@Z
    long _InitIcon(CONFIRM_CONFLICT_ITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitKeepAll@CItemTile@@AEAAJXZ
    long _InitKeepAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitName@CItemTile@@AEAAJPEBUCONFIRM_CONFLICT_ITEM@@@Z
    long _InitName(CONFIRM_CONFLICT_ITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitPath@CItemTile@@AEAAJPEBUCONFIRM_CONFLICT_ITEM@@_N@Z
    long _InitPath(CONFIRM_CONFLICT_ITEM const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitSize@CItemTile@@AEAAJPEBUCONFIRM_CONFLICT_ITEM@@@Z
    long _InitSize(CONFIRM_CONFLICT_ITEM const *);
};
