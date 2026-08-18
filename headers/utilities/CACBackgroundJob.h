#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CACBackgroundJob {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateCompletionList@CACBackgroundJob@@QEAAKPEAVCACBackgroundJobInitData@@@Z
    unsigned long GenerateCompletionList(CACBackgroundJobInitData *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialPrefixLen@CACBackgroundJob@@KAHPEBG@Z
    static int GetSpecialPrefixLen(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MatchesSpecialPrefix@CACBackgroundJob@@KAHPEBG@Z
    static int MatchesSpecialPrefix(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToList@CACBackgroundJob@@IEAAHPEBGHKPEAU_DPA@@PEAK@Z
    int _AddToList(unsigned short const *, int, unsigned long, _DPA *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoExpand@CACBackgroundJob@@IEAAXPEBG@Z
    void _DoExpand(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DpaCompare@CACBackgroundJob@@KAHPEBX0_J@Z
    static int _DpaCompare(void const *, void const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MungeACList@CACBackgroundJob@@IEAAXPEAU_DPA@@@Z
    void _MungeACList(_DPA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Next@CACBackgroundJob@@IEAAJPEAGKPEAK@Z
    long _Next(unsigned short *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Search@CACBackgroundJob@@IEAAXPEBGPEBU_ITEMIDLIST_ABSOLUTE@@KKPEAUIAutoCompTestHook@@@Z
    void _Search(unsigned short const *, _ITEMIDLIST_ABSOLUTE const *, unsigned long, unsigned long, IAutoCompTestHook *);
};
