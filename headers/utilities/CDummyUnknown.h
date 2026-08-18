#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
class CDummyUnknown {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDummyUnknown@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDummyUnknown@@QEAA@PEAUHWND__@@@Z
    CDummyUnknown(HWND__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDummyUnknown@@QEAA@XZ
    CDummyUnknown();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDummyUnknown@@QEAA@AEBU_GUID@@@Z
    CDummyUnknown(_GUID const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDummyUnknown@@QEAA@W4FOLDER_ENUM_MODE@@@Z
    CDummyUnknown(int);
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CDummyUnknown@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CDummyUnknown@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMode@CDummyUnknown@@UEAAJPEAW4FOLDER_ENUM_MODE@@@Z
    virtual long GetMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CDummyUnknown@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDummyUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDummyUnknown@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMode@CDummyUnknown@@UEAAJW4FOLDER_ENUM_MODE@@@Z
    virtual long SetMode(int);
};
