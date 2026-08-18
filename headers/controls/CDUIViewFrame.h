#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 102 member(s).
class CDUIViewFrame {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDUIViewFrame@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDUIViewFrame@@QEAA@XZ
    CDUIViewFrame();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CDUIViewFrame@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameWindow@CDUIViewFrame@@UEAAJPEAUIViewFrameHost@@PEBUtagRECT@@HPEAPEAUHWND__@@@Z
    virtual long CreateFrameWindow(IViewFrameHost *, tagRECT const *, int, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyFrameWindow@CDUIViewFrame@@UEAAJXZ
    virtual long DestroyFrameWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@CDUIViewFrame@@UEAAJPEAUIShellSearchScope@@@Z
    virtual long Enter(IShellSearchScope *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exit@CDUIViewFrame@@UEAAJXZ
    virtual long Exit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetACEnumString@CDUIViewFrame@@UEAAJPEAPEAUIEnumString@@@Z
    virtual long GetACEnumString(IEnumString * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIDsOfNames@CDUIViewFrame@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutType@CDUIViewFrame@@UEAAJPEAW4tagLAYOUTTYPE@@@Z
    virtual long GetLayoutType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenu@CDUIViewFrame@@UEAAJPEAPEAUHMENU__@@@Z
    virtual long GetMenu(HMENU__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistStream@CDUIViewFrame@@UEAAJHPEBG0KPEAPEAUIStream@@@Z
    virtual long GetPersistStream(int, unsigned short const *, unsigned short const *, unsigned long, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPromptText@CDUIViewFrame@@UEAAJPEAGI@Z
    virtual long GetPromptText(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchText@CDUIViewFrame@@UEAAJPEAGI@Z
    virtual long GetSearchText(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellView@CDUIViewFrame@@UEAAJPEAPEAUIShellView@@@Z
    virtual long GetShellView(IShellView * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfo@CDUIViewFrame@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfoCount@CDUIViewFrame@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CDUIViewFrame@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitMenuPopup@CDUIViewFrame@@UEAAJPEAUHMENU__@@@Z
    virtual long InitMenuPopup(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDUIViewFrame@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLayoutSupported@CDUIViewFrame@@UEAAJPEAUIFrameLayoutDefinition@@@Z
    virtual long IsLayoutSupported(IFrameLayoutDefinition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsXAMLView@CDUIViewFrame@@UEAAHXZ
    virtual int IsXAMLView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuCommand@CDUIViewFrame@@UEAAJK@Z
    virtual long OnMenuCommand(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchTextNotify@CDUIViewFrame@@UEAAJPEBG0W4SHELLSEARCHNOTIFY@@@Z
    virtual long OnSearchTextNotify(unsigned short const *, unsigned short const *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDUIViewFrame@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CDUIViewFrame@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CDUIViewFrame@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CDUIViewFrame@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDUIViewFrame@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Search@CDUIViewFrame@@UEAAJPEBGK@Z
    virtual long Search(unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutDefinition@CDUIViewFrame@@UEAAJPEAUIFrameLayoutDefinition@@@Z
    virtual long SetLayoutDefinition(IFrameLayoutDefinition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMode@CDUIViewFrame@@UEAAJW4VFMODE@@@Z
    virtual long SetMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellView@CDUIViewFrame@@UEAAJPEAUIShellView@@PEAUHWND__@@PEAUIUnknown@@W4SETVIEWFLAGS@@@Z
    virtual long SetShellView(IShellView *, HWND__*, IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorGlobalVF@CDUIViewFrame@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorGlobalVF(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorVF@CDUIViewFrame@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorVF(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateVF@CDUIViewFrame@@UEAAJIW4VIEWREASONTOACTIVATE@@@Z
    virtual long UIActivateVF(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CDUIViewFrame@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshBackgroundColor@CDUIViewFrame@@AEAAXXZ
    void RefreshBackgroundColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustLayout@CDUIViewFrame@@AEAAJPEAUIUnknown@@PEAPEAU2@PEA_N@Z
    long _AdjustLayout(IUnknown *, IUnknown * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckForLayoutChangeOnContentsChange@CDUIViewFrame@@AEAAXXZ
    void _CheckForLayoutChangeOnContentsChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareModuleEntry@CDUIViewFrame@@CAHPEBUMODULEENTRY@@0_J@Z
    static int _CompareModuleEntry(MODULEENTRY const *, MODULEENTRY const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConnectShellView@CDUIViewFrame@@AEAAXXZ
    void _ConnectShellView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateHostWindow@CDUIViewFrame@@AEAAJPEAUHWND__@@@Z
    long _CreateHostWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateOrSetInnerObject@CDUIViewFrame@@CAXPEAUIUnknown@@_J@Z
    static void _CreateOrSetInnerObject(IUnknown *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DUIHostWndProc@CDUIViewFrame@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t _DUIHostWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DetachElementTree@CDUIViewFrame@@AEAAXXZ
    void _DetachElementTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisconnectShellView@CDUIViewFrame@@AEAAXXZ
    void _DisconnectShellView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixUpKeyboardFocus@CDUIViewFrame@@AEAAXW4VIEWREASONTOACTIVATE@@@Z
    void _FixUpKeyboardFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixupCrossDUIViewFocus@CDUIViewFrame@@AEAAXXZ
    void _FixupCrossDUIViewFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGlobalPersistStream@CDUIViewFrame@@AEAAJPEBG00KPEAPEAUIStream@@@Z
    long _GetGlobalPersistStream(unsigned short const *, unsigned short const *, unsigned short const *, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetListviewHostElement@CDUIViewFrame@@AEAAPEAVElement@DirectUI@@XZ
    ::DirectUI::Element * _GetListviewHostElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPerBrowserPropertyBag@CDUIViewFrame@@AEAAJAEBU_GUID@@0PEAPEAX@Z
    long _GetPerBrowserPropertyBag(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPerFolderPersistStream@CDUIViewFrame@@AEAAJPEBG00KPEAPEAUIStream@@@Z
    long _GetPerFolderPersistStream(unsigned short const *, unsigned short const *, unsigned short const *, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPerFolderTypeIdPersistStream@CDUIViewFrame@@AEAAJPEBG00KPEAPEAUIStream@@@Z
    long _GetPerFolderTypeIdPersistStream(unsigned short const *, unsigned short const *, unsigned short const *, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPerLayoutPersistStream@CDUIViewFrame@@AEAAJPEBG00KPEAPEAUIStream@@@Z
    long _GetPerLayoutPersistStream(unsigned short const *, unsigned short const *, unsigned short const *, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRegistryPathForLocation@CDUIViewFrame@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@_NPEBGPEAGI@Z
    long _GetRegistryPathForLocation(_ITEMIDLIST_ABSOLUTE const *, bool, unsigned short const *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InnerObjectDeepQueryInterface@CDUIViewFrame@@CAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long _InnerObjectDeepQueryInterface(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSameCLSIDAsCurrent@CDUIViewFrame@@AEAAHPEAUIUnknown@@AEBU_GUID@@@Z
    int _IsSameCLSIDAsCurrent(IUnknown *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ModuleEntryClearCB@CDUIViewFrame@@CAHPEAUMODULEENTRY@@PEAX@Z
    static int _ModuleEntryClearCB(MODULEENTRY *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnResize@CDUIViewFrame@@AEAAJJJ@Z
    long _OnResize(long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PerformPendingActivate@CDUIViewFrame@@AEAAJW4VIEWREASONTOACTIVATE@@@Z
    long _PerformPendingActivate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProfferToBrowser@CDUIViewFrame@@AEAAX_N@Z
    void _ProfferToBrowser(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RedrawFrame@CDUIViewFrame@@AEAAXXZ
    void _RedrawFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveInnerObject@CDUIViewFrame@@CAXPEAUIUnknown@@_J@Z
    static void _RemoveInnerObject(IUnknown *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SeeIfUnknownWantsFocus@CDUIViewFrame@@CAXPEAUIUnknown@@_J@Z
    static void _SeeIfUnknownWantsFocus(IUnknown *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetElementProvider@CDUIViewFrame@@AEAAXPEAUIElementClassProvider@@@Z
    void _SetElementProvider(IElementClassProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocusToFirstTabStopElement@CDUIViewFrame@@AEAAXPEAVElement@DirectUI@@@Z
    void _SetFocusToFirstTabStopElement(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryDetailsPanePreFilterMessage@CDUIViewFrame@@AEAA_NPEAUtagMSG@@@Z
    bool _TryDetailsPanePreFilterMessage(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInitialStates@CDUIViewFrame@@AEAAXXZ
    void _UpdateInitialStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateNamespaceID@CDUIViewFrame@@AEAAJXZ
    long _UpdateNamespaceID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ParserErrorCallback@CDUIViewFrame@@CAXPEBG0HPEAX@Z
    static void s_ParserErrorCallback(unsigned short const *, unsigned short const *, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PropertyWriteCallback@CDUIViewFrame@@CAX_JPEBG@Z
    static void s_PropertyWriteCallback(int64_t, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDUIViewFrame@@EEAA@XZ
    virtual ~CDUIViewFrame();
};
