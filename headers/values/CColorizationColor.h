#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CColorizationColor {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CColorizationColor@@QEAA@NAEBVCHSBColor@@@Z
    CColorizationColor(double, CHSBColor const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHSBColor@CColorizationColor@@QEBA?BVCHSBColor@@XZ
    CHSBColor GetHSBColor() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertHSBtoRGB@CColorizationColor@@CA?BVCRGBColor@@AEBVCHSBColor@@@Z
    static CRGBColor ConvertHSBtoRGB(CHSBColor const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertRGBtoHSB@CColorizationColor@@CA?BVCHSBColor@@AEBVCRGBColor@@@Z
    static CHSBColor ConvertRGBtoHSB(CRGBColor const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitOffsetForColorValueType@CColorizationColor@@CAIW4_ARGB_COLOR_VALUE_PART@@@Z
    static unsigned int GetBitOffsetForColorValueType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CColorizationColor@@AEAAXNAEBVCRGBColor@@@Z
    void SetColor(double, CRGBColor const &);
};
