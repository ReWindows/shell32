#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 100 member(s).
class CSharePointView {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AddPropertySheetPages@CSharePointView@@UEAAJKP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPropertySheetPages(unsigned long, int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSharePointView@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSharePointView@@QEAA@XZ
    CSharePointView();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CSharePointView@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewWindow@CSharePointView@@UEAAJPEAUIShellView@@PEBUFOLDERSETTINGS@@PEAUIShellBrowser@@PEAUtagRECT@@PEAPEAUHWND__@@@Z
    virtual long CreateViewWindow(IShellView *, FOLDERSETTINGS const *, IShellBrowser *, tagRECT *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyViewWindow@CSharePointView@@UEAAJXZ
    virtual long DestroyViewWindow();
    // Category: Method | Source: PE Export
    // Symbol: ?EnableModeless@CSharePointView@@UEAAJH@Z
    virtual long EnableModeless(int);
    // Category: Method | Source: PE Export
    // Symbol: ?FilterDataObject@CSharePointView@@UEAAJPEAUIDataObject@@PEAPEAU2@@Z
    virtual long FilterDataObject(IDataObject *, IDataObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CSharePointView@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCurrentInfo@CSharePointView@@UEAAJPEAUFOLDERSETTINGS@@@Z
    virtual long GetCurrentInfo(FOLDERSETTINGS *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDropTarget@CSharePointView@@UEAAJPEAUIDropTarget@@PEAPEAU2@@Z
    virtual long GetDropTarget(IDropTarget *, IDropTarget * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternal@CSharePointView@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long GetExternal(IDispatch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostInfo@CSharePointView@@UEAAJPEAU_DOCHOSTUIINFO@@@Z
    virtual long GetHostInfo(_DOCHOSTUIINFO *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIDsOfNames@CSharePointView@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemObject@CSharePointView@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetItemObject(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptionKeyPath@CSharePointView@@UEAAJPEAPEAGK@Z
    virtual long GetOptionKeyPath(unsigned short * *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneState@CSharePointView@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetPaneState(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfo@CSharePointView@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfoCount@CSharePointView@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CSharePointView@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CSharePointView@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PE Export
    // Symbol: ?HideUI@CSharePointView@@UEAAJXZ
    virtual long HideUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSharePointView@@QEAAJPEBG@Z
    long Initialize(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSharePointView@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRestricted@CSharePointView@@UEAAJXZ
    virtual long IsRestricted();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDocWindowActivate@CSharePointView@@UEAAJH@Z
    virtual long OnDocWindowActivate(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnFrameWindowActivate@CSharePointView@@UEAAJH@Z
    virtual long OnFrameWindowActivate(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSharePointView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CSharePointView@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CSharePointView@@UEAAJXZ
    virtual long Refresh();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSharePointView@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ResizeBorder@CSharePointView@@UEAAJPEBUtagRECT@@PEAUIOleInPlaceUIWindow@@H@Z
    virtual long ResizeBorder(tagRECT const *, IOleInPlaceUIWindow *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?SaveViewState@CSharePointView@@UEAAJXZ
    virtual long SaveViewState();
    // Category: Method | Source: PE Export
    // Symbol: ?SelectItem@CSharePointView@@UEAAJPEFBU_ITEMID_CHILD@@I@Z
    virtual long SelectItem(_ITEMID_CHILD & volatile *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccessibleName@CSharePointView@@UEAAJPEBG@Z
    virtual long SetAccessibleName(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?ShowContextMenu@CSharePointView@@UEAAJKPEAUtagPOINT@@PEAUIUnknown@@PEAUIDispatch@@@Z
    virtual long ShowContextMenu(unsigned long, tagPOINT *, IUnknown *, IDispatch *);
    // Category: Method | Source: PE Export
    // Symbol: ?ShowUI@CSharePointView@@UEAAJKPEAUIOleInPlaceActiveObject@@PEAUIOleCommandTarget@@PEAUIOleInPlaceFrame@@PEAUIOleInPlaceUIWindow@@@Z
    virtual long ShowUI(unsigned long, IOleInPlaceActiveObject *, IOleCommandTarget *, IOleInPlaceFrame *, IOleInPlaceUIWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CSharePointView@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?TranslateAcceleratorW@CSharePointView@@UEAAJPEAUtagMSG@@PEBU_GUID@@K@Z
    virtual long TranslateAcceleratorW(tagMSG *, _GUID const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorW@CSharePointView@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorW(tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?TranslateUrl@CSharePointView@@UEAAJKPEAGPEAPEAG@Z
    virtual long TranslateUrl(unsigned long, unsigned short *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?UIActivate@CSharePointView@@UEAAJI@Z
    virtual long UIActivate(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?UIActivateIO@CSharePointView@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateUI@CSharePointView@@UEAAJXZ
    virtual long UpdateUI();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnRow@CSharePointView@@AEAAJPEAUIHTMLElement@@@Z
    long SetFocusOnRow(IHTMLElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildNavigateUrl@CSharePointView@@AEAAJPEBGPEAGK@Z
    long _BuildNavigateUrl(unsigned short const *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheItemIDFromSelection@CSharePointView@@AEAAJXZ
    long _CacheItemIDFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateWebControl@CSharePointView@@AEAAJPEAUHWND__@@PEBUtagRECT@@@Z
    long _CreateWebControl(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyWebControl@CSharePointView@@AEAAXXZ
    void _DestroyWebControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDocument@CSharePointView@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetDocument(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEventObject@CSharePointView@@AEAAJPEAPEAUIHTMLEventObj@@@Z
    long _GetEventObject(IHTMLEventObj * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetListViewCollection@CSharePointView@@AEAAJPEAPEAUIHTMLElementCollection@@@Z
    long _GetListViewCollection(IHTMLElementCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextToken@CSharePointView@@AEAAHPEAPEBDPEAKPEAGH@Z
    int _GetNextToken(char const * *, unsigned long *, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRowElement@CSharePointView@@AEAAJJPEAPEAUIHTMLElement@@@Z
    long _GetRowElement(long, IHTMLElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HeaderClicked@CSharePointView@@AEAAHPEAUIHTMLElement@@H@Z
    int _HeaderClicked(IHTMLElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Navigate@CSharePointView@@AEAAJPEBG@Z
    long _Navigate(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Navigate@CSharePointView@@AEAAJXZ
    long _Navigate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClickEvent@CSharePointView@@AEAAJHPEAUtagVARIANT@@@Z
    long _OnClickEvent(int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDocumentComplete@CSharePointView@@AEAAHXZ
    int _OnDocumentComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFocusChange@CSharePointView@@AEAAJH@Z
    long _OnFocusChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyEvent@CSharePointView@@AEAAJPEAUtagVARIANT@@@Z
    long _OnKeyEvent(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessResult@CSharePointView@@AEAAJPEBDPEAGH1H@Z
    long _ProcessResult(char const *, unsigned short *, int, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterWindowClasses@CSharePointView@@AEAAXXZ
    void _RegisterWindowClasses();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReturnResult@CSharePointView@@AEAAPEBDPEBDPEAGH@Z
    char const * _ReturnResult(char const *, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RowClicked@CSharePointView@@AEAAHPEAUIHTMLElement@@H@Z
    int _RowClicked(IHTMLElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectRow@CSharePointView@@AEAAXJH@Z
    void _SelectRow(long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowProgress@CSharePointView@@AEAAXH@Z
    void _ShowProgress(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncDocEvents@CSharePointView@@AEAAXH@Z
    void _SyncDocEvents(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ViewWndProc@CSharePointView@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_ViewWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSharePointView@@EEAA@XZ
    virtual ~CSharePointView();
};
