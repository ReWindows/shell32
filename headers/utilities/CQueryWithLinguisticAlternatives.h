#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CQueryWithLinguisticAlternatives {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CQueryWithLinguisticAlternatives@@QEAA@XZ
    CQueryWithLinguisticAlternatives();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachAlternatives@CQueryWithLinguisticAlternatives@@UEAAXPEAIPEAPEAPEAG@Z
    virtual void DetachAlternatives(unsigned int *, unsigned short * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateOrQueryFromAlternatives@CQueryWithLinguisticAlternatives@@UEAAJIPEAPEAG@Z
    virtual long GenerateOrQueryFromAlternatives(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternative@CQueryWithLinguisticAlternatives@@UEAAJIPEAPEAG@Z
    virtual long GetAlternative(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternativeCount@CQueryWithLinguisticAlternatives@@UEAAJPEAI@Z
    virtual long GetAlternativeCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuery@CQueryWithLinguisticAlternatives@@UEAAJPEAPEAG@Z
    virtual long GetQuery(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryImeCompositionLength@CQueryWithLinguisticAlternatives@@UEAAJPEAI@Z
    virtual long GetQueryImeCompositionLength(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryImeCompositionStart@CQueryWithLinguisticAlternatives@@UEAAJPEAI@Z
    virtual long GetQueryImeCompositionStart(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CQueryWithLinguisticAlternatives@@QEAAJPEAUILinguisticAlternativeGenerator@@PEBGIIH@Z
    long Initialize(ILinguisticAlternativeGenerator *, unsigned short const *, unsigned int, unsigned int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CQueryWithLinguisticAlternatives@@UEAA@XZ
    virtual ~CQueryWithLinguisticAlternatives();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAlternatives@CQueryWithLinguisticAlternatives@@AEAAXXZ
    void _EnsureAlternatives();
};
