#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CIndividualConflictFastDataHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompareDateModifiedOrDefault@CIndividualConflictFastDataHelper@@QEBAHXZ
    int GetCompareDateModifiedOrDefault() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompareSizeOrDefault@CIndividualConflictFastDataHelper@@QEBAHXZ
    int GetCompareSizeOrDefault() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestDateModifiedOrDefaultAsString@CIndividualConflictFastDataHelper@@QEBAJPEAPEAG@Z
    long GetDestDateModifiedOrDefaultAsString(unsigned short * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestSizeOrDefaultAsString@CIndividualConflictFastDataHelper@@QEBAJPEAPEAG@Z
    long GetDestSizeOrDefaultAsString(unsigned short * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSrcDateModifiedOrDefaultAsString@CIndividualConflictFastDataHelper@@QEBAJPEAPEAG@Z
    long GetSrcDateModifiedOrDefaultAsString(unsigned short * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSrcSizeOrDefaultAsString@CIndividualConflictFastDataHelper@@QEBAJPEAPEAG@Z
    long GetSrcSizeOrDefaultAsString(unsigned short * *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIndividualConflictFastDataHelper@@QEAA@XZ
    ~CIndividualConflictFastDataHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConvertPropVariantToString@CIndividualConflictFastDataHelper@@AEBAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@W4PROPDESC_FORMAT_FLAGS@@PEAPEAG@Z
    long _ConvertPropVariantToString(_tagpropertykey const &, tagPROPVARIANT const &, int, unsigned short * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDateModifiedFormatFlags@CIndividualConflictFastDataHelper@@AEBA?AW4PROPDESC_FORMAT_FLAGS@@XZ
    int _GetDateModifiedFormatFlags() const;
};
