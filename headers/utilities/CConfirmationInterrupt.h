#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 26 member(s).
class CConfirmationInterrupt {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CConfirmationInterrupt@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomCommands@CConfirmationInterrupt@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetCustomCommands(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultResponse@CConfirmationInterrupt@@UEAAJPEAW4OPERATION_INTERRUPT_FLAGS@@@Z
    virtual long GetDefaultResponse(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CConfirmationInterrupt@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CConfirmationInterrupt@@UEAAJPEAW4OPERATION_INTERRUPT_FLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CConfirmationInterrupt@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetItem(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastMessageResourceId@CConfirmationInterrupt@@UEBAJPEAI@Z
    virtual long GetLastMessageResourceId(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultipleDelete@CConfirmationInterrupt@@UEAAJPEAH@Z
    virtual long GetMultipleDelete(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CConfirmationInterrupt@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CConfirmationInterrupt@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CConfirmationInterrupt@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CConfirmationInterrupt@@SAJPEBUCONFIRMOP@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(CONFIRMOP const *, _GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FormatDescription@CConfirmationInterrupt@@AEAAJPEBGPEAPEAG@Z
    long _FormatDescription(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetElevatedDescriptionResource@CConfirmationInterrupt@@AEAAIPEBUCONFIRMOP@@@Z
    unsigned int _GetElevatedDescriptionResource(CONFIRMOP const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetErrorInformation@CConfirmationInterrupt@@AEAAJPEAPEAG@Z
    long _GetErrorInformation(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMergeFolderInfo@CConfirmationInterrupt@@AEAAJPEAPEAG@Z
    long _GetMergeFolderInfo(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOwnerInformation@CConfirmationInterrupt@@AEAAJPEAPEAG@Z
    long _GetOwnerInformation(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSourceCreationDate@CConfirmationInterrupt@@AEAAJPEAPEAG@Z
    long _GetSourceCreationDate(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CConfirmationInterrupt@@AEAAJPEBUCONFIRMOP@@@Z
    long _Initialize(CONFIRMOP const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeFromInterruptInfo@CConfirmationInterrupt@@AEAAJPEBUCONFIRMOP@@@Z
    long _InitializeFromInterruptInfo(CONFIRMOP const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeSpecialCases@CConfirmationInterrupt@@AEAAJPEBUCONFIRMOP@@@Z
    long _InitializeSpecialCases(CONFIRMOP const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAppUsageFromInfo@CConfirmationInterrupt@@AEAAJPEAPEAG_N@Z
    long _SetAppUsageFromInfo(unsigned short * *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConfirmationInterrupt@@AEAA@XZ
    ~CConfirmationInterrupt();
};
