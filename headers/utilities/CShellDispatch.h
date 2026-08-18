#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 62 member(s).
class CShellDispatch {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellDispatch@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToRecent@CShellDispatch@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long AddToRecent(tagVARIANT, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowseForFolder@CShellDispatch@@UEAAJJPEAGJUtagVARIANT@@PEAPEAUFolder@@@Z
    virtual long BrowseForFolder(long, unsigned short *, long, tagVARIANT, Folder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanStartStopService@CShellDispatch@@UEAAJPEAGPEAUtagVARIANT@@@Z
    virtual long CanStartStopService(unsigned short *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CascadeWindows@CShellDispatch@@UEAAJXZ
    virtual long CascadeWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControlPanelItem@CShellDispatch@@UEAAJPEAG@Z
    virtual long ControlPanelItem(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EjectPC@CShellDispatch@@UEAAJXZ
    virtual long EjectPC();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Explore@CShellDispatch@@UEAAJUtagVARIANT@@@Z
    virtual long Explore(tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExplorerPolicy@CShellDispatch@@UEAAJPEAGPEAUtagVARIANT@@@Z
    virtual long ExplorerPolicy(unsigned short *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileRun@CShellDispatch@@UEAAJXZ
    virtual long FileRun();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindComputer@CShellDispatch@@UEAAJXZ
    virtual long FindComputer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFiles@CShellDispatch@@UEAAJXZ
    virtual long FindFiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPrinter@CShellDispatch@@UEAAJPEAG00@Z
    virtual long FindPrinter(unsigned short *, unsigned short *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDsOfNames@CShellDispatch@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetting@CShellDispatch@@UEAAJJPEAF@Z
    virtual long GetSetting(long, short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemInformation@CShellDispatch@@UEAAJPEAGPEAUtagVARIANT@@@Z
    virtual long GetSystemInformation(unsigned short *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfo@CShellDispatch@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeInfoCount@CShellDispatch@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Help@CShellDispatch@@UEAAJXZ
    virtual long Help();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CShellDispatch@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRestricted@CShellDispatch@@UEAAJPEAG0PEAJ@Z
    virtual long IsRestricted(unsigned short *, unsigned short *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsServiceRunning@CShellDispatch@@UEAAJPEAGPEAUtagVARIANT@@@Z
    virtual long IsServiceRunning(unsigned short *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinimizeAll@CShellDispatch@@UEAAJXZ
    virtual long MinimizeAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NameSpace@CShellDispatch@@UEAAJUtagVARIANT@@PEAPEAUFolder@@@Z
    virtual long NameSpace(tagVARIANT, Folder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CShellDispatch@@UEAAJUtagVARIANT@@@Z
    virtual long Open(tagVARIANT);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellDispatch@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshMenu@CShellDispatch@@UEAAJXZ
    virtual long RefreshMenu();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellDispatch@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchCommand@CShellDispatch@@UEAAJXZ
    virtual long SearchCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ServiceStart@CShellDispatch@@UEAAJPEAGUtagVARIANT@@PEAU2@@Z
    virtual long ServiceStart(unsigned short *, tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ServiceStop@CShellDispatch@@UEAAJPEAGUtagVARIANT@@PEAU2@@Z
    virtual long ServiceStop(unsigned short *, tagVARIANT, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTime@CShellDispatch@@UEAAJXZ
    virtual long SetTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellExecuteW@CShellDispatch@@UEAAJPEAGUtagVARIANT@@111@Z
    virtual long ShellExecuteW(unsigned short *, tagVARIANT, tagVARIANT, tagVARIANT, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowBrowserBar@CShellDispatch@@UEAAJPEAGUtagVARIANT@@PEAU2@@Z
    virtual long ShowBrowserBar(unsigned short *, tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownWindows@CShellDispatch@@UEAAJXZ
    virtual long ShutdownWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Suspend@CShellDispatch@@UEAAJXZ
    virtual long Suspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileHorizontally@CShellDispatch@@UEAAJXZ
    virtual long TileHorizontally();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileVertically@CShellDispatch@@UEAAJXZ
    virtual long TileVertically();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleDesktop@CShellDispatch@@UEAAJXZ
    virtual long ToggleDesktop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrayProperties@CShellDispatch@@UEAAJXZ
    virtual long TrayProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UndoMinimizeALL@CShellDispatch@@UEAAJXZ
    virtual long UndoMinimizeALL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowSwitcher@CShellDispatch@@UEAAJXZ
    virtual long WindowSwitcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Windows@CShellDispatch@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long Windows(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowsSecurity@CShellDispatch@@UEAAJXZ
    virtual long WindowsSecurity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@CShellDispatch@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Application(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@CShellDispatch@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_Parent(IDispatch * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteFolder@CShellDispatch@@IEAAJUtagVARIANT@@PEBG@Z
    long ExecuteFolder(tagVARIANT, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindow@CShellDispatch@@IEAAPEAUHWND__@@XZ
    HWND__* _GetWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ServiceStartStop@CShellDispatch@@IEAAFPEAGHH@Z
    short _ServiceStartStop(unsigned short *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TrayCommand@CShellDispatch@@IEAAJI@Z
    long _TrayCommand(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellDispatch@@MEAA@XZ
    virtual ~CShellDispatch();
};
