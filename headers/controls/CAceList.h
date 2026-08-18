#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CAceList {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAclForExplicitEntries@CAceList@@QEAAJPEAXPEAPEAU_ACL@@@Z
    long GetAclForExplicitEntries(void *, _ACL * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAceList@@QEAA@XZ
    ~CAceList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAllowedAceToAcl@CAceList@@AEAAJQEAVCAce@@_NPEAU_ACL@@@Z
    long _AddAllowedAceToAcl(CAce * const, bool, _ACL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddExplicitAceToDpa@CAceList@@AEAAJAEAV?$CDPA@VCAce@@V?$CTContainer_PolicyUnOwned@VCAce@@@@@@PEAVCAce@@@Z
    long _AddExplicitAceToDpa(WindissectOpaque &, CAce *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRequiredExplictAclSize@CAceList@@AEAAKPEAXAEAV?$CDPA@VCAce@@V?$CTContainer_PolicyUnOwned@VCAce@@@@@@@Z
    unsigned long _GetRequiredExplictAclSize(void *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFromAcl@CAceList@@AEAAJPEAU_ACL@@@Z
    long _InitFromAcl(_ACL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FindAce@CAceList@@AEAAPEAVCAce@@AEAV?$CDPA@VCAce@@V?$CTContainer_PolicyUnOwned@VCAce@@@@@@PEAXEPEBV2@@Z
    CAce * s_FindAce(WindissectOpaque &, void *, unsigned char, CAce const *);
};
