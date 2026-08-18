#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 55 member(s).
class CSummaryPage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPages@CSummaryPage@@UEAAJP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPages(int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSummaryPage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?BeginGroupEdit@CSummaryPage@@UEAAJHAEBU_GUID@@PEAPEAX@Z
    virtual long BeginGroupEdit(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSubItemEdit@CSummaryPage@@UEAAJHHW4LV_EDIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z
    virtual long BeginSubItemEdit(int, int, int, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSummaryPage@@QEAA@XZ
    CSummaryPage();
    // Category: Method | Source: PE Export
    // Symbol: ?EndGroupEdit@CSummaryPage@@UEAAJHHPEAUIPropertyControl@@@Z
    virtual long EndGroupEdit(int, int, IPropertyControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndSubItemEdit@CSummaryPage@@UEAAJHHHPEAUIPropertyControl@@@Z
    virtual long EndSubItemEdit(int, int, int, IPropertyControl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubItemControl@CSummaryPage@@UEAAJHHAEBU_GUID@@PEAPEAX@Z
    virtual long GetSubItemControl(int, int, _GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSubItemTitle@CSummaryPage@@UEAAJHPEAGH@Z
    virtual long GetSubItemTitle(int, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSummaryPage@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeVerb@CSummaryPage@@UEAAJHPEBG@Z
    virtual long OnInvokeVerb(int, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSummaryPage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSummaryPage@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ReplacePage@CSummaryPage@@UEAAJIP6AHPEAU_PSP@@_J@Z1@Z
    virtual long ReplacePage(unsigned int, int ( *)(_PSP *, int64_t), int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForWriteAccess@CSummaryPage@@AEAAJXZ
    long CheckForWriteAccess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DlgProc@CSummaryPage@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t DlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPropertiesFromPropListToUI@CSummaryPage@@AEAAJPEAUIPropertyProvider@@@Z
    long _AddPropertiesFromPropListToUI(IPropertyProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPropertyDescriptionToUI@CSummaryPage@@AEAAJPEAUIPropertyProvider@@PEAUIPropertyDescription@@@Z
    long _AddPropertyDescriptionToUI(IPropertyProvider *, IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPropertyGroup@CSummaryPage@@AEAAXPEBG@Z
    void _AddPropertyGroup(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPropertyValue@CSummaryPage@@AEAAJPEAUPROPLISTVIEWDATA@@PEBG1@Z
    long _AddPropertyValue(PROPLISTVIEWDATA *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildPropertyChangeArray@CSummaryPage@@AEAAJPEAPEAUIPropertyChangeArray@@@Z
    long _BuildPropertyChangeArray(IPropertyChangeArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearDirtyFlags@CSummaryPage@@AEAAXXZ
    void _ClearDirtyFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableControls@CSummaryPage@@AEAAXPEAUHWND__@@@Z
    void _EnableControls(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableCreateCopy@CSummaryPage@@AEAAHXZ
    int _EnableCreateCopy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemData@CSummaryPage@@AEAAJHPEAPEAUPROPLISTVIEWDATA@@@Z
    long _GetItemData(int, PROPLISTVIEWDATA * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValueAndValueString@CSummaryPage@@AEAAJPEAUIPropertyProvider@@PEAUIPropertyDescription@@PEAPEAUIPropertyValue@@PEAPEAG@Z
    long _GetValueAndValueString(IPropertyProvider *, IPropertyDescription *, IPropertyValue * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitDialog@CSummaryPage@@AEAAXPEAUHWND__@@@Z
    void _OnInitDialog(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemChanging@CSummaryPage@@AEAAHPEAUtagNMLISTVIEW@@@Z
    int _OnItemChanging(tagNMLISTVIEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyDown@CSummaryPage@@AEAAHPEBUtagLVKEYDOWN@@@Z
    int _OnKeyDown(tagLVKEYDOWN const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLVNotifyClick@CSummaryPage@@AEAAXPEBUtagNMITEMACTIVATE@@@Z
    void _OnLVNotifyClick(tagNMITEMACTIVATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CSummaryPage@@AEAAHPEAUHWND__@@HPEAUtagNMHDR@@@Z
    int _OnNotify(HWND__*, int, tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenFirstItem@CSummaryPage@@AEAAJXZ
    long _OpenFirstItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropertiesToUI@CSummaryPage@@AEAAJXZ
    long _PropertiesToUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseListviewData@CSummaryPage@@AEAAXXZ
    void _ReleaseListviewData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveProperties@CSummaryPage@@AEAAJXZ
    long _RemoveProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceListViewWithString@CSummaryPage@@AEAAXH@Z
    void _ReplaceListViewWithString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Save@CSummaryPage@@AEAAJXZ
    long _Save();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectAll@CSummaryPage@@AEAAXXZ
    void _SelectAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DialogDlgProc@CSummaryPage@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DialogDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ListViewSubclassProc@CSummaryPage@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_ListViewSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PageCallback@CSummaryPage@@CAIPEAUHWND__@@IPEAU_PROPSHEETPAGEW@@@Z
    static unsigned int s_PageCallback(HWND__*, unsigned int, _PROPSHEETPAGEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PropSheetDlgProc@CSummaryPage@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_PropSheetDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSummaryPage@@EEAA@XZ
    virtual ~CSummaryPage();
};
