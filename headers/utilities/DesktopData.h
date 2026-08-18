#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 31 member(s).
class DesktopData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitEscrowedIcons@DesktopData@@QEAAJPEAW4SetIconFlags@@@Z
    long CommitEscrowedIcons(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFromLinkTargetAndUnlink@DesktopData@@QEAAJXZ
    long CopyFromLinkTargetAndUnlink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@DesktopData@@UEAAJPEAUIStream@@@Z
    virtual long Deserialize(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixupShiftedLinkProblems@DesktopData@@QEAAJXZ
    long FixupShiftedLinkProblems();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataForTracelog@DesktopData@@QEBAJAEAUDesktopDataForTracelog@@@Z
    long GetDataForTracelog(DesktopDataForTracelog &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconCount@DesktopData@@QEBAJPEA_K@Z
    long GetIconCount(uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcons@DesktopData@@QEAAJPEAUIconGridItem@@_K@Z
    long GetIcons(IconGridItem *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUtilizedWorkspaceKeys@DesktopData@@QEBAJPEAUGridWorkspace@@_K@Z
    long GetUtilizedWorkspaceKeys(GridWorkspace *, uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkspace@DesktopData@@QEBAJ_KPEAPEAVWorkspaceData@@@Z
    long GetWorkspace(uint64_t, WorkspaceData * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkspaceUtilizationInfo@DesktopData@@QEBAJPEA_N0PEA_K00@Z
    long GetWorkspaceUtilizationInfo(bool *, bool *, uint64_t *, bool *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DesktopData@@QEAAJPEBUGridWorkspace@@_K@Z
    long Init(GridWorkspace const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLinked@DesktopData@@QEBA_NXZ
    bool IsLinked() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLinkedTo@DesktopData@@QEBA_NPEBV1@@Z
    bool IsLinkedTo(DesktopData const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LinkTo@DesktopData@@QEAAJPEBV1@PEBVDesktopMatchInformation@@@Z
    long LinkTo(DesktopData const *, DesktopMatchInformation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LooksTheSameToTheUser@DesktopData@@QEBAJPEBV1@_NPEA_N@Z
    long LooksTheSameToTheUser(DesktopData const *, bool, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveIconsAgainstCurrentDesktop@DesktopData@@QEAAJPEBVDesktopDictionary@@PEAV1@W4SetIconFlags@@@Z
    long ResolveIconsAgainstCurrentDesktop(DesktopDictionary const *, DesktopData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveLink@DesktopData@@QEAAJPEBVDesktopDictionary@@PEA_N@Z
    long ResolveLink(DesktopDictionary const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@DesktopData@@UEAAJPEAUIStream@@PEAG@Z
    virtual long Serialize(IStream *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGutters@DesktopData@@QEAAJPEBUGridWorkspace@@_K@Z
    long SetGutters(GridWorkspace const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcons@DesktopData@@QEAAJPEBUIconGridItem@@_KW4SetIconFlags@@@Z
    long SetIcons(IconGridItem const *, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSerialize@DesktopData@@QEAAJPEA_N@Z
    long ShouldSerialize(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@DesktopData@@UEAAJPEAG_KPEA_N@Z
    virtual long Validate(unsigned short *, uint64_t, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesktopData@@QEAA@XZ
    ~DesktopData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUnmappedIcons@DesktopData@@AEAAJPEBVDesktopDictionary@@PEAPEBUIconGridItem@@_KW4SetIconFlags@@@Z
    long AddUnmappedIcons(DesktopDictionary const *, IconGridItem const * *, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteIcons@DesktopData@@AEAAJPEAPEBUIconGridItem@@_K@Z
    long DeleteIcons(IconGridItem const * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLinkedKey@DesktopData@@AEAAJPEAUIStream@@@Z
    long ReadLinkedKey(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadVersionInfo@DesktopData@@AEAAJPEAUIStream@@@Z
    long ReadVersionInfo(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadWorkspaces@DesktopData@@AEAAJPEAUIStream@@@Z
    long ReadWorkspaces(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnLink@DesktopData@@AEAAJXZ
    long UnLink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlinkIfEscrowedIconsNecessitate@DesktopData@@AEAAJXZ
    long UnlinkIfEscrowedIconsNecessitate();
};
