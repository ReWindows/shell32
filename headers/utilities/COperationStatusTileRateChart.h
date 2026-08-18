#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 84 member(s).
class COperationStatusTileRateChart {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterIndeterminateMode@COperationStatusTileRateChart@@QEAAJXZ
    long EnterIndeterminateMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitIndeterminateMode@COperationStatusTileRateChart@@QEAAJXZ
    long ExitIndeterminateMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThemeChange@COperationStatusTileRateChart@@QEAAXXZ
    void ThemeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@COperationStatusTileRateChart@@QEAAJ_K00000IIPEAN@Z
    long Update(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, unsigned int, unsigned int, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@COperationStatusTileRateChart@@SAJKPEAVCChartView@@W4OPERATION_TYPE@@PEAUHWND__@@PEAPEAV1@@Z
    static long s_CreateInstance(unsigned long, CChartView *, int, HWND__*, COperationStatusTileRateChart * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COperationStatusTileRateChart@@QEAA@XZ
    ~COperationStatusTileRateChart();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BitBltToDCAndSelectPreviousBitmap@COperationStatusTileRateChart@@AEAAJPEAUHDC__@@0PEAUHBITMAP__@@1_NH@Z
    long BitBltToDCAndSelectPreviousBitmap(HDC__*, HDC__*, HBITMAP__*, HBITMAP__*, bool, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COperationStatusTileRateChart@@AEAA@KPEAVCChartView@@W4OPERATION_TYPE@@@Z
    COperationStatusTileRateChart(unsigned long, CChartView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMirroredBitmap@COperationStatusTileRateChart@@AEAAPEAUHBITMAP__@@PEAU2@@Z
    HBITMAP__* CreateMirroredBitmap(HBITMAP__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemFont@COperationStatusTileRateChart@@AEAAJPEAPEAUHFONT__@@@Z
    long GetSystemFont(HFONT__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustIndeterminateRefreshTimeoutIfNeeded@COperationStatusTileRateChart@@AEAAXXZ
    void _AdjustIndeterminateRefreshTimeoutIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateRateSeriesFilteredValue@COperationStatusTileRateChart@@AEAAXNPEAUtagVARIANT@@@Z
    void _CalculateRateSeriesFilteredValue(double, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateSmoothedScale@COperationStatusTileRateChart@@AEAAXNNPEAN@Z
    void _CalculateSmoothedScale(double, double, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanFitWaterlineCaption@COperationStatusTileRateChart@@AEAA_NXZ
    bool _CanFitWaterlineCaption();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateOverlay@COperationStatusTileRateChart@@AEAA_NPEAUHWND__@@@Z
    bool _CreateOverlay(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateRefreshTimer@COperationStatusTileRateChart@@AEAAJXZ
    long _CreateRefreshTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteChartSnapshot@COperationStatusTileRateChart@@AEAAXXZ
    void _DeleteChartSnapshot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawChart@COperationStatusTileRateChart@@AEAAXQEBUtagPAINTSTRUCT@@HHH@Z
    void _DrawChart(tagPAINTSTRUCT const * const, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawIndeterminateOverlay@COperationStatusTileRateChart@@AEAAXQEBUtagPAINTSTRUCT@@HHH@Z
    void _DrawIndeterminateOverlay(tagPAINTSTRUCT const * const, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawOverlay@COperationStatusTileRateChart@@AEAAXQEBUtagPAINTSTRUCT@@HW4DrawOverlayOptions@1@@Z
    void _DrawOverlay(tagPAINTSTRUCT const * const, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawOverlayFoundation@COperationStatusTileRateChart@@AEAAXQEBUtagPAINTSTRUCT@@H@Z
    void _DrawOverlayFoundation(tagPAINTSTRUCT const * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawOverlayFrame@COperationStatusTileRateChart@@AEAAXQEBUtagPAINTSTRUCT@@HHH@Z
    void _DrawOverlayFrame(tagPAINTSTRUCT const * const, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawScannerLight@COperationStatusTileRateChart@@AEAAXPEAUHDC__@@HH@Z
    void _DrawScannerLight(HDC__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawSnapshotFoundation@COperationStatusTileRateChart@@AEAA_NQEBUtagPAINTSTRUCT@@PEAUHDC__@@HH@Z
    bool _DrawSnapshotFoundation(tagPAINTSTRUCT const * const, HDC__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawThemeBorderSegments@COperationStatusTileRateChart@@AEAAXQEBUtagPAINTSTRUCT@@PEAUHDC__@@HHH@Z
    void _DrawThemeBorderSegments(tagPAINTSTRUCT const * const, HDC__*, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawWaterlineAndCaption@COperationStatusTileRateChart@@AEAAXQEBUtagPAINTSTRUCT@@H@Z
    void _DrawWaterlineAndCaption(tagPAINTSTRUCT const * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawWaterlineCaption@COperationStatusTileRateChart@@AEAAXQEBUtagPAINTSTRUCT@@HHH@Z
    void _DrawWaterlineCaption(tagPAINTSTRUCT const * const, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAlphaCompositeColor@COperationStatusTileRateChart@@AEAAKKKE@Z
    unsigned long _GetAlphaCompositeColor(unsigned long, unsigned long, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAlphaCompositeColorFromTheme@COperationStatusTileRateChart@@AEAAJPEAXHHKPEAK@Z
    long _GetAlphaCompositeColorFromTheme(void *, int, int, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPrintOverlayXOffset@COperationStatusTileRateChart@@AEAAHXZ
    int _GetPrintOverlayXOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRateRescalingFactor@COperationStatusTileRateChart@@AEAANXZ
    double _GetRateRescalingFactor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScannerLightColor@COperationStatusTileRateChart@@AEAAKXZ
    unsigned long _GetScannerLightColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSystemFontHeight@COperationStatusTileRateChart@@AEAAJXZ
    long _GetSystemFontHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSystemFontHeight@COperationStatusTileRateChart@@AEAAJPEAUHDC__@@@Z
    long _GetSystemFontHeight(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTransparencyValueFromTheme@COperationStatusTileRateChart@@AEAAJPEAXHHPEAE@Z
    long _GetTransparencyValueFromTheme(void *, int, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWaterlineCaptionHeight@COperationStatusTileRateChart@@AEAAJXZ
    long _GetWaterlineCaptionHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideSeries@COperationStatusTileRateChart@@AEAAXXZ
    void _HideSeries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IncreaseScale@COperationStatusTileRateChart@@AEAAXW4IncreaseScaleOptions@1@N@Z
    void _IncreaseScale(int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@COperationStatusTileRateChart@@AEAAJPEAUHWND__@@@Z
    long _Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeBaselineSeries@COperationStatusTileRateChart@@AEAAJXZ
    long _InitializeBaselineSeries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeColors@COperationStatusTileRateChart@@AEAAXXZ
    void _InitializeColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeDataSeriesCore@COperationStatusTileRateChart@@AEAAJGUtagVARIANT@@U_CV_STYLE@@PEA_K@Z
    long _InitializeDataSeriesCore(unsigned short, tagVARIANT, _CV_STYLE, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeProgressSeries@COperationStatusTileRateChart@@AEAAJXZ
    long _InitializeProgressSeries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeRateSeries@COperationStatusTileRateChart@@AEAAJXZ
    long _InitializeRateSeries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeSmoothers@COperationStatusTileRateChart@@AEAAJXZ
    long _InitializeSmoothers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InterpolateRateSeries@COperationStatusTileRateChart@@AEAAJ_KHHNN@Z
    long _InterpolateRateSeries(uint64_t, int, int, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsInUpdatingState@COperationStatusTileRateChart@@AEAA_NXZ
    bool _IsInUpdatingState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsVisible@COperationStatusTileRateChart@@AEAA_NXZ
    bool _IsVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OverlayBufferedPaint@COperationStatusTileRateChart@@AEAAXQEBUtagPAINTSTRUCT@@H@Z
    void _OverlayBufferedPaint(tagPAINTSTRUCT const * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OverlayWindowProcedure@COperationStatusTileRateChart@@AEAA_NPEAUHWND__@@I_K_JPEA_J@Z
    bool _OverlayWindowProcedure(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaintOverlay@COperationStatusTileRateChart@@AEAAXQEBUtagPAINTSTRUCT@@H@Z
    void _PaintOverlay(tagPAINTSTRUCT const * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RaiseProgressStartEventIfNeeded@COperationStatusTileRateChart@@AEAAXXZ
    void _RaiseProgressStartEventIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RaiseRescaleEvent@COperationStatusTileRateChart@@AEAAXXZ
    void _RaiseRescaleEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RaiseUpdateEvent@COperationStatusTileRateChart@@AEAAXXZ
    void _RaiseUpdateEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshCore@COperationStatusTileRateChart@@AEAAXW4RefreshTypes@1@@Z
    void _RefreshCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RollbackRateSmoothers@COperationStatusTileRateChart@@AEAAJH@Z
    long _RollbackRateSmoothers(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RollbackSeries@COperationStatusTileRateChart@@AEAAJHH@Z
    long _RollbackSeries(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDataAxis@COperationStatusTileRateChart@@AEAAJXZ
    long _SetDataAxis();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFrameColor@COperationStatusTileRateChart@@AEAAXHK@Z
    void _SetFrameColor(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetGridlineColor@COperationStatusTileRateChart@@AEAAXHK@Z
    void _SetGridlineColor(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetRateType@COperationStatusTileRateChart@@AEAAJXZ
    long _SetRateType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetScale@COperationStatusTileRateChart@@AEAAXNN@Z
    void _SetScale(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSeriesColors@COperationStatusTileRateChart@@AEAAXHK@Z
    void _SetSeriesColors(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSmoothersScale@COperationStatusTileRateChart@@AEAAXNN@Z
    void _SetSmoothersScale(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStyle@COperationStatusTileRateChart@@AEAAXXZ
    void _SetStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowIfNeeded@COperationStatusTileRateChart@@AEAAJXZ
    long _ShowIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowSeries@COperationStatusTileRateChart@@AEAAXXZ
    void _ShowSeries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartIndeterminateRefresh@COperationStatusTileRateChart@@AEAAJXZ
    long _StartIndeterminateRefresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartUpdatingRefresh@COperationStatusTileRateChart@@AEAAJXZ
    long _StartUpdatingRefresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TakeChartSnapshot@COperationStatusTileRateChart@@AEAA_NXZ
    bool _TakeChartSnapshot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TakeChartSnapshotCore@COperationStatusTileRateChart@@AEAA_NPEAUHDC__@@@Z
    bool _TakeChartSnapshotCore(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryStopRefreshing@COperationStatusTileRateChart@@AEAA_NXZ
    bool _TryStopRefreshing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Uninitialize@COperationStatusTileRateChart@@AEAAXXZ
    void _Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateChartViewThemeState@COperationStatusTileRateChart@@AEAAXXZ
    void _UpdateChartViewThemeState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateColors@COperationStatusTileRateChart@@AEAAXHK@Z
    void _UpdateColors(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDataSeriesCore@COperationStatusTileRateChart@@AEAAJ_KUtagVARIANT@@HH@Z
    long _UpdateDataSeriesCore(uint64_t, tagVARIANT, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDisplayRate@COperationStatusTileRateChart@@AEAAXPEA_N0@Z
    void _UpdateDisplayRate(bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateProgressThemeState@COperationStatusTileRateChart@@AEAAXXZ
    void _UpdateProgressThemeState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateRateSeriesFilteredValue@COperationStatusTileRateChart@@AEAAJ_KNHH@Z
    long _UpdateRateSeriesFilteredValue(uint64_t, double, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateWaterlineCaptionMessage@COperationStatusTileRateChart@@AEAAJN@Z
    long _UpdateWaterlineCaptionMessage(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateWaterlineState@COperationStatusTileRateChart@@AEAANN@Z
    double _UpdateWaterlineState(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatingRefresh@COperationStatusTileRateChart@@AEAAXW4UpdatingChartStates@1@@Z
    void _UpdatingRefresh(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OverlayWindowProcedure@COperationStatusTileRateChart@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_OverlayWindowProcedure(HWND__*, unsigned int, uint64_t, int64_t);
};
