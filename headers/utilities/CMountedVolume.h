#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CMountedVolume {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMountedVolume@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMountedVolume@@QEAA@XZ
    CMountedVolume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DAdvise@CMountedVolume@@UEAAJPEAUtagFORMATETC@@KPEAUIAdviseSink@@PEAK@Z
    virtual long DAdvise(tagFORMATETC *, unsigned long, IAdviseSink *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DUnadvise@CMountedVolume@@UEAAJK@Z
    virtual long DUnadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumDAdvise@CMountedVolume@@UEAAJPEAPEAUIEnumSTATDATA@@@Z
    virtual long EnumDAdvise(IEnumSTATDATA * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumFormatEtc@CMountedVolume@@UEAAJKPEAPEAUIEnumFORMATETC@@@Z
    virtual long EnumFormatEtc(unsigned long, IEnumFORMATETC * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCanonicalFormatEtc@CMountedVolume@@UEAAJPEAUtagFORMATETC@@0@Z
    virtual long GetCanonicalFormatEtc(tagFORMATETC *, tagFORMATETC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@CMountedVolume@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long GetData(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDataHere@CMountedVolume@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long GetDataHere(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMountedVolume@@UEAAJPEBG@Z
    virtual long Initialize(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryGetData@CMountedVolume@@UEAAJPEAUtagFORMATETC@@@Z
    virtual long QueryGetData(tagFORMATETC *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMountedVolume@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMountedVolume@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetData@CMountedVolume@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@H@Z
    virtual long SetData(tagFORMATETC *, tagSTGMEDIUM *, int);
};
