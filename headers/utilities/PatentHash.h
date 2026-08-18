#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
namespace HashAlgorithms {
class PatentHash {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildPatentHash@PatentHash@HashAlgorithms@@EEAAJPEBXIPEBIPEAUHASH_BUFFER@2@@Z
    virtual long BuildPatentHash(void const *, unsigned int, unsigned int const *, ::HashAlgorithms::HASH_BUFFER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CS64_Reversible@PatentHash@HashAlgorithms@@AEAA_NPEBII0PEAI@Z
    bool CS64_Reversible(unsigned int const *, unsigned int, unsigned int const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CS64_WordSwap@PatentHash@HashAlgorithms@@AEAA_NPEBII0PEAI@Z
    bool CS64_WordSwap(unsigned int const *, unsigned int, unsigned int const *, unsigned int *);
};
} // namespace HashAlgorithms
