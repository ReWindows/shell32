#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CAutoColorization {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoColorization@@QEAA@XZ
    CAutoColorization();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageColorizationColor@CAutoColorization@@QEAAJPEAKPEAUIMMERSIVE_COLOR_PREFERENCE@@@Z
    long GetImageColorizationColor(unsigned long *, IMMERSIVE_COLOR_PREFERENCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImageColorizationColor@CAutoColorization@@QEAAXPEAPEAVCMemoryCachedImage@@I@Z
    void UpdateImageColorizationColor(CMemoryCachedImage * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AutoColorEnabled@CAutoColorization@@SA_NXZ
    static bool s_AutoColorEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsBrighterBucket@CAutoColorization@@SA_NPEAVCPixelBucket@@0I@Z
    static bool s_IsBrighterBucket(CPixelBucket *, CPixelBucket *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeColorAlgorithm@CAutoColorization@@AEAAXPEAPEAVCPixelBucket@@II@Z
    void _ComputeColorAlgorithm(CPixelBucket * *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeImageColorizationColor@CAutoColorization@@AEAAXPEAPEAVCMemoryCachedImage@@I@Z
    void _ComputeImageColorizationColor(CMemoryCachedImage * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeMultiImageColorStartMenu@CAutoColorization@@AEAAXPEAPEAVCMemoryCachedImage@@I@Z
    void _ComputeMultiImageColorStartMenu(CMemoryCachedImage * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeWeightedRGBColorization@CAutoColorization@@AEAAXPEAPEAVCMemoryCachedImage@@I@Z
    void _ComputeWeightedRGBColorization(CMemoryCachedImage * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConstrainHSB@CAutoColorization@@AEAAXXZ
    void _ConstrainHSB();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessColorBuckets@CAutoColorization@@AEAAXAEBV?$CCoSimpleArray@PEAVCPixelBucket@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAVCPixelBucket@@@@@@@Z
    void _ProcessColorBuckets(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MeetsPixelThreshold@CAutoColorization@@CA_NPEAVCPixelBucket@@I@Z
    static bool s_MeetsPixelThreshold(CPixelBucket *, unsigned int);
};
