#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 42 member(s).
class CBurnAudioCDExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPages@CBurnAudioCDExtension@@UEAAJPEAPEAU_PSP@@IPEAI@Z
    virtual long AddPages(_PSP * *, unsigned int, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBurnAudioCDExtension@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CBurnAudioCDExtension@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?DragLeave@CBurnAudioCDExtension@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PE Export
    // Symbol: ?DragOver@CBurnAudioCDExtension@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CBurnAudioCDExtension@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?EnterFolder@CBurnAudioCDExtension@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long EnterFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FoundItem@CBurnAudioCDExtension@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long FoundItem(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstPage@CBurnAudioCDExtension@@UEAAJPEAPEAU_PSP@@@Z
    virtual long GetFirstPage(_PSP * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastPage@CBurnAudioCDExtension@@UEAAJPEAPEAU_PSP@@@Z
    virtual long GetLastPage(_PSP * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedActionTypes@CBurnAudioCDExtension@@UEAAJPEAK@Z
    virtual long GetSupportedActionTypes(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProgressDialog@CBurnAudioCDExtension@@UEAAJPEAPEAG0@Z
    virtual long InitializeProgressDialog(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LeaveFolder@CBurnAudioCDExtension@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long LeaveFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBurnAudioCDExtension@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBurnAudioCDExtension@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAllExts@CBurnAudioCDExtension@@AEAAXXZ
    void _AddAllExts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddFileExtsForCLSID@CBurnAudioCDExtension@@AEAAXAEBU_GUID@@@Z
    void _AddFileExtsForCLSID(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddFileExtsForKey@CBurnAudioCDExtension@@AEAAXPEBG@Z
    void _AddFileExtsForKey(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CountOfAudioFilesForHandler@CBurnAudioCDExtension@@AEAAKPEAUIDataObject@@AEBU_GUID@@@Z
    unsigned long _CountOfAudioFilesForHandler(IDataObject *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DataObjectHasAllAudioFiles@CBurnAudioCDExtension@@AEAAHPEAUIDataObject@@@Z
    int _DataObjectHasAllAudioFiles(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DropOnHandler@CBurnAudioCDExtension@@AEAAJAEBU_GUID@@W4EXTCOCREATEFLAGS@@PEAUIDataObject@@@Z
    long _DropOnHandler(_GUID const &, int, IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultCLSID@CBurnAudioCDExtension@@AEAA?AU_GUID@@XZ
    _GUID _GetDefaultCLSID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVerbForCLSID@CBurnAudioCDExtension@@AEAAJAEBU_GUID@@PEAGI@Z
    long _GetVerbForCLSID(_GUID const &, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MusicDlgProc@CBurnAudioCDExtension@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _MusicDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PickHandler@CBurnAudioCDExtension@@AEAAJPEAUIDataObject@@PEAU_GUID@@@Z
    long _PickHandler(IDataObject *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCompletionState@CBurnAudioCDExtension@@AEAAXXZ
    void _SetCompletionState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MusicDlgProc@CBurnAudioCDExtension@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_MusicDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBurnAudioCDExtension@@EEAA@XZ
    virtual ~CBurnAudioCDExtension();
};
