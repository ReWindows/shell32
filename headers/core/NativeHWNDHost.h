#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
namespace DirectUI {
class NativeHWNDHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHostWindow@NativeHWNDHost@DirectUI@@UEAAPEAUHWND__@@KPEBG0KHHHHPEAU3@PEAUHMENU__@@PEAUHINSTANCE__@@PEAX@Z
    virtual HWND__* CreateHostWindow(unsigned long, unsigned short const *, unsigned short const *, unsigned long, int, int, int, int, HWND__*, HMENU__*, HINSTANCE__*, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NativeHWNDHost@DirectUI@@UEAA@XZ
    virtual ~NativeHWNDHost();
};
} // namespace DirectUI
