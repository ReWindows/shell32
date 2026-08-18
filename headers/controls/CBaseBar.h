#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 46 member(s).
class CBaseBar {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBaseBar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CBaseBar@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CBaseBar@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClient@CBaseBar@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetClient(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CBaseBar@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CBaseBar@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PE Export
    // Symbol: ?OnFocusChangeIS@CBaseBar@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPosRectChangeDB@CBaseBar@@UEAAJPEAUtagRECT@@@Z
    virtual long OnPosRectChangeDB(tagRECT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBaseBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryService@CBaseBar@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CBaseBar@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBaseBar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClient@CBaseBar@@UEAAJPEAUIUnknown@@@Z
    virtual long SetClient(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CBaseBar@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CBaseBar@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CBaseBar@@MEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CBaseBar@@MEAAJH@Z
    virtual long ShowDW(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckForwardWinEvent@CBaseBar@@IEAAHI_K_JPEA_J@Z
    int _CheckForwardWinEvent(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetClassStyle@CBaseBar@@MEAAKXZ
    virtual unsigned long _GetClassStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExStyle@CBaseBar@@MEAAKXZ
    virtual unsigned long _GetExStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyModeChange@CBaseBar@@MEAAXK@Z
    virtual void _NotifyModeChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CBaseBar@@MEAA_JI_K_J@Z
    virtual int64_t _OnCommand(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreate@CBaseBar@@MEAAXXZ
    virtual void _OnCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CBaseBar@@MEAA_JI_K_J@Z
    virtual int64_t _OnNotify(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?_OnPostedPosRectChange@CBaseBar@@MEAAXXZ
    virtual void _OnPostedPosRectChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSize@CBaseBar@@MEAAXXZ
    virtual void _OnSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CBaseBar@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBaseBar@@MEAA@XZ
    virtual ~CBaseBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDeskBarWindow@CBaseBar@@AEAAXXZ
    void _CreateDeskBarWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterDeskBarClass@CBaseBar@@AEAAXXZ
    void _RegisterDeskBarClass();
};
