#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class Common {
public:
    class DirectoryTreeWalker;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirectoryReparsePointOpaque@Common@@YA_NAEBU_WIN32_FIND_DATAW@@@Z
    bool IsDirectoryReparsePointOpaque(_WIN32_FIND_DATAW const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkDirectoryTree@Common@@YAJPEBGIP6AJPEAX0PEBU_WIN32_FIND_DATAW@@@Z1P6AJ1PEAGPEAPEAXPEAU2@@ZP6AJ116@ZP6AJ11@Z@Z
    long WalkDirectoryTree(unsigned short const *, unsigned int, long ( *)(void *, unsigned short const *, _WIN32_FIND_DATAW const *), void *, long ( *)(void *, unsigned short *, void * *, _WIN32_FIND_DATAW *), long ( *)(void *, void *, _WIN32_FIND_DATAW *), long ( *)(void *, void *));
};
