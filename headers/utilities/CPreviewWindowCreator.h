#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CPreviewWindowCreator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPreviewWindowCreator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CPreviewWindowCreator@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CPreviewWindowCreator@@SAJAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CPreviewWindowCreator@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPreviewWindowCreator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPreviewWindowCreator@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPreviewWindowCreator@@AEAA@XZ
    CPreviewWindowCreator();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPreviewWindowCreator@@AEAA@XZ
    ~CPreviewWindowCreator();
};
