#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 53 member(s).
class CFilterControl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFilterControl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndShow@CFilterControl@@UEAAJIU_tagpropertykey@@W4FCFLAGS@@W4FICFLAGS@@PEAUHWND__@@UtagPOINT@@HHPEAUIFilterControlCallback@@PEAUIFilterCondition@@@Z
    virtual long CreateAndShow(unsigned int, _tagpropertykey, int, int, HWND__*, tagPOINT, int, int, IFilterControlCallback *, IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CFilterControl@@UEAAJXZ
    virtual long Destroy();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItemState@CFilterControl@@UEAAJW4LVPVIEWID@@QEAUtagLVITEMW@@PEAH@Z
    virtual long GetItemState(int, tagLVITEMW * const, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPropertyControl@CFilterControl@@UEAAJXZ
    virtual long HasPropertyControl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@CFilterControl@@UEAAJXZ
    virtual long IsVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreated@CFilterControl@@UEAAJXZ
    virtual long OnCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CFilterControl@@UEAAJXZ
    virtual long OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@CFilterControl@@UEAAJH@Z
    virtual long OnDismiss(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetSearchText@CFilterControl@@UEAAJW4SEARCHTEXTTYPE@@PEAGI@Z
    virtual long OnGetSearchText(int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CFilterControl@@UEAAJW4LVPVIEWID@@PEBUtagNMLISTVIEW@@H@Z
    virtual long OnItemChanged(int, tagNMLISTVIEW const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemFocused@CFilterControl@@UEAAJW4LVPVIEWID@@QEAUtagLVITEMW@@1@Z
    virtual long OnItemFocused(int, tagLVITEMW * const, tagLVITEMW * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemInvoke@CFilterControl@@UEAAJW4LVPVIEWID@@QEAUtagLVITEMW@@@Z
    virtual long OnItemInvoke(int, tagLVITEMW * const);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemRemoved@CFilterControl@@UEAAJW4REMOVEITEMTYPE@@W4LVPVIEWID@@QEAUtagLVITEMW@@@Z
    virtual long OnItemRemoved(int, int, tagLVITEMW * const);
    // Category: Method | Source: PE Export
    // Symbol: ?OnMouseLeave@CFilterControl@@UEAAJXZ
    virtual long OnMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropCtrlInvoke@CFilterControl@@UEAAJPEAUIFilterCondition@@@Z
    virtual long OnPropCtrlInvoke(IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestReposition@CFilterControl@@UEAAJPEBUtagRECT@@@Z
    virtual long OnRequestReposition(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpinnerCancel@CFilterControl@@UEAAJW4LVPVIEWID@@@Z
    virtual long OnSpinnerCancel(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnToolBarItemInvoke@CFilterControl@@UEAAJH@Z
    virtual long OnToolBarItemInvoke(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFilterControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFilterControl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilterCollection@CFilterControl@@UEAAJW4SFCFLAGS@@PEAUIObjectCollection@@@Z
    virtual long SetFilterCollection(int, IObjectCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CFilterControl@@UEAAJII@Z
    virtual long SetPosition(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpecialCharacter@CFilterControl@@UEAAJPEBUtagMSG@@H@Z
    virtual long SpecialCharacter(tagMSG const *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPropCtrlText@CFilterControl@@AEAAXXZ
    void _AddPropCtrlText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyFilters@CFilterControl@@AEAAJXZ
    long _ApplyFilters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AreFilterWorkerItemsEqual@CFilterControl@@AEAAHPEAUIFilterWorkerItem@@0@Z
    int _AreFilterWorkerItemsEqual(IFilterWorkerItem *, IFilterWorkerItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckAndApplyFilter@CFilterControl@@AEAAXH@Z
    void _CheckAndApplyFilter(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCheckedCount@CFilterControl@@AEAAIXZ
    unsigned int _GetCheckedCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCheckedFilters@CFilterControl@@AEAAJPEAV?$CDPA@UIFilterCondition@@V?$CTContainer_PolicyUnOwned@UIFilterCondition@@@@@@@Z
    long _GetCheckedFilters(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetColumnName@CFilterControl@@AEAAJU_tagpropertykey@@PEAGH@Z
    long _GetColumnName(_tagpropertykey, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFilterForCheckedItems@CFilterControl@@AEAAJPEAPEAUIFilterCondition@@@Z
    long _GetFilterForCheckedItems(IFilterCondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOrFilterName@CFilterControl@@AEAAJPEAV?$CDPA@UIFilterCondition@@V?$CTContainer_PolicyUnOwned@UIFilterCondition@@@@@@PEAPEAG@Z
    long _GetOrFilterName(WindissectOpaque *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSpinnerIndex@CFilterControl@@AEAAHXZ
    int _GetSpinnerIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasFilterStatesChanged@CFilterControl@@AEAAHXZ
    int _HasFilterStatesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertFilter@CFilterControl@@AEAAJHPEBG@Z
    long _InsertFilter(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertFilterWorkerItem@CFilterControl@@AEAAJHPEAUIFilterWorkerItem@@PEBG@Z
    long _InsertFilterWorkerItem(int, IFilterWorkerItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertFilters@CFilterControl@@AEAAJH@Z
    long _InsertFilters(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeFilterCollection@CFilterControl@@AEAAJPEAUIObjectCollection@@@Z
    long _MergeFilterCollection(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCheckItem@CFilterControl@@AEAAJIH@Z
    long _OnCheckItem(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetPropCtrlValue@CFilterControl@@AEAAJXZ
    long _ResetPropCtrlValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowIncrementalProgress@CFilterControl@@AEAAJXZ
    long _ShowIncrementalProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UncheckAllFilters@CFilterControl@@AEAAXXZ
    void _UncheckAllFilters();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFilterControl@@EEAA@XZ
    virtual ~CFilterControl();
};
