#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 35 member(s).
class CFolderCustomize {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPages@CFolderCustomize@@UEAAJP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPages(int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFolderCustomize@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFolderCustomize@@QEAA@XZ
    CFolderCustomize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFolderCustomize@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFolderCustomize@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFolderCustomize@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ReplacePage@CFolderCustomize@@UEAAJIP6AHPEAU_PSP@@_J@Z1@Z
    virtual long ReplacePage(unsigned int, int ( *)(_PSP *, int64_t), int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyChanges@CFolderCustomize@@AEAAJPEAUHWND__@@@Z
    long _ApplyChanges(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyChangesToBag@CFolderCustomize@@AEAAJPEAUHWND__@@PEAUIPropertyBag@@H@Z
    long _ApplyChangesToBag(HWND__*, IPropertyBag *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeFolderIcon@CFolderCustomize@@AEAAXPEAUHWND__@@@Z
    void _ChangeFolderIcon(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFolderIcon@CFolderCustomize@@AEAAXPEAUHWND__@@@Z
    void _CreateFolderIcon(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteCustomizationInBag@CFolderCustomize@@AEAAXPEAUIPropertyBag@@@Z
    void _DeleteCustomizationInBag(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DirTouch@CFolderCustomize@@AEAAXPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _DirTouch(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DlgProc@CFolderCustomize@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t _DlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableApply@CFolderCustomize@@AEAAXPEAUHWND__@@@Z
    void _EnableApply(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillTemplateComboBox@CFolderCustomize@@AEAAXPEAUHWND__@@@Z
    void _FillTemplateComboBox(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeDlgItems@CFolderCustomize@@AEAAXPEAUHWND__@@@Z
    void _FreeDlgItems(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDesktopIni@CFolderCustomize@@AEAAJPEAPEAUICachedPrivateProfile@@@Z
    long _GetDesktopIni(ICachedPrivateProfile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropBagForDesktopIni@CFolderCustomize@@AEAAJPEAPEAUIPropertyBag@@@Z
    long _GetPropBagForDesktopIni(IPropertyBag * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleWMCommand@CFolderCustomize@@AEAAHPEAUHWND__@@GG0@Z
    int _HandleWMCommand(HWND__*, unsigned short, unsigned short, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideIconSection@CFolderCustomize@@AEAAXPEAUHWND__@@@Z
    void _HideIconSection(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideThumbnailSection@CFolderCustomize@@AEAAXPEAUHWND__@@@Z
    void _HideThumbnailSection(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDialog@CFolderCustomize@@AEAAXPEAUHWND__@@@Z
    void _InitDialog(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyAboutWebView@CFolderCustomize@@AEAAHPEAUHWND__@@@Z
    int _NotifyAboutWebView(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessIconChange@CFolderCustomize@@AEAAJPEBGPEAUHWND__@@@Z
    long _ProcessIconChange(unsigned short const *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrshtCallback@CFolderCustomize@@CAIPEAUHWND__@@IPEAU_PROPSHEETPAGEW@@@Z
    static unsigned int _PrshtCallback(HWND__*, unsigned int, _PROPSHEETPAGEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreSpecialFolder@CFolderCustomize@@AEAAHPEAUHWND__@@@Z
    int _RestoreSpecialFolder(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetRecurseBox@CFolderCustomize@@AEAAXPEAUHWND__@@@Z
    void _SetRecurseBox(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetThumbnail@CFolderCustomize@@AEAAXPEAUHWND__@@@Z
    void _SetThumbnail(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldEnableChangeOfThumbnail@CFolderCustomize@@AEAAHXZ
    int _ShouldEnableChangeOfThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateViewState@CFolderCustomize@@AEAAXPEAUHWND__@@PEAUIPropertyBag@@HH@Z
    void _UpdateViewState(HWND__*, IPropertyBag *, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFolderCustomize@@AEAA@XZ
    ~CFolderCustomize();
};
