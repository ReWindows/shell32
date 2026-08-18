#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CExecuteCommon {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CExecuteCommon@@UEAAJXZ
    virtual long Execute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CExecuteCommon@@SAJP6AJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@ZAEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(long ( *)(IUnknown *, IShellItemArray *, IBindCtx *), _GUID const &, void * *);
};
