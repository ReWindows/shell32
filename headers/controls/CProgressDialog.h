#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 76 member(s).
class CProgressDialog {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProgressDialog@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@CProgressDialog@@UEAAJW4_SPACTION@@K@Z
    virtual long Begin(int, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProgressDialog@@QEAA@XZ
    CProgressDialog();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CProgressDialog@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CProgressDialog@@UEAAJXZ
    virtual long End();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCancelInformation@CProgressDialog@@UEAAJPEAKPEAI@Z
    virtual long GetCancelInformation(unsigned long *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDialogDisplayDelayTime@CProgressDialog@@UEAAJPEAK@Z
    virtual long GetDialogDisplayDelayTime(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMilliseconds@CProgressDialog@@UEAAJPEA_K0@Z
    virtual long GetMilliseconds(uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperationStatus@CProgressDialog@@UEAAJPEAW4PDOPSTATUS@@@Z
    virtual long GetOperationStatus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginalEstimate@CProgressDialog@@UEAAJPEA_K@Z
    virtual long GetOriginalEstimate(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CProgressDialog@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasUserCancelled@CProgressDialog@@UEAAHXZ
    virtual int HasUserCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideEstimates@CProgressDialog@@UEAAJXZ
    virtual long HideEstimates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CProgressDialog@@UEAAJKPEBG0@Z
    virtual long Initialize(unsigned long, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseTimer@CProgressDialog@@UEAAJXZ
    virtual long PauseTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryCancel@CProgressDialog@@UEAAJPEAH@Z
    virtual long QueryCancel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProgressDialog@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProgressDialog@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCancel@CProgressDialog@@UEAAJXZ
    virtual long ResetCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetTimer@CProgressDialog@@UEAAJXZ
    virtual long ResetTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeTimer@CProgressDialog@@UEAAJXZ
    virtual long ResumeTimer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAnimation@CProgressDialog@@UEAAJPEAUHINSTANCE__@@I@Z
    virtual long SetAnimation(HINSTANCE__*, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCancelInformation@CProgressDialog@@UEAAJKI@Z
    virtual long SetCancelInformation(unsigned long, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCancelMsg@CProgressDialog@@UEAAJPEBGPEBX@Z
    virtual long SetCancelMsg(unsigned short const *, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLine@CProgressDialog@@UEAAJKPEBGHPEBX@Z
    virtual long SetLine(unsigned long, unsigned short const *, int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMode@CProgressDialog@@UEAAJK@Z
    virtual long SetMode(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOperation@CProgressDialog@@UEAAJW4_SPACTION@@@Z
    virtual long SetOperation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@CProgressDialog@@UEAAJKK@Z
    virtual long SetProgress(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress64@CProgressDialog@@UEAAJ_K0@Z
    virtual long SetProgress64(uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgressDataInvalid@CProgressDialog@@UEAAJXZ
    virtual long SetProgressDataInvalid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitle@CProgressDialog@@UEAAJPEBG@Z
    virtual long SetTitle(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProgressDialog@CProgressDialog@@UEAAJPEAUHWND__@@K@Z
    virtual long StartProgressDialog(HWND__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProgressDialog@CProgressDialog@@UEAAJPEAUHWND__@@PEAUIUnknown@@KPEBX@Z
    virtual long StartProgressDialog(HWND__*, IUnknown *, unsigned long, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CProgressDialog@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopProgressDialog@CProgressDialog@@UEAAJXZ
    virtual long StopProgressDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Timer@CProgressDialog@@UEAAJKPEBX@Z
    virtual long Timer(unsigned long, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLocations@CProgressDialog@@UEAAJPEAUIShellItem@@00@Z
    virtual long UpdateLocations(IShellItem *, IShellItem *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProgress@CProgressDialog@@UEAAJ_K00000@Z
    virtual long UpdateProgress(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProgress@CProgressDialog@@UEAAJ_K0@Z
    virtual long UpdateProgress(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateText@CProgressDialog@@UEAAJW4_SPTEXT@@PEBGH@Z
    virtual long UpdateText(int, unsigned short const *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginAction@CProgressDialog@@AEAAJK@Z
    long _BeginAction(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeDlg@CProgressDialog@@AEAAJKPEBGH@Z
    long _ChangeDlg(unsigned long, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLocationDisplayInfo@CProgressDialog@@AEAAJPEAUIShellItem@@W4LOCATIONTYPE@@PEAPEAULOCATIONDISPLAYINFO@@@Z
    long _GetLocationDisplayInfo(IShellItem *, int, LOCATIONDISPLAYINFO * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Stop@CProgressDialog@@AEAAJXZ
    long _Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncThreadProc@CProgressDialog@@AEAAKXZ
    unsigned long _SyncThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ThreadProc@CProgressDialog@@AEAAKXZ
    unsigned long _ThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDisplayPathFlag@CProgressDialog@@AEAAJPEAUIShellItem@@W4LOCATIONTYPE@@@Z
    long _UpdateDisplayPathFlag(IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateItemName@CProgressDialog@@AEAAJXZ
    long _UpdateItemName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SyncThreadProc@CProgressDialog@@CAKPEAX@Z
    static unsigned long s_SyncThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ThreadProc@CProgressDialog@@CAKPEAX@Z
    static unsigned long s_ThreadProc(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProgressDialog@@EEAA@XZ
    virtual ~CProgressDialog();
};
