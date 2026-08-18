#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CFolderAttribTreeWalker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterFolder@CFolderAttribTreeWalker@@UEAAJPEBGPEBUTREEWALKERSTATS@@PEBU_WIN32_FIND_DATAW@@@Z
    virtual long EnterFolder(unsigned short const *, TREEWALKERSTATS const *, _WIN32_FIND_DATAW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FoundFile@CFolderAttribTreeWalker@@UEAAJPEBGPEBUTREEWALKERSTATS@@PEBU_WIN32_FIND_DATAW@@_K@Z
    virtual long FoundFile(unsigned short const *, TREEWALKERSTATS const *, _WIN32_FIND_DATAW const *, uint64_t);
};
