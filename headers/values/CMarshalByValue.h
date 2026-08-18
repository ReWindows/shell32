#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CMarshalByValue {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMarshalByValue@@QEAA@XZ
    CMarshalByValue();
    // Category: Method | Source: PE Export
    // Symbol: ?DisconnectObject@CMarshalByValue@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@CMarshalByValue@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@CMarshalByValue@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@CMarshalByValue@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?ReleaseMarshalData@CMarshalByValue@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CMarshalByValue@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedMarshalContext@CMarshalByValue@@MEAA_NK@Z
    virtual bool IsSupportedMarshalContext(unsigned long);
};
