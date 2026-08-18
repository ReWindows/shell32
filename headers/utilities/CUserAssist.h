#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
class CUserAssist {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUserAssist@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpLogger@CUserAssist@@UEAAJPEBU_GUID@@@Z
    virtual long CleanUpLogger(_GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteEntry@CUserAssist@@UEAAJPEBU_GUID@@PEBG@Z
    virtual long DeleteEntry(_GUID const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enable@CUserAssist@@UEAAJH@Z
    virtual long Enable(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableLogger@CUserAssist@@UEAAJPEBU_GUID@@H@Z
    virtual long EnableLogger(_GUID const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireEvent@CUserAssist@@UEAAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z
    virtual long FireEvent(_GUID const *, int, unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoggerEnabled@CUserAssist@@UEAAJPEBU_GUID@@@Z
    virtual long IsLoggerEnabled(_GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryEntry@CUserAssist@@UEAAJPEBU_GUID@@PEBGPEAUtagUEMINFO@@@Z
    virtual long QueryEntry(_GUID const *, unsigned short const *, tagUEMINFO *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUserAssist@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterNotify@CUserAssist@@UEAAJP6AHPEAXPEBU_GUID@@PEBGW4tagUAEVENT@@@Z0H@Z
    virtual long RegisterNotify(int ( *)(void *, _GUID const *, unsigned short const *, int), void *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUserAssist@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameEntry@CUserAssist@@UEAAJPEBU_GUID@@PEBG1@Z
    virtual long RenameEntry(_GUID const *, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEntry@CUserAssist@@UEAAJPEBU_GUID@@PEBGPEAUtagUEMINFO@@@Z
    virtual long SetEntry(_GUID const *, unsigned short const *, tagUEMINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLoggerState@CUserAssist@@UEAAJI@Z
    virtual long UpdateLoggerState(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CUserAssist@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Lock@CUserAssist@@AEAAJH@Z
    long _Lock(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MayAdvanceOtherLogSession@CUserAssist@@AEAAXPEBU_GUID@@@Z
    void _MayAdvanceOtherLogSession(_GUID const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUserAssist@@EEAA@XZ
    virtual ~CUserAssist();
};
