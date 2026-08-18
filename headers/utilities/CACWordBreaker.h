#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CACWordBreaker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CACWordBreaker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakText@CACWordBreaker@@QEAAJPEBG@Z
    long BreakText(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?EndAltPhrase@CACWordBreaker@@UEAAJXZ
    virtual long EndAltPhrase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextWord@CACWordBreaker@@QEAAJPEAPEBG@Z
    long GetNextWord(unsigned short const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CACWordBreaker@@QEAAJXZ
    long Init();
    // Category: Method | Source: PE Export
    // Symbol: ?PutAltWord@CACWordBreaker@@UEAAJKPEBGKK@Z
    virtual long PutAltWord(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?PutBreak@CACWordBreaker@@UEAAJW4tagWORDREP_BREAK_TYPE@@@Z
    virtual long PutBreak(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWord@CACWordBreaker@@UEAAJKPEBGKK@Z
    virtual long PutWord(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CACWordBreaker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CACWordBreaker@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?StartAltPhrase@CACWordBreaker@@UEAAJXZ
    virtual long StartAltPhrase();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CACWordBreaker@@MEAA@XZ
    virtual ~CACWordBreaker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BreakPhrases@CACWordBreaker@@AEAAJPEAG@Z
    long _BreakPhrases(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PFNFillTextBuffer@CACWordBreaker@@CAJPEAUtagTEXT_SOURCE@@@Z
    static long s_PFNFillTextBuffer(tagTEXT_SOURCE *);
};
