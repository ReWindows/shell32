#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 41 member(s).
class CFSDropTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFSDropTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFSDropTarget@@QEAA@PEAUIShellFolder2@@PEAUHWND__@@@Z
    CFSDropTarget(IShellFolder2*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CFSDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CFSDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CFSDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CFSDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEvaluatingEdpPolicy@CFSDropTarget@@UEAAJPEAH@Z
    virtual long IsEvaluatingEdpPolicy(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFSDropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFSDropTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropSourceEnterpriseId@CFSDropTarget@@UEAAJPEBG@Z
    virtual long SetDropSourceEnterpriseId(unsigned short const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultAffectForSyncRoot@CFSDropTarget@@AEAAKKPEBG0@Z
    unsigned long GetDefaultAffectForSyncRoot(unsigned long, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddDescriptionToDataObject@CFSDropTarget@@AEAAXK@Z
    void _AddDescriptionToDataObject(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddVerbs@CFSDropTarget@@CAXPEAKKKIIIKPEAUFSMENUINFO@@@Z
    static void _AddVerbs(unsigned long *, unsigned long, unsigned long, unsigned int, unsigned int, unsigned int, unsigned long, FSMENUINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanDestTransferHIDA@CFSDropTarget@@AEAAHPEAUIShellFolder@@@Z
    int _CanDestTransferHIDA(IShellFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanMoveCopyHIDA@CFSDropTarget@@AEAAHPEAUIDataObject@@PEAUIShellFolder@@@Z
    int _CanMoveCopyHIDA(IDataObject *, IShellFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanSourceTransferHIDA@CFSDropTarget@@AEAAHPEAUIDataObject@@@Z
    int _CanSourceTransferHIDA(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePackage@CFSDropTarget@@AEAAJPEAUIDataObject@@@Z
    long _CreatePackage(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DetermineEffects@CFSDropTarget@@AEAAKKPEAKPEAUHMENU__@@@Z
    unsigned long _DetermineEffects(unsigned long, unsigned long *, HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DragDropMenu@CFSDropTarget@@AEAAJKU_POINTL@@PEAKPEAUHMENU__@@KPEAI@Z
    long _DragDropMenu(unsigned long, _POINTL, unsigned long *, HMENU__*, unsigned long, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EffectFromFolder@CFSDropTarget@@AEAAKXZ
    unsigned long _EffectFromFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FilesystemAdjustedDefaultEffect@CFSDropTarget@@AEAAKK@Z
    unsigned long _FilesystemAdjustedDefaultEffect(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FilterFileContents@CFSDropTarget@@CAJPEAV1@PEAUtagFORMATETC@@KKPEAK2PEAUFSMENUINFO@@@Z
    static long _FilterFileContents(CFSDropTarget *, tagFORMATETC *, unsigned long, unsigned long, unsigned long *, unsigned long *, FSMENUINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FilterHDROP@CFSDropTarget@@CAJPEAV1@PEAUtagFORMATETC@@KKPEAK2PEAUFSMENUINFO@@@Z
    static long _FilterHDROP(CFSDropTarget *, tagFORMATETC *, unsigned long, unsigned long, unsigned long *, unsigned long *, FSMENUINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FilterHIDA@CFSDropTarget@@CAJPEAV1@PEAUtagFORMATETC@@KKPEAK2PEAUFSMENUINFO@@@Z
    static long _FilterHIDA(CFSDropTarget *, tagFORMATETC *, unsigned long, unsigned long, unsigned long *, unsigned long *, FSMENUINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FilterOlePackage@CFSDropTarget@@CAJPEAV1@PEAUtagFORMATETC@@KKPEAK2PEAUFSMENUINFO@@@Z
    static long _FilterOlePackage(CFSDropTarget *, tagFORMATETC *, unsigned long, unsigned long, unsigned long *, unsigned long *, FSMENUINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixUpDefaultItem@CFSDropTarget@@AEAAXPEAUHMENU__@@K@Z
    void _FixUpDefaultItem(HMENU__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAllowedHIDAEffects@CFSDropTarget@@AEAAKPEAUIDataObject@@@Z
    unsigned long _GetAllowedHIDAEffects(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultEffect@CFSDropTarget@@AEAAKKKKK@Z
    unsigned long _GetDefaultEffect(unsigned long, unsigned long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStateFromSite@CFSDropTarget@@AEAAXXZ
    void _GetStateFromSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSlowTarget@CFSDropTarget@@AEAAHXZ
    int _IsSlowTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateDragDropMenu@CFSDropTarget@@AEAAJPEAUHMENU__@@PEAU_DSA@@H@Z
    long _PopulateDragDropMenu(HMENU__*, _DSA *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepLogicalEffect@CFSDropTarget@@AEAAXPEAUIDataObject@@PEAK@Z
    void _PrepLogicalEffect(IDataObject *, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFSDropTarget@@EEAA@XZ
    virtual ~CFSDropTarget();
};
