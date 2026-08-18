#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CAppPathReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesValueExist@CAppPathReader@@QEAAHPEBG@Z
    int DoesValueExist(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringValue@CAppPathReader@@QEAAJPEBGPEAGK@Z
    long GetStringValue(unsigned short const *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PathIsRegisteredProgram@CAppPathReader@@QEAAHXZ
    int PathIsRegisteredProgram();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PathToAppPath@CAppPathReader@@QEAAHPEAGK@Z
    int PathToAppPath(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WantsUrlForCacheFile@CAppPathReader@@QEAAHH@Z
    int WantsUrlForCacheFile(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppPathReader@@QEAA@XZ
    ~CAppPathReader();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureHKCUPathKey@CAppPathReader@@AEAAJXZ
    long _EnsureHKCUPathKey();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureHKLMPathKey@CAppPathReader@@AEAAJXZ
    long _EnsureHKLMPathKey();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PathToAppPathKeyHandle@CAppPathReader@@AEAAJPEAUHKEY__@@PEAPEAU2@@Z
    long _PathToAppPathKeyHandle(HKEY__*, HKEY__* *);
};
