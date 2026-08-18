#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class CThumbnailControlHost {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CThumbnailControlHost@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxSize@CThumbnailControlHost@@QEAAJUtagSIZE@@PEAPEAUIFrameWorkItem@@@Z
    long SetMaxSize(tagSIZE, IFrameWorkItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CThumbnailControlHost@@QEAAJXZ
    long Update();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CThumbnailControlHost@@MEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CThumbnailControlHost@@MEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@CThumbnailControlHost@@MEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU3@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureItemThumbnail@CThumbnailControlHost@@IEAAJXZ
    long _EnsureItemThumbnail();
};
