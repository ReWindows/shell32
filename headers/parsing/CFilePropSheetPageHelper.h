#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CFilePropSheetPageHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFilePropSheetPageHelper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFilePropSheetPageHelper@@QEAA@XZ
    CFilePropSheetPageHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompressFile@CFilePropSheetPageHelper@@UEAAJPEBGH@Z
    virtual long CompressFile(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncryptFileW@CFilePropSheetPageHelper@@UEAAJPEBGHHPEAUHWND__@@@Z
    virtual long EncryptFileW(unsigned short const *, int, int, HWND__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFilePropSheetPageHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFilePropSheetPageHelper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveZoneInfo@CFilePropSheetPageHelper@@UEAAJPEBG@Z
    virtual long RemoveZoneInfo(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAttributes@CFilePropSheetPageHelper@@UEAAJPEBGK@Z
    virtual long SetAttributes(unsigned short const *, unsigned long);
};
