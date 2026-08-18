#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CResultsTaskBase {
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResultsTaskBase@@IEAA@XZ
    CResultsTaskBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CResultsTaskBase@@IEAAJPEBG0PEAUIQueryWithLinguisticAlternatives@@PEAUITypeAheadProviderEventSink@@I@Z
    long _Initialize(unsigned short const *, unsigned short const *, IQueryWithLinguisticAlternatives *, ITypeAheadProviderEventSink *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResultsTaskBase@@MEAA@XZ
    virtual ~CResultsTaskBase();
};
