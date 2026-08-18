#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 51 member(s).
class CFilePropSheetPage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyFileAttributes@CFilePropSheetPage@@QEAAHPEBGPEAUHWND__@@PEAH@Z
    int ApplyFileAttributes(unsigned short const *, HWND__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyFileAttributesAsync@CFilePropSheetPage@@QEAAXPEBUATTRIBUTESTATE@@PEAUHWND__@@@Z
    void ApplyFileAttributesAsync(ATTRIBUTESTATE const *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMultipleFileAttributes@CFilePropSheetPage@@QEAAHXZ
    int ApplyMultipleFileAttributes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRecursiveFolderAttribs@CFilePropSheetPage@@QEAAHPEBG@Z
    int ApplyRecursiveFolderAttribs(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplySingleFileAttributes@CFilePropSheetPage@@QEAAHXZ
    int ApplySingleFileAttributes();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFilePropSheetPage@@QEAA@XZ
    CFilePropSheetPage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderContentsInfo@CFilePropSheetPage@@QEAAJPEAPEAVCFolderContentsInfo@@@Z
    long GetFolderContentsInfo(CFolderContentsInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasUserCanceledAttributeProgressDlg@CFilePropSheetPage@@QEAAHXZ
    int HasUserCanceledAttributeProgressDlg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCommonPrsht@CFilePropSheetPage@@QEAAJXZ
    long InitCommonPrsht();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitWithItems@CFilePropSheetPage@@QEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    long InitWithItems(IShellItemArray *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFilePropSheetPage@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ApplyMultipleThreadProc@CFilePropSheetPage@@SAKPEAX@Z
    static unsigned long s_ApplyMultipleThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ApplySingleThreadProc@CFilePropSheetPage@@SAKPEAX@Z
    static unsigned long s_ApplySingleThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MultiplePrshtDlgProc@CFilePropSheetPage@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_MultiplePrshtDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RecursivePromptDlgProc@CFilePropSheetPage@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_RecursivePromptDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SingleFilePrshtDlgProc@CFilePropSheetPage@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_SingleFilePrshtDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyFileAttributesRetainElevatedHelper@CFilePropSheetPage@@IEAAHPEBGPEAUHWND__@@PEAH@Z
    int _ApplyFileAttributesRetainElevatedHelper(unsigned short const *, HWND__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyRecursiveFolderAttribsRetainElevatedHelper@CFilePropSheetPage@@IEAAHPEBG@Z
    int _ApplyRecursiveFolderAttribsRetainElevatedHelper(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAttributeProgressDlg@CFilePropSheetPage@@IEAAHXZ
    int _CreateAttributeProgressDlg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyAttributeProgressDlg@CFilePropSheetPage@@IEAAHXZ
    int _DestroyAttributeProgressDlg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetInitialFileAttribs@CFilePropSheetPage@@IEAAXKK@Z
    void _SetInitialFileAttribs(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateOpensWithInfo@CFilePropSheetPage@@IEAAJXZ
    long _UpdateOpensWithInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSizeField@CFilePropSheetPage@@IEAAXPEBU_WIN32_FIND_DATAW@@@Z
    void _UpdateSizeField(_WIN32_FIND_DATAW const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFilePropSheetPage@@MEAA@XZ
    virtual ~CFilePropSheetPage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElevationDialogCallback@CFilePropSheetPage@@CAJPEAUHWND__@@I_K_J2@Z
    static long ElevationDialogCallback(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideForWSLRootFolder@CFilePropSheetPage@@AEAAXXZ
    void HideForWSLRootFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPathToClipboard@CFilePropSheetPage@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _AddPathToClipboard(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdvancedFileAttribsDlgProc@CFilePropSheetPage@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _AdvancedFileAttribsDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyMultipleThreadProc@CFilePropSheetPage@@AEAAHXZ
    int _ApplyMultipleThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyRename@CFilePropSheetPage@@AEAAHH@Z
    int _ApplyRename(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplySingleThreadProc@CFilePropSheetPage@@AEAAHXZ
    int _ApplySingleThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyToClipboard@CFilePropSheetPage@@AEAAJXZ
    long _CopyToClipboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisplayApplyError@CFilePropSheetPage@@AEAAXI@Z
    void _DisplayApplyError(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeDlgDependentInfo@CFilePropSheetPage@@AEAAXXZ
    void _FreeDlgDependentInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideMotw@CFilePropSheetPage@@AEAAXXZ
    void _HideMotw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitMultiplePrsht@CFilePropSheetPage@@AEAAHXZ
    int _InitMultiplePrsht();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitSingleFilePrsht@CFilePropSheetPage@@AEAAHXZ
    int _InitSingleFilePrsht();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MultiplePrshtDlgProc@CFilePropSheetPage@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _MultiplePrshtDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitRecursivePrompt@CFilePropSheetPage@@AEAAXPEAUHWND__@@@Z
    void _OnInitRecursivePrompt(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RunWorker@CFilePropSheetPage@@AEAAHP6AKPEAX@Z@Z
    int _RunWorker(unsigned long ( *)(void *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAttributePromptText@CFilePropSheetPage@@AEAAHPEAUHWND__@@PEAH@Z
    int _SetAttributePromptText(HWND__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowElevationDialog@CFilePropSheetPage@@AEAAJPEAUHWND__@@@Z
    long _ShowElevationDialog(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SingleFilePrshtDlgProc@CFilePropSheetPage@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _SingleFilePrshtDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateProgressBar@CFilePropSheetPage@@AEAAJXZ
    long _UpdateProgressBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSizeCount@CFilePropSheetPage@@AEAAXXZ
    void _UpdateSizeCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTriStateCheckboxes@CFilePropSheetPage@@AEAAXXZ
    void _UpdateTriStateCheckboxes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WaitForWorker@CFilePropSheetPage@@AEAAHXZ
    int _WaitForWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AdvancedFileAttribsDlgProc@CFilePropSheetPage@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_AdvancedFileAttribsDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SingleFilePrshtDlgCopySubclassProc@CFilePropSheetPage@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_SingleFilePrshtDlgCopySubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
};
