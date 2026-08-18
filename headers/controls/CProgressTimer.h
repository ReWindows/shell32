#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
class CProgressTimer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProgressTimer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMillisecondsActualElapsed@CProgressTimer@@UEAAJPEA_K@Z
    virtual long GetMillisecondsActualElapsed(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMillisecondsProgress@CProgressTimer@@UEAAJPEA_K@Z
    virtual long GetMillisecondsProgress(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMillisecondsRemaining@CProgressTimer@@UEAAJPEA_K@Z
    virtual long GetMillisecondsRemaining(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginalEstimate@CProgressTimer@@UEAAJPEA_K@Z
    virtual long GetOriginalEstimate(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgress@CProgressTimer@@UEAAJPEA_K0@Z
    virtual long GetProgress(uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeRemaining@CProgressTimer@@UEAAJPEAGIPEA_K@Z
    virtual long GetTimeRemaining(unsigned short *, unsigned int, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseTimer@CProgressTimer@@UEAAJXZ
    virtual long PauseTimer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProgressTimer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProgressTimer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetTimer@CProgressTimer@@UEAAJXZ
    virtual long ResetTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeTimer@CProgressTimer@@UEAAJXZ
    virtual long ResumeTimer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@CProgressTimer@@UEAAJ_K0@Z
    virtual long SetProgress(uint64_t, uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddData@CProgressTimer@@AEAAX_K0@Z
    void _AddData(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddMeanData@CProgressTimer@@AEAAX_K@Z
    void _AddMeanData(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeResults@CProgressTimer@@AEAAHPEAUPROGRESS_RESULTS@1@@Z
    int _ComputeResults(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTick@CProgressTimer@@AEAA_KXZ
    uint64_t _GetTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitData@CProgressTimer@@AEAAXXZ
    void _InitData();
};
