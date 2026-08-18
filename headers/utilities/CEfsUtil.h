#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CEfsUtil {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanEncrypt@CEfsUtil@@QEAAJPEAKPEAH@Z
    long CanEncrypt(unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEncryptFileWillSucceed@CEfsUtil@@QEAAJPEAUHWND__@@@Z
    long EnsureEncryptFileWillSucceed(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinRequired@CEfsUtil@@QEAAJPEAH@Z
    long IsPinRequired(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPinOnFile@CEfsUtil@@QEAAJPEAUHWND__@@@Z
    long SetPinOnFile(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SmartcardCredsNeededError@CEfsUtil@@SAHK@Z
    static int SmartcardCredsNeededError(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailIfOtherPromptsActive@CEfsUtil@@AEAAJPEAX@Z
    long FailIfOtherPromptsActive(void *);
};
