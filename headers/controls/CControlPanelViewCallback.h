#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CControlPanelViewCallback {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFlags@CControlPanelViewCallback@@UEAAJPEAW4FOLDERFLAGS@@0@Z
    virtual long GetFolderFlags(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewMode@CControlPanelViewCallback@@UEAAJPEAW4FOLDERLOGICALVIEWMODE@@@Z
    virtual long GetViewMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CControlPanelViewCallback@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelViewCallback@@EEAA@XZ
    virtual ~CControlPanelViewCallback();
};
