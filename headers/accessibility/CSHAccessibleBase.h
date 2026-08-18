#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 47 member(s).
class CSHAccessibleBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSHAccessibleBase@@QEAA@XZ
    CSHAccessibleBase();
    // Category: Method | Source: PE Export
    // Symbol: ?Clone@CSHAccessibleBase@@UEAAJPEAPEAUIEnumVARIANT@@@Z
    virtual long Clone(IEnumVARIANT * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CSHAccessibleBase@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CSHAccessibleBase@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CSHAccessibleBase@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CSHAccessibleBase@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CSHAccessibleBase@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSHAccessibleBase@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CSHAccessibleBase@@UEAAJKPEAUtagVARIANT@@PEAK@Z
    virtual long Next(unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSHAccessibleBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CSHAccessibleBase@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CSHAccessibleBase@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accDoDefaultAction@CSHAccessibleBase@@UEAAJUtagVARIANT@@@Z
    virtual long accDoDefaultAction(tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accHitTest@CSHAccessibleBase@@UEAAJJJPEAUtagVARIANT@@@Z
    virtual long accHitTest(long, long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accLocation@CSHAccessibleBase@@UEAAJPEAJ000UtagVARIANT@@@Z
    virtual long accLocation(long *, long *, long *, long *, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accNavigate@CSHAccessibleBase@@UEAAJJUtagVARIANT@@PEAU2@@Z
    virtual long accNavigate(long, tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accSelect@CSHAccessibleBase@@UEAAJJUtagVARIANT@@@Z
    virtual long accSelect(long, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accChild@CSHAccessibleBase@@UEAAJUtagVARIANT@@PEAPEAUIDispatch@@@Z
    virtual long get_accChild(tagVARIANT, IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accChildCount@CSHAccessibleBase@@UEAAJPEAJ@Z
    virtual long get_accChildCount(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accDefaultAction@CSHAccessibleBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accDefaultAction(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accDescription@CSHAccessibleBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accDescription(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accFocus@CSHAccessibleBase@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accFocus(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accHelp@CSHAccessibleBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accHelp(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accHelpTopic@CSHAccessibleBase@@UEAAJPEAPEAGUtagVARIANT@@PEAJ@Z
    virtual long get_accHelpTopic(unsigned short * *, tagVARIANT, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accKeyboardShortcut@CSHAccessibleBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accKeyboardShortcut(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accName@CSHAccessibleBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accName(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accParent@CSHAccessibleBase@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_accParent(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accRole@CSHAccessibleBase@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accRole(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accSelection@CSHAccessibleBase@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accSelection(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accState@CSHAccessibleBase@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accState(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accValue@CSHAccessibleBase@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accValue(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_accName@CSHAccessibleBase@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accName(tagVARIANT, unsigned short *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_accValue@CSHAccessibleBase@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accValue(tagVARIANT, unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSHAccessibleBase@@UEAA@XZ
    virtual ~CSHAccessibleBase();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?_GetChildCount@CSHAccessibleBase@@MEAAJXZ
    virtual long _GetChildCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateAccChild@CSHAccessibleBase@@IEAAJPEAUtagVARIANT@@@Z
    long _ValidateAccChild(tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnGetDescription@CSHAccessibleBase@@MEAAJPEAPEAG@Z
    virtual long v_OnGetDescription(unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnGetHelp@CSHAccessibleBase@@MEAAJPEAPEAG@Z
    virtual long v_OnGetHelp(unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnGetName@CSHAccessibleBase@@MEAAJPEAPEAG@Z
    virtual long v_OnGetName(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnGetRole@CSHAccessibleBase@@MEAAJXZ
    virtual long v_OnGetRole();
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnGetValue@CSHAccessibleBase@@MEAAJPEAPEAG@Z
    virtual long v_OnGetValue(unsigned short * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTypeInfo@CSHAccessibleBase@@AEAAJXZ
    long _EnsureTypeInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_accLoadTypeInfo@CSHAccessibleBase@@CAJPEAPEAUITypeInfo@@@Z
    static long s_accLoadTypeInfo(ITypeInfo * *);
};
