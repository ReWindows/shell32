#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
class CFSFolderViewCB {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFSFolderViewCB@@QEAA@PEAUIFSFolderPriv@@@Z
    CFSFolderViewCB(IFSFolderPriv *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFlags@CFSFolderViewCB@@UEAAJPEAW4FOLDERFLAGS@@0@Z
    virtual long GetFolderFlags(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewMode@CFSFolderViewCB@@UEAAJPEAW4FOLDERLOGICALVIEWMODE@@@Z
    virtual long GetViewMode(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryObject@CFSFolderViewCB@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CFSFolderViewCB@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitFolderType@CFSFolderViewCB@@AEAAXU_GUID@@@Z
    void CommitFolderType(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPathDriveType@CFSFolderViewCB@@AEAAIXZ
    unsigned int GetPathDriveType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFSNotify@CFSFolderViewCB@@AEAAJKPEAPEBU_ITEMIDLIST_ABSOLUTE@@J@Z
    long OnFSNotify(unsigned long, _ITEMIDLIST_ABSOLUTE const * *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetEmptyText@CFSFolderViewCB@@AEAAJKHPEAG@Z
    long OnGetEmptyText(unsigned long, int, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetFolderType@CFSFolderViewCB@@AEAAJKPEAU_GUID@@@Z
    long OnGetFolderType(unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetWebViewTasks@CFSFolderViewCB@@AEAAJKPEAUSFVM_WEBVIEW_TASKSECTION_DATA@@@Z
    long OnGetWebViewTasks(unsigned long, SFVM_WEBVIEW_TASKSECTION_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetWorkingDir@CFSFolderViewCB@@AEAAJKIPEAG@Z
    long OnGetWorkingDir(unsigned long, unsigned int, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetWorkingDirAlloc@CFSFolderViewCB@@AEAAJKIPEAPEAG@Z
    long OnGetWorkingDirAlloc(unsigned long, unsigned int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetZone@CFSFolderViewCB@@AEAAJKPEAK@Z
    long OnGetZone(unsigned long, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFSFolderViewCB@@EEAA@XZ
    virtual ~CFSFolderViewCB();
};
