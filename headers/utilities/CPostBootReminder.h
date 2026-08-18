#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CPostBootReminder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CPostBootReminder@@UEAAJPEBU_tagSHELLREMINDER@@@Z
    virtual long Add(_tagSHELLREMINDER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CPostBootReminder@@UEAAJPEBG@Z
    virtual long Delete(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enum@CPostBootReminder@@UEAAJPEAPEAUIEnumShellReminder@@@Z
    virtual long Enum(IEnumShellReminder * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHandleSignaled@CPostBootReminder@@UEAAJPEAXIIPEAPEAXPEAI@Z
    virtual long OnHandleSignaled(void *, unsigned int, unsigned int, void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContinue@CPostBootReminder@@UEAAJXZ
    virtual long QueryContinue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CPostBootReminder@@UEAAJIPEAPEAXPEAI@Z
    virtual long Start(unsigned int, void * *, unsigned int *);
    // Category: Method | Source: PE Export
    // Symbol: ?Stop@CPostBootReminder@@UEAAJXZ
    virtual long Stop();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowLegacyBalloonReminders@CPostBootReminder@@AEAAJXZ
    long ShowLegacyBalloonReminders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProfsvcReminders@CPostBootReminder@@AEAAJXZ
    long ShowProfsvcReminders();
};
