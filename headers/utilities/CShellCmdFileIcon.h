#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
class CShellCmdFileIcon {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellCmdFileIcon@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellCmdFileIcon@@QEAA@XZ
    CShellCmdFileIcon();
    // Category: Method | Source: PE Export
    // Symbol: ?Extract@CShellCmdFileIcon@@UEAAJPEBDIPEAPEAUHICON__@@1I@Z
    virtual long Extract(char const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Extract@CShellCmdFileIcon@@UEAAJPEBGIPEAPEAUHICON__@@1I@Z
    virtual long Extract(unsigned short const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CShellCmdFileIcon@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFile@CShellCmdFileIcon@@UEAAJPEAPEAG@Z
    virtual long GetCurFile(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CShellCmdFileIcon@@UEAAJIPEADIPEAHPEAI@Z
    virtual long GetIconLocation(unsigned int, char *, unsigned int, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CShellCmdFileIcon@@UEAAJIPEAGIPEAHPEAI@Z
    virtual long GetIconLocation(unsigned int, unsigned short *, unsigned int, int *, unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CShellCmdFileIcon@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CShellCmdFileIcon@@UEAAJPEBGK@Z
    virtual long Load(unsigned short const *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellCmdFileIcon@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellCmdFileIcon@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CShellCmdFileIcon@@UEAAJPEBGH@Z
    virtual long Save(unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?SaveCompleted@CShellCmdFileIcon@@UEAAJPEBG@Z
    virtual long SaveCompleted(unsigned short const *);
};
