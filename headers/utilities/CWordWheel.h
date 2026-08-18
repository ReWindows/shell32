#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CWordWheel {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Enter@CWordWheel@@UEAAJPEAUIShellSearchScope@@@Z
    virtual long Enter(IShellSearchScope *);
    // Category: Method | Source: PE Export
    // Symbol: ?Exit@CWordWheel@@UEAAJXZ
    virtual long Exit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetACEnumString@CWordWheel@@UEAAJPEAPEAUIEnumString@@@Z
    virtual long GetACEnumString(IEnumString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenu@CWordWheel@@UEAAJPEAPEAUHMENU__@@@Z
    virtual long GetMenu(HMENU__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPromptText@CWordWheel@@UEAAJPEAGI@Z
    virtual long GetPromptText(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchText@CWordWheel@@UEAAJPEAGI@Z
    virtual long GetSearchText(unsigned short *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?InitMenuPopup@CWordWheel@@UEAAJPEAUHMENU__@@@Z
    virtual long InitMenuPopup(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitSearchTarget@CWordWheel@@QEAAJXZ
    long InitSearchTarget();
    // Category: Method | Source: PE Export
    // Symbol: ?OnMenuCommand@CWordWheel@@UEAAJK@Z
    virtual long OnMenuCommand(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchTextNotify@CWordWheel@@UEAAJPEBG0W4SHELLSEARCHNOTIFY@@@Z
    virtual long OnSearchTextNotify(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Search@CWordWheel@@UEAAJPEBGK@Z
    virtual long Search(unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchBoxKeyPress@CWordWheel@@UEAAJH@Z
    virtual long SetSearchBoxKeyPress(int);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?v_IsRootEntryAutoNavigated@CWordWheel@@MEAAHXZ
    virtual int v_IsRootEntryAutoNavigated();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWordWheel@@MEAA@XZ
    virtual ~CWordWheel();
};
