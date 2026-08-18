#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class ShellNewItemMenuTelemetry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@ShellNewItemMenuTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellNewItemExtAndProgId_@ShellNewItemMenuTelemetry@@QEAAX_NPEBG1J@Z
    void ShellNewItemExtAndProgId_(bool, unsigned short const *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellNewItemResult_@ShellNewItemMenuTelemetry@@QEAAXJPEBG0@Z
    void ShellNewItemResult_(long, unsigned short const *, unsigned short const *);
};
