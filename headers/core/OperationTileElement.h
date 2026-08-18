#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class OperationTileElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTileVisible@OperationTileElement@@QEAA_NXZ
    bool EnsureTileVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisible@OperationTileElement@@UEAA_NHHHH@Z
    virtual bool EnsureVisible(int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@OperationTileElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@OperationTileElement@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@OperationTileElement@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OperationTileElement@@QEAA@XZ
    OperationTileElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ProgressPositionProp@OperationTileElement@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ProgressPositionProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@OperationTileElement@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMarqueeMode@OperationTileElement@@QEAAX_N@Z
    void SetMarqueeMode(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSummary@OperationTileElement@@QEAAJPEBG@Z
    long SetSummary(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SummaryProp@OperationTileElement@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * SummaryProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeader@OperationTileElement@@QEAAJW4OPERATION_TYPE@@W4OPERATION_MODE@@_KPEAUIShellItem@@3W4OperationTileUpdateHeaderFlags@@@Z
    long UpdateHeader(int, int, uint64_t, IShellItem *, IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProgressBarTheme@OperationTileElement@@QEAAX_N@Z
    void UpdateProgressBarTheme(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@OperationTileElement@@SAJAEBVCDUIResourceManager@@PEAVElement@DirectUI@@PEAKPEAPEAV34@@Z
    static long s_CreateInstance(CDUIResourceManager const &, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OperationTileElement@@UEAA@XZ
    virtual ~OperationTileElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProgressHWND@OperationTileElement@@AEAAPEAUHWND__@@XZ
    HWND__* _GetProgressHWND();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@OperationTileElement@@AEAAJAEBVCDUIResourceManager@@@Z
    long _Initialize(CDUIResourceManager const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTileAccName@OperationTileElement@@AEAAJPEBG0@Z
    long _SetTileAccName(unsigned short const *, unsigned short const *);
};
