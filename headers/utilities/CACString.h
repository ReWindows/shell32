#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CACString {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareAllWords@CACString@@QEAAHPEBGPEAVCACWordBreaker@@@Z
    int CompareAllWords(unsigned short const *, CACWordBreaker *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CACString@@QEAAKXZ
    unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StrCmpLocaleW@CACString@@AEBAHKPEBGH0H@Z
    int _StrCmpLocaleW(unsigned long, unsigned short const *, int, unsigned short const *, int) const;
};
