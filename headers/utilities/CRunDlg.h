#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 21 member(s).
class CRunDlg {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRunDlg@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRunDlg@@QEAA@XZ
    CRunDlg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CRunDlg@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CRunDlg@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CRunDlg@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CRunDlg@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRunDlg@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRunDlg@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunDlgAMSIScanProc@CRunDlg@@QEAA_JPEAUHWND__@@I_K_J@Z
    int64_t RunDlgAMSIScanProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowsePushed@CRunDlg@@AEAAXXZ
    void BrowsePushed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyThemeData@CRunDlg@@AEAAXXZ
    void DestroyThemeData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBackground@CRunDlg@@AEAAXPEAUHWND__@@PEAUHDC__@@@Z
    void DrawBackground(HWND__*, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitRunDlg@CRunDlg@@AEAAXH@Z
    void ExitRunDlg(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitRunDlg@CRunDlg@@AEAAXPEAUHWND__@@@Z
    void InitRunDlg(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitRunDlg2@CRunDlg@@AEAAXPEAUHWND__@@@Z
    void InitRunDlg2(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitThemeData@CRunDlg@@AEAAXPEAUHWND__@@@Z
    void InitThemeData(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyParent@CRunDlg@@AEAAHHPEAUHWND__@@PEBGW4SHELL_EXEC_CMD_LINE_OPTIONS@@@Z
    int NotifyParent(int, HWND__*, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OKPushed@CRunDlg@@AEAAHXZ
    int OKPushed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingChange@CRunDlg@@AEAAXPEAUHWND__@@@Z
    void OnSettingChange(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowRedirectionFillColor@CRunDlg@@AEAAXXZ
    void UpdateWindowRedirectionFillColor();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRunDlg@@AEAA@XZ
    ~CRunDlg();
};
