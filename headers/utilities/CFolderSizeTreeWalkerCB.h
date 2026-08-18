#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CFolderSizeTreeWalkerCB {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterFolder@CFolderSizeTreeWalkerCB@@UEAAJPEBGPEBUTREEWALKERSTATS@@PEBU_WIN32_FIND_DATAW@@@Z
    virtual long EnterFolder(unsigned short const *, TREEWALKERSTATS const *, _WIN32_FIND_DATAW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FoundFile@CFolderSizeTreeWalkerCB@@UEAAJPEBGPEBUTREEWALKERSTATS@@PEBU_WIN32_FIND_DATAW@@_K@Z
    virtual long FoundFile(unsigned short const *, TREEWALKERSTATS const *, _WIN32_FIND_DATAW const *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFolderSizeTreeWalkerCB@@UEAA@XZ
    virtual ~CFolderSizeTreeWalkerCB();
};
