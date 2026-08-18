#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 30 member(s).
// Base evidence: HWNDFloat (likely; classinfo-template-instantiation).
class CEditElement {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEditElement@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustWindowRectHF@CEditElement@@UEAAXPEAUtagRECT@@@Z
    virtual void AdjustWindowRectHF(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CEditElement@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CEditElement@@UEAAJH@Z
    virtual long Commit(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CEditElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEditInfo@CEditElement@@QEAAJPEAUIPropertyDescription@@PEAUIPropertyDescriptionPriv@@W4tagPROPDESC_CONTROL_TYPE@@U_GUID@@HPEAUHWND__@@@Z
    long InitializeEditInfo(IPropertyDescription *, IPropertyDescriptionPriv *, int, _GUID, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextControl@CEditElement@@UEAAJH@Z
    virtual long NextControl(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnChanging@CEditElement@@UEAAJH@Z
    virtual long OnChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CEditElement@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CEditElement@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChangeIS@CEditElement@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeVerb@CEditElement@@UEAAJPEBG@Z
    virtual long OnInvokeVerb(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CEditElement@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateChange@CEditElement@@UEAAJHPEAH@Z
    virtual long OnStateChange(int, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEditElement@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CEditElement@@SAJXZ
    static long Register();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEditElement@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestResize@CEditElement@@UEAAJXZ
    virtual long RequestResize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentValue@CEditElement@@QEAAJPEAUIUnknown@@@Z
    long SetCurrentValue(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CEditElement@@UEAAJPEAPEAG@Z
    virtual long Validate(unsigned short * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHWND@CEditElement@@MEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEditElement@@MEAA@XZ
    virtual ~CEditElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostTriggerEditEvent@CEditElement@@AEAAXW4STATEEVENT_REASON@EditStateEvent@@PEBG@Z
    void _PostTriggerEditEvent(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetThemeOnControl@CEditElement@@AEAAXPEAVValue@DirectUI@@@Z
    void _SetThemeOnControl(::DirectUI::Value *);
};
