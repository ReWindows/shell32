#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CScriptAutoDetection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonSpacedOverrideLocaleScripts@CScriptAutoDetection@@QEAAJPEBGKPEAKPEAW4AMBIGUOUS_CJK_TEXT@@PEAW4SPECIAL_SCRIPTS_FOUND_FLAGS@@@Z
    long GetNonSpacedOverrideLocaleScripts(unsigned short const *, unsigned long, unsigned long *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasScript@CScriptAutoDetection@@QEAAJPEBG0@Z
    long HasScript(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSpecialScript@CScriptAutoDetection@@QEAAJPEBGPEAW4SPECIAL_SCRIPTS_FOUND_FLAGS@@PEAK2@Z
    long HasSpecialScript(unsigned short const *, int *, unsigned long *, unsigned long *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CScriptAutoDetection@@QEAA@XZ
    ~CScriptAutoDetection();
};
