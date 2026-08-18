#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
class CTextPropertyControl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTextPropertyControl@@QEAA@H@Z
    CTextPropertyControl(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsModified@CTextPropertyControl@@UEAAJPEAH@Z
    virtual long IsModified(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModified@CTextPropertyControl@@UEAAJH@Z
    virtual long SetModified(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CTextPropertyControl@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConvertToCRLF@CTextPropertyControl@@AEAAJPEBGPEAPEAG@Z
    long _ConvertToCRLF(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetEditText@CTextPropertyControl@@AEAAXPEAUHWND__@@@Z
    void _SetEditText(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_subclassProc@CTextPropertyControl@@AEAA_JPEAUHWND__@@I_K_J11@Z
    int64_t _subclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_subclassProc@CTextPropertyControl@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_subclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AdjustWindowRect@CTextPropertyControl@@EEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long v_AdjustWindowRect(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_BaseWindowProc@CTextPropertyControl@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_BaseWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CanExpand@CTextPropertyControl@@EEAAHXZ
    virtual int v_CanExpand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Cancel@CTextPropertyControl@@EEAAXXZ
    virtual void v_Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Commit@CTextPropertyControl@@EEAAXXZ
    virtual void v_Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CreateActiveWindow@CTextPropertyControl@@EEAAPEAUHWND__@@PEAU2@PEBUtagRECT@@@Z
    virtual HWND__* v_CreateActiveWindow(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DestroyActiveWindow@CTextPropertyControl@@EEAAXXZ
    virtual void v_DestroyActiveWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ExpandNow@CTextPropertyControl@@EEAAXPEAUHWND__@@H@Z
    virtual void v_ExpandNow(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValue@CTextPropertyControl@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetValue(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsExpanded@CTextPropertyControl@@EEAAHXZ
    virtual int v_IsExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetValue@CTextPropertyControl@@EEAAJPEAUIUnknown@@@Z
    virtual long v_SetValue(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextPropertyControl@@EEAA@XZ
    virtual ~CTextPropertyControl();
};
