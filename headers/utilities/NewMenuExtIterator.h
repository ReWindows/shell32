#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class NewMenuExtIterator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Current@NewMenuExtIterator@@QEAA_NPEAUNEWOBJECTINFO@@PEAPEAUHKEY__@@@Z
    bool Current(NEWOBJECTINFO *, HKEY__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDone@NewMenuExtIterator@@QEAA_NXZ
    bool IsDone();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NewMenuExtIterator@@QEAA@PEAV?$CCoSimpleArray@PEAUNewMenuEntry@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUNewMenuEntry@@@@@@PEBG@Z
    NewMenuExtIterator(WindissectOpaque *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@NewMenuExtIterator@@QEAAXXZ
    void Next();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NewMenuExtIterator@@QEAA@XZ
    ~NewMenuExtIterator();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentSource@NewMenuExtIterator@@AEAA?AW4NewMenuExtSource@@XZ
    int GetCurrentSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCentDone@NewMenuExtIterator@@AEAA_NXZ
    bool IsCentDone();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRegDone@NewMenuExtIterator@@AEAA_NXZ
    bool IsRegDone();
};
