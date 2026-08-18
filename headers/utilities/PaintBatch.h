#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
class PaintBatch {
public:
    class MonitorData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginBatch@PaintBatch@@QEAAXIAEBUtagRECT@@@Z
    void BeginBatch(unsigned int, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndBatch@PaintBatch@@QEAAXXZ
    void EndBatch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@PaintBatch@@UEAAXPEAPEAXPEAUtagRECT@@@Z
    virtual void GetData(void * *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintMonitor@PaintBatch@@QEAAXPEAUHBITMAP__@@IAEBUtagRECT@@PEAUHMONITOR__@@_N@Z
    void PaintMonitor(HBITMAP__*, unsigned int, tagRECT const &, HMONITOR__*, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PaintBatch@@UEAA@XZ
    virtual ~PaintBatch();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMonitorBrush@PaintBatch@@AEAA_NAEBUMonitorData@1@@Z
    bool ApplyMonitorBrush(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllMonitorsPainted@PaintBatch@@AEAA_NXZ
    bool AreAllMonitorsPainted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertGdiBitsToWicBitmap@PaintBatch@@AEAA?AU?$com_ptr@UIWICBitmapSource@@@winrt@@PEAUHBITMAP__@@@Z
    WindissectOpaque ConvertGdiBitsToWicBitmap(HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertWicBitmapToCompositionSurface@PaintBatch@@AEAA?AUCompositionDrawingSurface@Composition@UI@Windows@winrt@@AEBU?$com_ptr@UIWICBitmapSource@@@6@@Z
    WindissectOpaque ConvertWicBitmapToCompositionSurface(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBlurEffectBrush@PaintBatch@@AEAA?AUCompositionEffectBrush@Composition@UI@Windows@winrt@@AEBUCompositionSurfaceBrush@3456@M@Z
    WindissectOpaque CreateBlurEffectBrush(WindissectOpaque const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCrossFadeAnimation@PaintBatch@@AEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@XZ
    WindissectOpaque CreateCrossFadeAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCrossFadeEffectBrush@PaintBatch@@AEAA?AUCompositionEffectBrush@Composition@UI@Windows@winrt@@AEBU23456@0@Z
    WindissectOpaque CreateCrossFadeEffectBrush(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorVisual@PaintBatch@@AEAA?AUSpriteVisual@Composition@UI@Windows@winrt@@I@Z
    WindissectOpaque GetMonitorVisual(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBatch@PaintBatch@@AEAAXXZ
    void ProcessBatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PruneExcessCrossFades@PaintBatch@@AEAAXAEBUCompositionEffectBrush@Composition@UI@Windows@winrt@@@Z
    void PruneExcessCrossFades(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitVisuals@PaintBatch@@AEAAXXZ
    void SubmitVisuals();
};
