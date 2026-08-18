#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CKeywordStringWordSink {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?EndAltPhrase@CKeywordStringWordSink@@UEAAJXZ
    virtual long EndAltPhrase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAltWord@CKeywordStringWordSink@@UEAAJKPEBGKK@Z
    virtual long PutAltWord(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?PutBreak@CKeywordStringWordSink@@UEAAJW4tagWORDREP_BREAK_TYPE@@@Z
    virtual long PutBreak(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutWord@CKeywordStringWordSink@@UEAAJKPEBGKK@Z
    virtual long PutWord(unsigned long, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?StartAltPhrase@CKeywordStringWordSink@@UEAAJXZ
    virtual long StartAltPhrase();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKeywordStringWordSink@@UEAA@XZ
    virtual ~CKeywordStringWordSink();
};
