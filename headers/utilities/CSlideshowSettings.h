#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CSlideshowSettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Apply@CSlideshowSettings@@QEAAJ_N@Z
    long Apply(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSource@CSlideshowSettings@@QEBAPEAVCFileSource@@XZ
    CFileSource * GetFileSource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterval@CSlideshowSettings@@QEBAJPEAK@Z
    long GetInterval(unsigned long *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsEnabled@CSlideshowSettings@@QEBAJHPEAH@Z
    long GetIsEnabled(int, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastTickTime@CSlideshowSettings@@QEBAJPEA_K@Z
    long GetLastTickTime(uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CSlideshowSettings@@QEAAJ_N@Z
    long Load(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CSlideshowSettings@@QEAAJXZ
    long Save();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileSource@CSlideshowSettings@@QEAAJPEAVCFileSource@@@Z
    long SetFileSource(CFileSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterval@CSlideshowSettings@@QEAAJK@Z
    long SetInterval(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastTickTime@CSlideshowSettings@@QEAAJ_K@Z
    long SetLastTickTime(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShuffle@CSlideshowSettings@@QEAAJH@Z
    long SetShuffle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PolicyAllowsSlideshow@CSlideshowSettings@@SAJXZ
    static long s_PolicyAllowsSlideshow();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSlideshowSettings@@QEAA@XZ
    ~CSlideshowSettings();
};
