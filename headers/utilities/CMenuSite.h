#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 51 member(s).
class CMenuSite {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBand@CMenuSite@@UEAAJPEAUIUnknown@@@Z
    virtual long AddBand(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMenuSite@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CMenuSite@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumBands@CMenuSite@@UEAAJIPEAK@Z
    virtual long EnumBands(unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CMenuSite@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandObject@CMenuSite@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetBandObject(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBandSiteInfo@CMenuSite@@UEAAJPEAUtagBANDSITEINFO@@@Z
    virtual long GetBandSiteInfo(tagBANDSITEINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CMenuSite@@UEAAJKPEAUtagRECT@@@Z
    virtual long GetSize(unsigned long, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CMenuSite@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasFocusIO@CMenuSite@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOwner@CMenuSite@@UEAAJPEAUHWND__@@@Z
    virtual long IsWindowOwner(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?OnFocusChangeIS@CMenuSite@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWinEvent@CMenuSite@@UEAAJPEAUHWND__@@I_K_JPEA_J@Z
    virtual long OnWinEvent(HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryBand@CMenuSite@@UEAAJKPEAPEAUIDeskBand@@PEAKPEAGH@Z
    virtual long QueryBand(unsigned long, IDeskBand * *, unsigned long *, unsigned short *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMenuSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CMenuSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CMenuSite@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMenuSite@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveBand@CMenuSite@@UEAAJK@Z
    virtual long RemoveBand(unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBandSiteInfo@CMenuSite@@UEAAJPEBUtagBANDSITEINFO@@@Z
    virtual long SetBandSiteInfo(tagBANDSITEINFO const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBandState@CMenuSite@@UEAAJKKK@Z
    virtual long SetBandState(unsigned long, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeskBarSite@CMenuSite@@UEAAJPEAUIUnknown@@@Z
    virtual long SetDeskBarSite(IUnknown *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetModeDBC@CMenuSite@@UEAAJK@Z
    virtual long SetModeDBC(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?TranslateAcceleratorIO@CMenuSite@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateDBC@CMenuSite@@UEAAJK@Z
    virtual long UIActivateDBC(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CMenuSite@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheSubActiveBand@CMenuSite@@IEAAXPEAUIUnknown@@@Z
    void _CacheSubActiveBand(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSite@CMenuSite@@IEAAXPEAUHWND__@@@Z
    void _CreateSite(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CMenuSite@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
