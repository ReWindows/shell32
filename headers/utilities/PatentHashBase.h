#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
namespace HashAlgorithms {
class PatentHashBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildHashStrings@PatentHashBase@HashAlgorithms@@QEAAJPEBXIPEAUHASH_RESULT@2@1@Z
    long BuildHashStrings(void const *, unsigned int, ::HashAlgorithms::HASH_RESULT *, ::HashAlgorithms::HASH_RESULT *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncodeBase64@PatentHashBase@HashAlgorithms@@IEAAJPEBXKPEAGKPEAK@Z
    long EncodeBase64(void const *, unsigned long, unsigned short *, unsigned long, unsigned long *);
};
} // namespace HashAlgorithms
