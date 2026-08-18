#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
namespace inverted {
class CSimple256Compressor {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compress@CSimple256Compressor@inverted@@AEAAXPEBIIPEAI@Z
    void Compress(unsigned int const *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompressRemainder@CSimple256Compressor@inverted@@AEAAXPEBII@Z
    void CompressRemainder(unsigned int const *, unsigned int);
};
} // namespace inverted
