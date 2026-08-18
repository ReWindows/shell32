#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 60 member(s).
class CNewMenu {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNewMenu@@QEAA@XZ
    CNewMenu();
    // Category: Method | Source: PE Export
    // Symbol: ?FinishOperations@CNewMenu@@UEAAJJ@Z
    virtual long FinishOperations(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CNewMenu@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@CNewMenu@@UEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@CNewMenu@@UEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CNewMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CNewMenu@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PE Export
    // Symbol: ?PauseTimer@CNewMenu@@UEAAJXZ
    virtual long PauseTimer();
    // Category: Method | Source: PE Export
    // Symbol: ?PostCopyItem@CNewMenu@@UEAAJKPEAUIShellItem@@0PEBGJ0@Z
    virtual long PostCopyItem(unsigned long, IShellItem *, IShellItem *, unsigned short const *, long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PostDeleteItem@CNewMenu@@UEAAJKPEAUIShellItem@@J0@Z
    virtual long PostDeleteItem(unsigned long, IShellItem *, long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PostMoveItem@CNewMenu@@UEAAJKPEAUIShellItem@@0PEBGJ0@Z
    virtual long PostMoveItem(unsigned long, IShellItem *, IShellItem *, unsigned short const *, long, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostNewItem@CNewMenu@@UEAAJKPEAUIShellItem@@PEBG1KJ0@Z
    virtual long PostNewItem(unsigned long, IShellItem *, unsigned short const *, unsigned short const *, unsigned long, long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PostRenameItem@CNewMenu@@UEAAJKPEAUIShellItem@@PEBGJ0@Z
    virtual long PostRenameItem(unsigned long, IShellItem *, unsigned short const *, long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreCopyItem@CNewMenu@@UEAAJKPEAUIShellItem@@0PEBG@Z
    virtual long PreCopyItem(unsigned long, IShellItem *, IShellItem *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreDeleteItem@CNewMenu@@UEAAJKPEAUIShellItem@@@Z
    virtual long PreDeleteItem(unsigned long, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreMoveItem@CNewMenu@@UEAAJKPEAUIShellItem@@0PEBG@Z
    virtual long PreMoveItem(unsigned long, IShellItem *, IShellItem *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreNewItem@CNewMenu@@UEAAJKPEAUIShellItem@@PEBG@Z
    virtual long PreNewItem(unsigned long, IShellItem *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PreRenameItem@CNewMenu@@UEAAJKPEAUIShellItem@@PEBG@Z
    virtual long PreRenameItem(unsigned long, IShellItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CNewMenu@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?ResetTimer@CNewMenu@@UEAAJXZ
    virtual long ResetTimer();
    // Category: Method | Source: PE Export
    // Symbol: ?ResumeTimer@CNewMenu@@UEAAJXZ
    virtual long ResumeTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CNewMenu@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PE Export
    // Symbol: ?StartOperations@CNewMenu@@UEAAJXZ
    virtual long StartOperations();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateProgress@CNewMenu@@UEAAJII@Z
    virtual long UpdateProgress(unsigned int, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildNewObjectInfoCache@CNewMenu@@AEAAXAEAV?$CCoSimpleArray@PEAUNewMenuEntry@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUNewMenuEntry@@@@@@PEAG@Z
    void BuildNewObjectInfoCache(WindissectOpaque &, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConsolidateMenuItems@CNewMenu@@AEAA_NXZ
    bool ConsolidateMenuItems();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCacheVersionOutdated@CNewMenu@@AEAA_NXZ
    bool IsCacheVersionOutdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPropertyToArray@CNewMenu@@AEAAXPEAUIPropertyChangeArray@@AEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    void _AddPropertyToArray(IPropertyChangeArray *, _tagpropertykey const &, tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyTemplate@CNewMenu@@AEAAJPEAUIStream@@PEBUNEWFILEINFO@@@Z
    long _CopyTemplate(IStream *, NEWFILEINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFileOrFolder@CNewMenu@@AEAAJPEAUHWND__@@PEBGPEAUNEWFILEINFO@@PEAUNEWOBJECTINFO@@@Z
    long _CreateFileOrFolder(HWND__*, unsigned short const *, NEWFILEINFO *, NEWOBJECTINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFromStorage@CNewMenu@@AEAAJPEAUHWND__@@PEBGPEAUNEWFILEINFO@@PEAUNEWOBJECTINFO@@@Z
    long _CreateFromStorage(HWND__*, unsigned short const *, NEWFILEINFO *, NEWOBJECTINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateItem@CNewMenu@@AEAAJPEAUHWND__@@PEBGPEAUNEWFILEINFO@@PEAUNEWOBJECTINFO@@@Z
    long _CreateItem(HWND__*, unsigned short const *, NEWFILEINFO *, NEWOBJECTINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesUserHaveAccessToFolder@CNewMenu@@AEAAJK@Z
    long _DoesUserHaveAccessToFolder(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesUserHaveAccessToFolderForExtension@CNewMenu@@AEAAHPEBG@Z
    int _DoesUserHaveAccessToFolderForExtension(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FullIDListFromRelName@CNewMenu@@AEAAJPEBGPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _FullIDListFromRelName(unsigned short const *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAdvisor@CNewMenu@@AEAAPEAUINewItemAdvisor@@XZ
    INewItemAdvisor * _GetAdvisor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetClientFlags@CNewMenu@@AEAAHXZ
    int _GetClientFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCmdID@CNewMenu@@AEAAIHPEBUNEWOBJECTINFO@@@Z
    unsigned int _GetCmdID(int, NEWOBJECTINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImage@CNewMenu@@AEAAPEAUHBITMAP__@@PEAUHKEY__@@PEBUNEWOBJECTINFO@@@Z
    HBITMAP__* _GetImage(HKEY__*, NEWOBJECTINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIsLFNDrive@CNewMenu@@AEAAXXZ
    void _GetIsLFNDrive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemData@CNewMenu@@AEAAPEAUNEWOBJECTINFO@@PEAUHMENU__@@HI@Z
    NEWOBJECTINFO * _GetItemData(HMENU__*, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNewFileSpec@CNewMenu@@AEAAXPEBUNEWOBJECTINFO@@PEBUNEWFILEINFO@@PEAGI@Z
    void _GetNewFileSpec(NEWOBJECTINFO const *, NEWFILEINFO const *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNewInfoOnInvoke@CNewMenu@@AEAAPEAUNEWOBJECTINFO@@PEAU_CMINVOKECOMMANDINFO@@PEAU2@PEAUNEWFILEINFO@@@Z
    NEWOBJECTINFO * _GetNewInfoOnInvoke(_CMINVOKECOMMANDINFO *, NEWOBJECTINFO *, NEWFILEINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertiesFromClient@CNewMenu@@AEAAJPEAUIPropertyChangeArray@@@Z
    long _GetPropertiesFromClient(IPropertyChangeArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertiesToApply@CNewMenu@@AEAAPEAUIPropertyChangeArray@@PEBU_ITEMIDLIST_ABSOLUTE@@PEBU_FILETIME@@@Z
    IPropertyChangeArray * _GetPropertiesToApply(_ITEMIDLIST_ABSOLUTE const *, _FILETIME const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTypeInfoFromAssoc@CNewMenu@@AEAAPEAGXZ
    unsigned short * _GetTypeInfoFromAssoc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitMenuPopup@CNewMenu@@AEAAHPEAUHMENU__@@@Z
    int _InitMenuPopup(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertNewMenuItem@CNewMenu@@AEAAHPEAUHKEY__@@PEAUHMENU__@@IPEBUNEWOBJECTINFO@@@Z
    int _InsertNewMenuItem(HKEY__*, HMENU__*, unsigned int, NEWOBJECTINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsExtensionAllowedForNoAccess@CNewMenu@@AEAAHPEBG@Z
    int _IsExtensionAllowedForNoAccess(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsLFNDrive@CNewMenu@@AEAAHXZ
    int _IsLFNDrive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSupported@CNewMenu@@AEAAHPEBUNEWOBJECTINFO@@PEBGHPEAUINewItemAdvisor@@@Z
    int _IsSupported(NEWOBJECTINFO const *, unsigned short const *, int, INewItemAdvisor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessArgs@CNewMenu@@AEAAPEAGPEBGZZ
    unsigned short * _ProcessArgs(unsigned short const *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RunCommand@CNewMenu@@AEAAJPEAUHWND__@@PEBG1@Z
    long _RunCommand(HWND__*, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectAndPostProcess@CNewMenu@@AEAAJPEAUHWND__@@PEBU_ITEMIDLIST_ABSOLUTE@@KPEAUINewObjectHandler@@@Z
    long _SelectAndPostProcess(HWND__*, _ITEMIDLIST_ABSOLUTE const *, unsigned long, INewObjectHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowError@CNewMenu@@AEAAXPEAUHWND__@@PEBGJW4NEWTYPE@@@Z
    void _ShowError(HWND__*, unsigned short const *, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TransferContents@CNewMenu@@AEAAJPEAUHWND__@@PEBUNEWFILEINFO@@PEAUIStream@@PEAUIStorage@@PEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _TransferContents(HWND__*, NEWFILEINFO const *, IStream *, IStorage *, _ITEMIDLIST_ABSOLUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FreeNewMenuItem@CNewMenu@@CAHPEAUNEWOBJECTINFO@@PEAX@Z
    static int s_FreeNewMenuItem(NEWOBJECTINFO *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNewMenu@@EEAA@XZ
    virtual ~CNewMenu();
};
