#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CWordMatch {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWordMatch@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWordMatch@@QEAA@W4tagCONDITION_OPERATION@@@Z
    CWordMatch(int);
    // Category: Method | Source: PE Export
    // Symbol: ?EndAltPhrase@CWordMatch@@UEAAJXZ
    virtual long EndAltPhrase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWordMatch@@QEAAJPEBGKK@Z
    long Initialize(unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAltWord@CWordMatch@@UEAAJKPEBGKK@Z
    virtual long PutAltWord(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?PutBreak@CWordMatch@@UEAAJW4tagWORDREP_BREAK_TYPE@@@Z
    virtual long PutBreak(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWord@CWordMatch@@UEAAJKPEBGKK@Z
    virtual long PutWord(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWordMatch@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWordMatch@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?StartAltPhrase@CWordMatch@@UEAAJXZ
    virtual long StartAltPhrase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WordMatch@CWordMatch@@QEAAJPEBGPEAH@Z
    long WordMatch(unsigned short const *, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PutWordMatch@CWordMatch@@AEAAJKPEBGKK@Z
    long _PutWordMatch(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FillTextBuffer@CWordMatch@@CAJPEAUtagTEXT_SOURCE@@@Z
    static long s_FillTextBuffer(tagTEXT_SOURCE *);
};
