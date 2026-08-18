#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CTaskXmlFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendStrippedId@CTaskXmlFile@@QEAAJPEBG@Z
    long AppendStrippedId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindApplet@CTaskXmlFile@@SAHPEBG0_J@Z
    static int FindApplet(unsigned short const *, unsigned short const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFile@CTaskXmlFile@@SAHPEBV1@0_J@Z
    static int FindFile(CTaskXmlFile const *, CTaskXmlFile const *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskXmlFile@@QEAA@XZ
    ~CTaskXmlFile();
};
