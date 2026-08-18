#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class ItemsUnavailableDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoDisplayDialogSync@ItemsUnavailableDialog@@QEAAJAEA_N@Z
    long DoDisplayDialogSync(bool &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDialogParams@ItemsUnavailableDialog@@AEAA?AUDialogParams@1@XZ
    WindissectOpaque GetDialogParams();
};
