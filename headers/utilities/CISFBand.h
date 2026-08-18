#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 104 member(s).
class CISFBand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CISFBand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CISFBand@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CISFBand@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandInfo@CISFBand@@UEAAJKKPEAUDESKBANDINFO@@@Z
    virtual long GetBandInfo(unsigned long, unsigned long, DESKBANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandInfoSFB@CISFBand@@UEAAJPEAUBANDINFOSFB@@@Z
    virtual long GetBandInfoSFB(BANDINFOSFB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CISFBand@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultBandWidth@CISFBand@@UEAAJKKPEAH@Z
    virtual long GetDefaultBandWidth(unsigned long, unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolbar@CISFBand@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetToolbar(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSFB@CISFBand@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long InitializeSFB(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CISFBand@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CISFBand@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CISFBand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CISFBand@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CISFBand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CISFBand@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccelerators@CISFBand@@UEAAJH@Z
    virtual long SetAccelerators(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBandInfoSFB@CISFBand@@UEAAJPEAUBANDINFOSFB@@@Z
    virtual long SetBandInfoSFB(BANDINFOSFB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCascade@CISFBand@@UEAAJH@Z
    virtual long SetCascade(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoIcons@CISFBand@@UEAAJH@Z
    virtual long SetNoIcons(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoText@CISFBand@@UEAAJH@Z
    virtual long SetNoText(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CISFBand@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CISFBand@@UEAAJH@Z
    virtual long ShowDW(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CISFBand@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CISFBand@@IEAA@XZ
    CISFBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChange@CISFBand@@MEAAJJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    virtual long OnChange(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePager@CISFBand@@MEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* _CreatePager(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateToolbar@CISFBand@@MEAAJPEAUHWND__@@@Z
    virtual long _CreateToolbar(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DefWindowProc@CISFBand@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t _DefWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DropdownItem@CISFBand@@IEAAJPEFBU_ITEMID_CHILD@@I@Z
    long _DropdownItem(_ITEMID_CHILD & volatile *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixupAppDataDirectory@CISFBand@@IEAAXXZ
    void _FixupAppDataDirectory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenu@CISFBand@@MEAAPEAUHMENU__@@XZ
    virtual HMENU__* _GetContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIdealSize@CISFBand@@IEAAHPEAUtagSIZE@@@Z
    int _GetIdealSize(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTitleW@CISFBand@@MEAAJPEAGK@Z
    virtual long _GetTitleW(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IStreamFromOrderList@CISFBand@@IEAAJPEAUtagVARIANT@@@Z
    long _IStreamFromOrderList(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPidlVisible@CISFBand@@IEAAJPEFBU_ITEMID_CHILD@@@Z
    long _IsPidlVisible(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CISFBand@@MEAA_J_K_J@Z
    virtual int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenu@CISFBand@@MEAA_J_K_J@Z
    virtual int64_t _OnContextMenu(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCustomDraw@CISFBand@@MEAA_JPEAUtagNMCUSTOMDRAWINFO@@@Z
    virtual int64_t _OnCustomDraw(tagNMCUSTOMDRAWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDragBegin@CISFBand@@MEAAXHK@Z
    virtual void _OnDragBegin(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHotItemChange@CISFBand@@MEAA_JPEAUtagNMTBHOTITEM@@@Z
    virtual int64_t _OnHotItemChange(tagNMTBHOTITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CISFBand@@MEAA_JPEAUtagNMHDR@@@Z
    virtual int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OrderListFromIStream@CISFBand@@IEAAJPEAUtagVARIANT@@@Z
    long _OrderListFromIStream(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseMenuPopup@CISFBand@@IEAAXPEAPEAUIMenuPopup@@@Z
    void _ReleaseMenuPopup(IMenuPopup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCacheMenuPopup@CISFBand@@IEAAXPEAUIMenuPopup@@@Z
    void _SetCacheMenuPopup(IMenuPopup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDirty@CISFBand@@MEAAXH@Z
    virtual void _SetDirty(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TBStyleForPidl@CISFBand@@MEAAJPEFBU_ITEMID_CHILD@@PEAK11PEAH@Z
    virtual long _TBStyleForPidl(_ITEMID_CHILD & volatile *, unsigned long *, unsigned long *, unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToolbarChanged@CISFBand@@MEAAXXZ
    virtual void _ToolbarChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TrySimpleInvoke@CISFBand@@IEAA_JPEFBU_ITEMID_CHILD@@@Z
    int64_t _TrySimpleInvoke(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateIconSize@CISFBand@@MEAAHIH@Z
    virtual int _UpdateIconSize(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateVerticalMode@CISFBand@@IEAAXH@Z
    void _UpdateVerticalMode(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CISFBand@@MEAA@XZ
    virtual ~CISFBand();
};
