#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 51 member(s).
class CAccessible {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAccessible@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAccessible@@QEAA@PEAUIMenuBand@@@Z
    CAccessible(IMenuBand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CAccessible@@UEAAJPEAPEAUIEnumVARIANT@@@Z
    virtual long Clone(IEnumVARIANT * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CAccessible@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CAccessible@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CAccessible@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CAccessible@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CAccessible@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitAcc@CAccessible@@QEAAJXZ
    long InitAcc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CAccessible@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CAccessible@@UEAAJKPEAUtagVARIANT@@PEAK@Z
    virtual long Next(unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAccessible@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAccessible@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CAccessible@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CAccessible@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accDoDefaultAction@CAccessible@@UEAAJUtagVARIANT@@@Z
    virtual long accDoDefaultAction(tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accHitTest@CAccessible@@UEAAJJJPEAUtagVARIANT@@@Z
    virtual long accHitTest(long, long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accLocation@CAccessible@@UEAAJPEAJ000UtagVARIANT@@@Z
    virtual long accLocation(long *, long *, long *, long *, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accNavigate@CAccessible@@UEAAJJUtagVARIANT@@PEAU2@@Z
    virtual long accNavigate(long, tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accSelect@CAccessible@@UEAAJJUtagVARIANT@@@Z
    virtual long accSelect(long, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accChild@CAccessible@@UEAAJUtagVARIANT@@PEAPEAUIDispatch@@@Z
    virtual long get_accChild(tagVARIANT, IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accChildCount@CAccessible@@UEAAJPEAJ@Z
    virtual long get_accChildCount(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accDefaultAction@CAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accDefaultAction(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accDescription@CAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accDescription(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accFocus@CAccessible@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accFocus(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accHelp@CAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accHelp(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accHelpTopic@CAccessible@@UEAAJPEAPEAGUtagVARIANT@@PEAJ@Z
    virtual long get_accHelpTopic(unsigned short * *, tagVARIANT, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accKeyboardShortcut@CAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accKeyboardShortcut(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accName@CAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accName(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accParent@CAccessible@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_accParent(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accRole@CAccessible@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accRole(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accSelection@CAccessible@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accSelection(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accState@CAccessible@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accState(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accValue@CAccessible@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accValue(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_accName@CAccessible@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accName(tagVARIANT, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_accValue@CAccessible@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accValue(tagVARIANT, unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAccessible@@UEAA@XZ
    virtual ~CAccessible();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAccName@CAccessible@@AEAAJPEAPEAG@Z
    long _GetAccName(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAccessibleItem@CAccessible@@AEAAJHPEAPEAUIDispatch@@@Z
    long _GetAccessibleItem(int, IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildFromVariant@CAccessible@@AEAAJPEBUtagVARIANT@@PEAPEAVCMenuToolbarBase@@PEAH@Z
    long _GetChildFromVariant(tagVARIANT const *, CMenuToolbarBase * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVariantFromChildIndex@CAccessible@@AEAAJPEAUHWND__@@HPEAUtagVARIANT@@@Z
    long _GetVariantFromChildIndex(HWND__*, int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadTypeLib@CAccessible@@AEAAHXZ
    int _LoadTypeLib();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Navigate@CAccessible@@AEAAJJUtagVARIANT@@PEAU2@@Z
    long _Navigate(long, tagVARIANT, tagVARIANT *);
};
