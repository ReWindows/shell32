#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
namespace CTranscodedImage {
class TRANSCODED_IMAGE_DATA {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@TRANSCODED_IMAGE_DATA@CTranscodedImage@@QEAAXPEBG@Z
    void Init(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidHeader@TRANSCODED_IMAGE_DATA@CTranscodedImage@@QEBA_NXZ
    bool IsValidHeader() const;
};
} // namespace CTranscodedImage
