#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class AccessibilityHelpers {
public:
    class EnableTextScalingForThemedWindowHelper;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTextHeightForDPI@AccessibilityHelpers@@YAJI@Z
    long CalculateTextHeightForDPI(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTextHeightFromFont@AccessibilityHelpers@@YAJPEAUHWND__@@AEBUtagLOGFONTW@@@Z
    long CalculateTextHeightFromFont(HWND__*, tagLOGFONTW const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateListViewProxy@AccessibilityHelpers@@YAJPEAUHWND__@@PEAPEAUIRawElementProviderSimple@@@Z
    long CreateListViewProxy(HWND__*, IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSafeArrayAndPutElement@AccessibilityHelpers@@YAJPEAUIRawElementProviderSimple@@PEAUtagVARIANT@@@Z
    long CreateSafeArrayAndPutElement(IRawElementProviderSimple *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultThemeFont@AccessibilityHelpers@@YA?AUtagLOGFONTW@@PEAUHWND__@@@Z
    tagLOGFONTW GetDefaultThemeFont(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawElementProviderFromWindow@AccessibilityHelpers@@YAJPEAUHWND__@@PEAPEAUIRawElementProviderSimple@@@Z
    long GetRawElementProviderFromWindow(HWND__*, IRawElementProviderSimple * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextScaleFactorFromRegistry@AccessibilityHelpers@@YAHXZ
    int GetTextScaleFactorFromRegistry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenReaderEnabled@AccessibilityHelpers@@YA_NXZ
    bool IsScreenReaderEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupListViewProxyFactory@AccessibilityHelpers@@YAJPEAPEAUIUIAutomationProxyFactory@@@Z
    long LookupListViewProxyFactory(IUIAutomationProxyFactory * *);
};
