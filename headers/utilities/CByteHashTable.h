#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CByteHashTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CByteHashTable@@QEAAJIIIIP6AIPEBEII@Z@Z
    long Create(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int ( *)(unsigned char const *, unsigned int, unsigned int));
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddUpdateItem@CByteHashTable@@AEAAJHPEBEI0IPEAEI@Z
    long _AddUpdateItem(int, unsigned char const *, unsigned int, unsigned char const *, unsigned int, unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValue@CByteHashTable@@AEBAJPEBEIPEAPEAEPEAHPEAEH@Z
    long _GetValue(unsigned char const *, unsigned int, unsigned char * *, int *, unsigned char *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValueWorker@CByteHashTable@@AEBAJPEAUBHASHENTRY@1@PEAPEAEPEAHPEAEI@Z
    long _GetValueWorker(WindissectOpaque *, unsigned char * *, int *, unsigned char *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GrowTable@CByteHashTable@@AEAAXXZ
    void _GrowTable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveCallback@CByteHashTable@@AEAAXHP6AXPEAEIPEAX@Z1@Z
    void _RemoveCallback(int, void ( *)(unsigned char *, unsigned int, void *), void *);
};
