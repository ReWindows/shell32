#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 101 member(s).
class CAutoComplete {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAutoComplete@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowDarkMode@CAutoComplete@@UEAAJPEBG@Z
    virtual long AllowDarkMode(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoComplete@@QEAA@XZ
    CAutoComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CAutoComplete@@UEAAJPEAPEAUIEnumString@@@Z
    virtual long Clone(IEnumString * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enable@CAutoComplete@@UEAAJH@Z
    virtual long Enable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropDownStatus@CAutoComplete@@UEAAJPEAKPEAPEAG@Z
    virtual long GetDropDownStatus(unsigned long *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptions@CAutoComplete@@UEAAJPEAK@Z
    virtual long GetOptions(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CAutoComplete@@UEAAJPEAUHWND__@@PEAUIUnknown@@PEBG2@Z
    virtual long Init(HWND__*, IUnknown *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CAutoComplete@@UEAAJKPEAPEAGPEAK@Z
    virtual long Next(unsigned long, unsigned short * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@CAutoComplete@@UEAAXXZ
    virtual void OnThemeChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAutoComplete@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutoComplete@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CAutoComplete@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetEnumerator@CAutoComplete@@UEAAJXZ
    virtual long ResetEnumerator();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropDownParent@CAutoComplete@@UEAAXPEAUHWND__@@@Z
    virtual void SetDropDownParent(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForceClassicLightMode@CAutoComplete@@UEAAJH@Z
    virtual long SetForceClassicLightMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOptions@CAutoComplete@@UEAAJK@Z
    virtual long SetOptions(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CAutoComplete@@UEAAJPEAUIUnknown@@@Z
    virtual long SetOwner(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CAutoComplete@@UEAAJH@Z
    virtual long Show(int);
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CAutoComplete@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePendingText@CAutoComplete@@UEAAJPEAG@Z
    virtual long UpdatePendingText(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accName@CAutoComplete@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accName(tagVARIANT, unsigned short * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CAutoComplete@@IEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditWordBreakProcW@CAutoComplete@@KAHPEAGHHH@Z
    static int EditWordBreakProcW(unsigned short *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshThemeColors@CAutoComplete@@IEAAJXZ
    long RefreshThemeColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Append@CAutoComplete@@IEAAXAEBVCACString@@H@Z
    void _Append(CACString const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendNext@CAutoComplete@@IEAAHH@Z
    int _AppendNext(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendPrevious@CAutoComplete@@IEAAHH@Z
    int _AppendPrevious(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanUpTabletTip@CAutoComplete@@IEAAXPEAUHWND__@@@Z
    void _CleanUpTabletTip(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanUpVisibleStateData@CAutoComplete@@IEAAXXZ
    void _CleanUpVisibleStateData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CommonInit@CAutoComplete@@IEAAJPEAUHWND__@@PEBG1@Z
    long _CommonInit(HWND__*, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DPACompareSortIndex@CAutoComplete@@KAHPEBX0_J@Z
    static int _DPACompareSortIndex(void const *, void const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DPADestroyCallback@CAutoComplete@@KAHPEAX0@Z
    static int _DPADestroyCallback(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawGrip@CAutoComplete@@IEBAHPEAUHDC__@@PEBUtagRECT@@H@Z
    int _DrawGrip(HDC__*, tagRECT const *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawThemedGrip@CAutoComplete@@IEBAXPEAUHDC__@@PEBUtagRECT@@PEAXH@Z
    void _DrawThemedGrip(HDC__*, tagRECT const *, void *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DropDownDrawItem@CAutoComplete@@IEAAXPEAUtagDRAWITEMSTRUCT@@@Z
    void _DropDownDrawItem(tagDRAWITEMSTRUCT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DropDownNotify@CAutoComplete@@IEAAHPEAUtagNMHDR@@@Z
    int _DropDownNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DropDownWndProc@CAutoComplete@@IEAA_JI_K_J@Z
    int64_t _DropDownWndProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EditWndProc@CAutoComplete@@IEAA_JI_K_J@Z
    int64_t _EditWndProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeDPAPtrs@CAutoComplete@@KAXPEAU_DPA@@@Z
    static void _FreeDPAPtrs(_DPA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEditText@CAutoComplete@@IEAAXXZ
    void _GetEditText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItem@CAutoComplete@@IEAAHHPEAGHH@Z
    int _GetItem(int, unsigned short *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideDropDown@CAutoComplete@@IEAAXXZ
    void _HideDropDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitTabletTip@CAutoComplete@@IEAAXPEAUHWND__@@@Z
    void _InitTabletTip(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAutoAppendEnabled@CAutoComplete@@IEAAHXZ
    int _IsAutoAppendEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsBreakChar@CAutoComplete@@KAHG@Z
    static int _IsBreakChar(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsComboboxDropped@CAutoComplete@@IEAAHXZ
    int _IsComboboxDropped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsWhack@CAutoComplete@@KAHG@Z
    static int _IsWhack(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ListViewWndProc@CAutoComplete@@IEAA_JI_K_J@Z
    int64_t _ListViewWndProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnChar@CAutoComplete@@IEAA_J_K_J@Z
    int64_t _OnChar(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEraseBackground@CAutoComplete@@IEAA_J_K@Z
    int64_t _OnEraseBackground(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyDown@CAutoComplete@@IEAAH_K@Z
    int _OnKeyDown(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnListViewCreate@CAutoComplete@@IEAAXXZ
    void _OnListViewCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSearchComplete@CAutoComplete@@IEAAXPEAUSearchResults@@PEAU_DPA@@@Z
    void _OnSearchComplete(SearchResults *, _DPA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PasteItemsIfNoText@CAutoComplete@@IEAAXXZ
    void _PasteItemsIfNoText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionDropDown@CAutoComplete@@IEAAXXZ
    void _PositionDropDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QuickEnter@CAutoComplete@@IEAAPEAGH@Z
    unsigned short * _QuickEnter(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveCompletion@CAutoComplete@@IEAAXXZ
    void _RemoveCompletion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SeeWhatsEnabled@CAutoComplete@@IEAAXXZ
    void _SeeWhatsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDropDownRedirectionFillColor@CAutoComplete@@IEAAXXZ
    void _SetDropDownRedirectionFillColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetEditText@CAutoComplete@@IEAAXPEBG@Z
    void _SetEditText(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetQuickCompleteStrings@CAutoComplete@@IEAAHPEBG0@Z
    int _SetQuickCompleteStrings(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowDropDown@CAutoComplete@@IEAAXXZ
    void _ShowDropDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartCompletion@CAutoComplete@@IEAAXHH@Z
    void _StartCompletion(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartSearch@CAutoComplete@@IEAAHPEBG@Z
    int _StartSearch(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopSearch@CAutoComplete@@IEAAXXZ
    void _StopSearch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubClassParent@CAutoComplete@@IEAAXPEAUHWND__@@@Z
    void _SubClassParent(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnSubClassParent@CAutoComplete@@IEAAXPEAUHWND__@@@Z
    void _UnSubClassParent(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCompletion@CAutoComplete@@IEAAXPEBGHH@Z
    void _UpdateCompletion(unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateGrip@CAutoComplete@@IEAAXXZ
    void _UpdateGrip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateScrollbar@CAutoComplete@@IEAAXXZ
    void _UpdateScrollbar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateText@CAutoComplete@@IEAAXHHPEBG0@Z
    void _UpdateText(int, int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WantToAppendResults@CAutoComplete@@IEAAHXZ
    int _WantToAppendResults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DropDownWndProc@CAutoComplete@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DropDownWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EditWndProc@CAutoComplete@@KA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_EditWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GripperWndProc@CAutoComplete@@KA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_GripperWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ListViewWndProc@CAutoComplete@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_ListViewWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MouseHook@CAutoComplete@@KA_JH_K_J@Z
    static int64_t s_MouseHook(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ParentWndProc@CAutoComplete@@KA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_ParentWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoComplete@@MEAA@XZ
    virtual ~CAutoComplete();
};
