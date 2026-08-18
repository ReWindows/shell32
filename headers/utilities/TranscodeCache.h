#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class TranscodeCache {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Discard@TranscodeCache@@YAXXZ
    void Discard();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHDRSidecar@TranscodeCache@@YA_NPEBGM@Z
    bool HasHDRSidecar(unsigned short const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Populate@TranscodeCache@@YAXPEBG0IIM@Z
    void Populate(unsigned short const *, unsigned short const *, unsigned int, unsigned int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateHDRSidecars@TranscodeCache@@YAXPEBG0@Z
    void PopulateHDRSidecars(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryHit@TranscodeCache@@YAJPEBG0PEAI1PEAM@Z
    long TryHit(unsigned short const *, unsigned short const *, unsigned int *, unsigned int *, float *);
};
