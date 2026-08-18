#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class DesktopDictionary {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDesktop@DesktopDictionary@@QEAAJPEAPEAVDesktopData@@@Z
    long AddDesktop(DesktopData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@DesktopDictionary@@UEAAJPEAUIStream@@@Z
    virtual long Deserialize(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDesktopIndex@DesktopDictionary@@QEBAJPEBGPEBVDesktopData@@PEA_KPEA_N@Z
    long FindDesktopIndex(unsigned short const *, DesktopData const *, uint64_t *, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktop@DesktopDictionary@@QEBAJ_KPEAPEAVDesktopData@@@Z
    long GetDesktop(uint64_t, DesktopData * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopLinkTarget@DesktopDictionary@@QEBAJPEBVDesktopData@@PEA_N@Z
    long IsDesktopLinkTarget(DesktopData const *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Purge@DesktopDictionary@@QEAAJPEBVDesktopData@@PEA_K@Z
    long Purge(DesktopData const *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveUneccessaryLinks@DesktopDictionary@@QEAAJPEBVDesktopData@@PEA_K@Z
    long RemoveUneccessaryLinks(DesktopData const *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveIconsAgainstCurrentDesktop@DesktopDictionary@@QEBAJPEAVDesktopData@@W4SetIconFlags@@@Z
    long ResolveIconsAgainstCurrentDesktop(DesktopData *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@DesktopDictionary@@UEAAJPEAUIStream@@PEAG@Z
    virtual long Serialize(IStream *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@DesktopDictionary@@UEAAJPEAG_KPEA_N@Z
    virtual long Validate(unsigned short *, uint64_t, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesktopDictionary@@QEAA@XZ
    ~DesktopDictionary();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadDesktops@DesktopDictionary@@AEAAJPEAUIStream@@@Z
    long ReadDesktops(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInMemoryDesktop@DesktopDictionary@@AEAAJPEBVDesktopData@@PEA_N@Z
    long RemoveInMemoryDesktop(DesktopData const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveUneccessaryLinksWorker@DesktopDictionary@@AEAAJPEBVDesktopData@@@Z
    long RemoveUneccessaryLinksWorker(DesktopData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteDesktops@DesktopDictionary@@AEAAJPEAUIStream@@PEAG@Z
    long WriteDesktops(IStream *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteIconNameTable@DesktopDictionary@@AEAAJPEAUIStream@@PEAG@Z
    long WriteIconNameTable(IStream *, unsigned short *);
};
