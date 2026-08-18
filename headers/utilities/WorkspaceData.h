#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
class WorkspaceData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIcons@WorkspaceData@@QEAAJQEBVIconGridItemWorker@@_K1W4SetIconFlags@@@Z
    long AddIcons(IconGridItemWorker const * const, uint64_t, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUnmappedIcon@WorkspaceData@@QEAAJPEBUIconGridItem@@W4SetIconFlags@@@Z
    long AddUnmappedIcon(IconGridItem const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteIcon@WorkspaceData@@QEAAJPEBUIconGridItem@@@Z
    long DeleteIcon(IconGridItem const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@WorkspaceData@@UEAAJPEAUIStream@@@Z
    virtual long Deserialize(IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconCopies@WorkspaceData@@QEBAJQEAVIconGridItemWorker@@_K@Z
    long GetIconCopies(IconGridItemWorker * const, uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShift@WorkspaceData@@QEBAJPEBV1@PEAUSIZEF@@@Z
    long GetShift(WorkspaceData const *, SIZEF *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUtilizedRect@WorkspaceData@@QEBAJPEAURECTF@@@Z
    long GetUtilizedRect(RECTF *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconIsOnScreen@WorkspaceData@@QEBA_NUIconGridPosition@@W4SetIconFlags@@@Z
    bool IconIsOnScreen(IconGridPosition, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIgnorable@WorkspaceData@@QEBA_NXZ
    bool IsIgnorable() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@WorkspaceData@@UEAAJPEAUIStream@@PEAG@Z
    virtual long Serialize(IStream *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcons@WorkspaceData@@QEAAJQEBVIconGridItemWorker@@_K1W4SetIconFlags@@@Z
    long SetIcons(IconGridItemWorker const * const, uint64_t, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@WorkspaceData@@UEAAJPEAG_KPEA_N@Z
    virtual long Validate(unsigned short *, uint64_t, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WorkspaceData@@QEAA@XZ
    ~WorkspaceData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustCollidingIcons@WorkspaceData@@AEAAJMMPEAM0PEA_NW4SetIconFlags@@@Z
    long AdjustCollidingIcons(float, float, float *, float *, bool *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollidesWithAnyIcon@WorkspaceData@@AEBAJMMPEA_NW4SetIconFlags@@@Z
    long CollidesWithAnyIcon(float, float, bool *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadIcons@WorkspaceData@@AEAAJPEAUIStream@@@Z
    long ReadIcons(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadShift@WorkspaceData@@AEAAJPEAUIStream@@@Z
    long ReadShift(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadVersionInfo@WorkspaceData@@AEAAJPEAUIStream@@PEAH@Z
    long ReadVersionInfo(IStream *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveOffScreenIcons@WorkspaceData@@AEAAJPEA_NW4SetIconFlags@@@Z
    long ResolveOffScreenIcons(bool *, int);
};
