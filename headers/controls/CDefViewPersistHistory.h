#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 41 member(s).
class CDefViewPersistHistory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDefViewPersistHistory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CDefViewPersistHistory@@UEAAJPEAUIAdviseSink@@PEAK@Z
    virtual long Advise(IAdviseSink *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDefViewPersistHistory@@QEAA@XZ
    CDefViewPersistHistory();
    // Category: Method | Source: PE Export
    // Symbol: ?Close@CDefViewPersistHistory@@UEAAJK@Z
    virtual long Close(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?DoVerb@CDefViewPersistHistory@@UEAAJJPEAUtagMSG@@PEAUIOleClientSite@@JPEAUHWND__@@PEBUtagRECT@@@Z
    virtual long DoVerb(long, tagMSG *, IOleClientSite *, long, HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumAdvise@CDefViewPersistHistory@@UEAAJPEAPEAUIEnumSTATDATA@@@Z
    virtual long EnumAdvise(IEnumSTATDATA * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumVerbs@CDefViewPersistHistory@@UEAAJPEAPEAUIEnumOLEVERB@@@Z
    virtual long EnumVerbs(IEnumOLEVERB * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CDefViewPersistHistory@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientSite@CDefViewPersistHistory@@UEAAJPEAPEAUIOleClientSite@@@Z
    virtual long GetClientSite(IOleClientSite * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClipboardData@CDefViewPersistHistory@@UEAAJKPEAPEAUIDataObject@@@Z
    virtual long GetClipboardData(unsigned long, IDataObject * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetExtent@CDefViewPersistHistory@@UEAAJKPEAUtagSIZE@@@Z
    virtual long GetExtent(unsigned long, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMiscStatus@CDefViewPersistHistory@@UEAAJKPEAK@Z
    virtual long GetMiscStatus(unsigned long, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMoniker@CDefViewPersistHistory@@UEAAJKKPEAPEAUIMoniker@@@Z
    virtual long GetMoniker(unsigned long, unsigned long, IMoniker * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionCookie@CDefViewPersistHistory@@UEAAJPEAK@Z
    virtual long GetPositionCookie(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserClassID@CDefViewPersistHistory@@UEAAJPEAU_GUID@@@Z
    virtual long GetUserClassID(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetUserType@CDefViewPersistHistory@@UEAAJKPEAPEAG@Z
    virtual long GetUserType(unsigned long, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitFromData@CDefViewPersistHistory@@UEAAJPEAUIDataObject@@HK@Z
    virtual long InitFromData(IDataObject *, int, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsUpToDate@CDefViewPersistHistory@@UEAAJXZ
    virtual long IsUpToDate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadHistory@CDefViewPersistHistory@@UEAAJPEAUIStream@@PEAUIBindCtx@@@Z
    virtual long LoadHistory(IStream *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDefViewPersistHistory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDefViewPersistHistory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveHistory@CDefViewPersistHistory@@UEAAJPEAUIStream@@@Z
    virtual long SaveHistory(IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClientSite@CDefViewPersistHistory@@UEAAJPEAUIOleClientSite@@@Z
    virtual long SetClientSite(IOleClientSite *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetColorScheme@CDefViewPersistHistory@@UEAAJPEAUtagLOGPALETTE@@@Z
    virtual long SetColorScheme(tagLOGPALETTE *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetExtent@CDefViewPersistHistory@@UEAAJKPEAUtagSIZE@@@Z
    virtual long SetExtent(unsigned long, tagSIZE *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetHostNames@CDefViewPersistHistory@@UEAAJPEBG0@Z
    virtual long SetHostNames(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMoniker@CDefViewPersistHistory@@UEAAJKPEAUIMoniker@@@Z
    virtual long SetMoniker(unsigned long, IMoniker *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPositionCookie@CDefViewPersistHistory@@UEAAJK@Z
    virtual long SetPositionCookie(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Unadvise@CDefViewPersistHistory@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Update@CDefViewPersistHistory@@UEAAJXZ
    virtual long Update();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadFromPropertyBag@CDefViewPersistHistory@@AEAAXPEAUIPropertyBag@@@Z
    void _LoadFromPropertyBag(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveToPropertyBag@CDefViewPersistHistory@@AEAAXPEAUIPropertyBag@@@Z
    void _SaveToPropertyBag(IPropertyBag *);
};
