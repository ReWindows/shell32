#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CMVPTokenData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMVPTokenData@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?DAdvise@CMVPTokenData@@UEAAJPEAUtagFORMATETC@@KPEAUIAdviseSink@@PEAK@Z
    virtual long DAdvise(tagFORMATETC *, unsigned long, IAdviseSink *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?DUnadvise@CMVPTokenData@@UEAAJK@Z
    virtual long DUnadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumDAdvise@CMVPTokenData@@UEAAJPEAPEAUIEnumSTATDATA@@@Z
    virtual long EnumDAdvise(IEnumSTATDATA * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumFormatEtc@CMVPTokenData@@UEAAJKPEAPEAUIEnumFORMATETC@@@Z
    virtual long EnumFormatEtc(unsigned long, IEnumFORMATETC * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalFormatEtc@CMVPTokenData@@UEAAJPEAUtagFORMATETC@@0@Z
    virtual long GetCanonicalFormatEtc(tagFORMATETC *, tagFORMATETC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@CMVPTokenData@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long GetData(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataHere@CMVPTokenData@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long GetDataHere(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryGetData@CMVPTokenData@@UEAAJPEAUtagFORMATETC@@@Z
    virtual long QueryGetData(tagFORMATETC *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMVPTokenData@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMVPTokenData@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetData@CMVPTokenData@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@H@Z
    virtual long SetData(tagFORMATETC *, tagSTGMEDIUM *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillUnicodeText@CMVPTokenData@@AEAAXPEAGK@Z
    void _FillUnicodeText(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDataAsUnicodeText@CMVPTokenData@@AEAAJPEBUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    long _GetDataAsUnicodeText(tagFORMATETC const *, tagSTGMEDIUM *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMVPTokenData@@AEAA@XZ
    ~CMVPTokenData();
};
