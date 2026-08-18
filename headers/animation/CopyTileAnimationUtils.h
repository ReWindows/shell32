#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
class CopyTileAnimationUtils {
public:
    class CTileAnimationInterpolatorSet;
    class CTileAnimationManager;
    class CTileAnimator;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanDisplayWin8CopyDialog@CopyTileAnimationUtils@@YAJPEA_N@Z
    long CanDisplayWin8CopyDialog(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapFromElement@CopyTileAnimationUtils@@YAPEAUHBITMAP__@@PEAVElement@DirectUI@@@Z
    HBITMAP__* CreateBitmapFromElement(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteSetKeyFocus@CopyTileAnimationUtils@@YAX_NPEAVElement@DirectUI@@@Z
    void ExecuteSetKeyFocus(bool, ::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentOperationTile@CopyTileAnimationUtils@@YAPEAVElement@DirectUI@@PEAV23@@Z
    ::DirectUI::Element * GetParentOperationTile(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAnimationElements@CopyTileAnimationUtils@@YAJPEAVElement@DirectUI@@00PEAUtagSIZE@@@Z
    long InitializeAnimationElements(::DirectUI::Element *, ::DirectUI::Element *, ::DirectUI::Element *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrastOn@CopyTileAnimationUtils@@YAJPEA_N@Z
    long IsHighContrastOn(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyWithin@CopyTileAnimationUtils@@YA_NPEAVElement@DirectUI@@@Z
    bool IsKeyWithin(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTileAnimationAllowed@CopyTileAnimationUtils@@YA_NXZ
    bool IsTileAnimationAllowed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowsClassicBasicOrHCTheme@CopyTileAnimationUtils@@YAJPEA_N@Z
    long IsWindowsClassicBasicOrHCTheme(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintElementTree@CopyTileAnimationUtils@@YAJPEAUHDC__@@QEBUtagPOINT@@PEBUtagRECT@@PEAVElement@DirectUI@@3@Z
    long PaintElementTree(HDC__*, tagPOINT const * const, tagRECT const *, ::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintHWNDHostElement@CopyTileAnimationUtils@@YAJPEAVElement@DirectUI@@0PEAUHDC__@@@Z
    long PaintHWNDHostElement(::DirectUI::Element *, ::DirectUI::Element *, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAnimationDestinationElement@CopyTileAnimationUtils@@YAJPEAVElement@DirectUI@@@Z
    long PrepareAnimationDestinationElement(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementAlpha@CopyTileAnimationUtils@@YAJPEAVElement@DirectUI@@H@Z
    long SetElementAlpha(::DirectUI::Element *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementHeight@CopyTileAnimationUtils@@YAJPEAVElement@DirectUI@@H@Z
    long SetElementHeight(::DirectUI::Element *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementIntValue@CopyTileAnimationUtils@@YAJPEAVElement@DirectUI@@QEBUPropertyInfo@3@H@Z
    long SetElementIntValue(::DirectUI::Element *, ::DirectUI::PropertyInfo const * const, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementSize@CopyTileAnimationUtils@@YAJPEAVElement@DirectUI@@AEBUtagSIZE@@@Z
    long SetElementSize(::DirectUI::Element *, tagSIZE const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWidthChildElements@CopyTileAnimationUtils@@YAJPEAVElement@DirectUI@@H@Z
    long SetWidthChildElements(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAnimationElement@CopyTileAnimationUtils@@YAJ_NPEAVElement@DirectUI@@@Z
    long ShowAnimationElement(bool, ::DirectUI::Element *);
};
