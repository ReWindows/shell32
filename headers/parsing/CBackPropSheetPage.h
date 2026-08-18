#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 49 member(s).
class CBackPropSheetPage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPages@CBackPropSheetPage@@UEAAJP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPages(int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBackPropSheetPage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackPropSheetPage@@QEAA@XZ
    CBackPropSheetPage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdvancedDialog@CBackPropSheetPage@@UEAAJPEAPEAUIAdvancedDialog@@@Z
    virtual long GetAdvancedDialog(IAdvancedDialog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApply@CBackPropSheetPage@@UEAAJW4tagPropPageOnApply@@@Z
    virtual long OnApply(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBackPropSheetPage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CBackPropSheetPage@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBackPropSheetPage@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ReplacePage@CBackPropSheetPage@@UEAAJIP6AHPEAU_PSP@@_J@Z1@Z
    virtual long ReplacePage(unsigned int, int ( *)(_PSP *, int64_t), int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CBackPropSheetPage@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackPropSheetPage@@UEAA@XZ
    virtual ~CBackPropSheetPage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeCheckerThreadProc@CBackPropSheetPage@@KAKPEAX@Z
    static unsigned long SizeCheckerThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHardDirThemesDir@CBackPropSheetPage@@IEAAJPEAGI@Z
    long _GetHardDirThemesDir(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIconPath@CBackPropSheetPage@@IEAAJAEBU_GUID@@PEBGHPEAGI@Z
    long _GetIconPath(_GUID const &, unsigned short const *, int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetKidsThemesDir@CBackPropSheetPage@@IEAAJPEAGI@Z
    long _GetKidsThemesDir(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPlus95ThemesDir@CBackPropSheetPage@@IEAAJPEAGI@Z
    long _GetPlus95ThemesDir(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPlus98ThemesDir@CBackPropSheetPage@@IEAAJPEAGI@Z
    long _GetPlus98ThemesDir(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadDesktopOptionsState@CBackPropSheetPage@@IEAAJXZ
    long _LoadDesktopOptionsState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadIconState@CBackPropSheetPage@@IEAAJXZ
    long _LoadIconState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadState@CBackPropSheetPage@@IEAAJXZ
    long _LoadState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitDialog@CBackPropSheetPage@@IEAAXPEAUHWND__@@@Z
    void _OnInitDialog(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CBackPropSheetPage@@IEAAHPEAUtagNMHDR@@@Z
    int _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveDesktopOptionsState@CBackPropSheetPage@@IEAAJXZ
    long _SaveDesktopOptionsState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveIconState@CBackPropSheetPage@@IEAAJW4tagPropPageOnApply@@@Z
    long _SaveIconState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIconPath@CBackPropSheetPage@@IEAAJAEBU_GUID@@PEBG1H@Z
    long _SetIconPath(_GUID const &, unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetNewWallpaper@CBackPropSheetPage@@IEAAJPEBGH@Z
    long _SetNewWallpaper(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SizeCheckerThreadProc@CBackPropSheetPage@@IEAAKXZ
    unsigned long _SizeCheckerThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartSizeChecker@CBackPropSheetPage@@IEAAJXZ
    long _StartSizeChecker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BackgroundDlgProc@CBackPropSheetPage@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t BackgroundDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BackgroundDlgProc@CBackPropSheetPage@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _BackgroundDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcSizeForFile@CBackPropSheetPage@@AEAAJPEBGPEBU_WIN32_FIND_DATAW@@PEAK@Z
    long _CalcSizeForFile(unsigned short const *, _WIN32_FIND_DATAW const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcSizeFromDir@CBackPropSheetPage@@AEAAJPEBGPEAKH@Z
    long _CalcSizeFromDir(unsigned short const *, unsigned long *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMRUObject@CBackPropSheetPage@@AEAAJPEAPEAUIMruDataList@@@Z
    long _GetMRUObject(IMruDataList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitIconDialog@CBackPropSheetPage@@AEAAJPEAUHWND__@@@Z
    long _InitIconDialog(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CBackPropSheetPage@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadTempWallpaperSettings@CBackPropSheetPage@@AEAAJPEBG@Z
    long _LoadTempWallpaperSettings(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetNewWallpaperTile@CBackPropSheetPage@@AEAAJKH@Z
    long _SetNewWallpaperTile(unsigned long, int);
};
