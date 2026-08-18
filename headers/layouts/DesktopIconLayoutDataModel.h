#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class DesktopIconLayoutDataModel {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconCount@DesktopIconLayoutDataModel@@UEAAJPEA_K@Z
    virtual long GetIconCount(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcons@DesktopIconLayoutDataModel@@UEAAJPEAUIconGridItem@@_K@Z
    virtual long GetIcons(IconGridItem *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@DesktopIconLayoutDataModel@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@DesktopIconLayoutDataModel@@UEAAJPEAUIStream@@@Z
    virtual long Save(IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesktop@DesktopIconLayoutDataModel@@UEAAJPEBUGridWorkspace@@_KPEA_N@Z
    virtual long SetDesktop(GridWorkspace const *, uint64_t, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcons@DesktopIconLayoutDataModel@@UEAAJPEBUIconGridItem@@_KW4SetIconFlags@@@Z
    virtual long SetIcons(IconGridItem const *, uint64_t, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesktopIconLayoutDataModel@@QEAA@XZ
    ~DesktopIconLayoutDataModel();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostOperationValidate@DesktopIconLayoutDataModel@@IEAAJXZ
    long PostOperationValidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateDataModelIntegrity@DesktopIconLayoutDataModel@@IEAAJ_NPEAG_KPEA_N@Z
    long ValidateDataModelIntegrity(bool, unsigned short *, uint64_t, bool *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EscrowWaitComplete@DesktopIconLayoutDataModel@@AEAAJXZ
    long EscrowWaitComplete();
};
