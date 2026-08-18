#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CIconSizeCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIconSizeCommand@@QEAA@XZ
    CIconSizeCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CIconSizeCommand@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitPreview@CIconSizeCommand@@QEAAJW4ICON_SIZE_EXIT_PREVIEW_ACTION@@@Z
    long ExitPreview(int);
};
