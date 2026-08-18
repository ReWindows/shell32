#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 62 member(s).
class CMVPToken {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMVPToken@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CMVPToken@@UEAAJPEAUIAdviseSink@@PEAK@Z
    virtual long Advise(IAdviseSink *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Close@CMVPToken@@UEAAJK@Z
    virtual long Close(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProvider@CMVPToken@@UEAAJPEAUIRawElementProviderWindowlessSite@@PEAPEAUIRawElementProviderSimple@@@Z
    virtual long CreateProvider(IRawElementProviderWindowlessSite *, IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoVerb@CMVPToken@@UEAAJJPEAUtagMSG@@PEAUIOleClientSite@@JPEAUHWND__@@PEBUtagRECT@@@Z
    virtual long DoVerb(long, tagMSG *, IOleClientSite *, long, HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CMVPToken@@UEAAJKJPEAXPEAUtagDVTARGETDEVICE@@PEAUHDC__@@2PEBU_RECTL@@3P6AH_K@Z4@Z
    virtual long Draw(unsigned long, long, void *, tagDVTARGETDEVICE *, HDC__*, HDC__*, _RECTL const *, _RECTL const *, int ( *)(uint64_t), uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumAdvise@CMVPToken@@UEAAJPEAPEAUIEnumSTATDATA@@@Z
    virtual long EnumAdvise(IEnumSTATDATA * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumVerbs@CMVPToken@@UEAAJPEAPEAUIEnumOLEVERB@@@Z
    virtual long EnumVerbs(IEnumOLEVERB * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Freeze@CMVPToken@@UEAAJKJPEAXPEAK@Z
    virtual long Freeze(unsigned long, long, void *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdvise@CMVPToken@@UEAAJPEAK0PEAPEAUIAdviseSink@@@Z
    virtual long GetAdvise(unsigned long *, unsigned long *, IAdviseSink * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientSite@CMVPToken@@UEAAJPEAPEAUIOleClientSite@@@Z
    virtual long GetClientSite(IOleClientSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipboardData@CMVPToken@@UEAAJKPEAPEAUIDataObject@@@Z
    virtual long GetClipboardData(unsigned long, IDataObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorSet@CMVPToken@@UEAAJKJPEAXPEAUtagDVTARGETDEVICE@@PEAUHDC__@@PEAPEAUtagLOGPALETTE@@@Z
    virtual long GetColorSet(unsigned long, long, void *, tagDVTARGETDEVICE *, HDC__*, tagLOGPALETTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedFragmentRoots@CMVPToken@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtent@CMVPToken@@UEAAJKPEAUtagSIZE@@@Z
    virtual long GetExtent(unsigned long, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMiscStatus@CMVPToken@@UEAAJKPEAK@Z
    virtual long GetMiscStatus(unsigned long, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMoniker@CMVPToken@@UEAAJKKPEAPEAUIMoniker@@@Z
    virtual long GetMoniker(unsigned long, unsigned long, IMoniker * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@CMVPToken@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CMVPToken@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@CMVPToken@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserClassID@CMVPToken@@UEAAJPEAU_GUID@@@Z
    virtual long GetUserClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserType@CMVPToken@@UEAAJKPEAPEAG@Z
    virtual long GetUserType(unsigned long, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitFromData@CMVPToken@@UEAAJPEAUIDataObject@@HK@Z
    virtual long InitFromData(IDataObject *, int, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsUpToDate@CMVPToken@@UEAAJXZ
    virtual long IsUpToDate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CMVPToken@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMVPToken@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMVPToken@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdvise@CMVPToken@@UEAAJKKPEAUIAdviseSink@@@Z
    virtual long SetAdvise(unsigned long, unsigned long, IAdviseSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClientSite@CMVPToken@@UEAAJPEAUIOleClientSite@@@Z
    virtual long SetClientSite(IOleClientSite *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetColorScheme@CMVPToken@@UEAAJPEAUtagLOGPALETTE@@@Z
    virtual long SetColorScheme(tagLOGPALETTE *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetExtent@CMVPToken@@UEAAJKPEAUtagSIZE@@@Z
    virtual long SetExtent(unsigned long, tagSIZE *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFocus@CMVPToken@@UEAAJXZ
    virtual long SetFocus();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetHostNames@CMVPToken@@UEAAJPEBG0@Z
    virtual long SetHostNames(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMoniker@CMVPToken@@UEAAJKPEAUIMoniker@@@Z
    virtual long SetMoniker(unsigned long, IMoniker *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetValue@CMVPToken@@UEAAJPEBG@Z
    virtual long SetValue(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CMVPToken@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Unfreeze@CMVPToken@@UEAAJK@Z
    virtual long Unfreeze(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Update@CMVPToken@@UEAAJXZ
    virtual long Update();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangle@CMVPToken@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FragmentRoot@CMVPToken@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@CMVPToken@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@CMVPToken@@UEAAJPEAH@Z
    virtual long get_IsReadOnly(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@CMVPToken@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@CMVPToken@@UEAAJPEAPEAG@Z
    virtual long get_Value(unsigned short * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAdviseHolder@CMVPToken@@AEAAJXZ
    long _EnsureAdviseHolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFont@CMVPToken@@AEAAPEAUHFONT__@@XZ
    HFONT__* _GetFont();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMVPToken@@AEAA@XZ
    ~CMVPToken();
};
