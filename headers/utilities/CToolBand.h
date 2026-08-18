#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 45 member(s).
class CToolBand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CToolBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRenderComposited@CToolBand@@UEAAJPEAH@Z
    virtual long CanRenderComposited(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CToolBand@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CToolBand@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CToolBand@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCompositionState@CToolBand@@UEAAJPEAH@Z
    virtual long GetCompositionState(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSizeMax@CToolBand@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetToolbar@CToolBand@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetToolbar(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CToolBand@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CToolBand@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CToolBand@@UEAAJXZ
    virtual long IsDirty();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CToolBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CToolBand@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CToolBand@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CToolBand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ResizeBorderDW@CToolBand@@UEAAJPEBUtagRECT@@PEAUIUnknown@@H@Z
    virtual long ResizeBorderDW(tagRECT const *, IUnknown *, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCompositionState@CToolBand@@UEAAJH@Z
    virtual long SetCompositionState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CToolBand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PE Export
    // Symbol: ?ShowDW@CToolBand@@UEAAJH@Z
    virtual long ShowDW(int);
    // Category: Method | Source: PE Export
    // Symbol: ?TranslateAcceleratorGlobal@CToolBand@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorGlobal(tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?TranslateAcceleratorIO@CToolBand@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CToolBand@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CToolBand@@IEAA@XZ
    CToolBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BandInfoChanged@CToolBand@@IEAAJXZ
    long _BandInfoChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CToolBand@@MEAA@XZ
    virtual ~CToolBand();
};
