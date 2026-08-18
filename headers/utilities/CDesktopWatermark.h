#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CDesktopWatermark {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WantWatermark@CDesktopWatermark@@SA_NXZ
    static bool s_WantWatermark();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DesktopBuildPaint@CDesktopWatermark@@CAXPEAUHDC__@@PEBUtagRECT@@PEAUHFONT__@@_N@Z
    static void s_DesktopBuildPaint(HDC__*, tagRECT const *, HFONT__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetEvaluationString@CDesktopWatermark@@CAXPEAGI@Z
    static void s_GetEvaluationString(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetLicensePolicyValueDWORD@CDesktopWatermark@@CAJPEAKPEBG@Z
    static long s_GetLicensePolicyValueDWORD(unsigned long *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetProductBuildString@CDesktopWatermark@@CAXPEAGI@Z
    static void s_GetProductBuildString(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetSafeModeString@CDesktopWatermark@@CAXPEAGI@Z
    static void s_GetSafeModeString(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetTestModeString@CDesktopWatermark@@CAXPEAGI@Z
    static void s_GetTestModeString(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsCanPaintDesktopSet@CDesktopWatermark@@CA_NXZ
    static bool s_IsCanPaintDesktopSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsCleanBoot@CDesktopWatermark@@CA_NXZ
    static bool s_IsCleanBoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsDUTModeEnabled@CDesktopWatermark@@CA_NXZ
    static bool s_IsDUTModeEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsDrawProductNameAlwaysSet@CDesktopWatermark@@CA_NXZ
    static bool s_IsDrawProductNameAlwaysSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsDrawVersionAlwaysSet@CDesktopWatermark@@CA_NXZ
    static bool s_IsDrawVersionAlwaysSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsMachineUnsupported@CDesktopWatermark@@CA_NXZ
    static bool s_IsMachineUnsupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsTSExcludeDesktopVersionSet@CDesktopWatermark@@CA_NXZ
    static bool s_IsTSExcludeDesktopVersionSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsTestSigningEnabled@CDesktopWatermark@@CA_NXZ
    static bool s_IsTestSigningEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsTimeBasedLicenseOn@CDesktopWatermark@@CA_NXZ
    static bool s_IsTimeBasedLicenseOn();
};
