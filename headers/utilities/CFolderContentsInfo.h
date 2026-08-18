#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CFolderContentsInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSizeThread@CFolderContentsInfo@@QEAAXXZ
    void CreateSizeThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FolderSize@CFolderContentsInfo@@QEAAJPEBG@Z
    long FolderSize(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFolderContentsInfo@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeThreadProc@CFolderContentsInfo@@QEAAXXZ
    void SizeThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SizeThreadProc@CFolderContentsInfo@@SAKPEAX@Z
    static unsigned long s_SizeThreadProc(void *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFolderContentsInfo@@AEAA@XZ
    ~CFolderContentsInfo();
};
