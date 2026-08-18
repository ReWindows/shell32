#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 34 member(s).
class CPackageInstallStateStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@CPackageInstallStateStore@@UEAAJW4__MIDL_IWindowsStoreInstallProgress_0002@@PEBGPEAPEAUIPropertyStore@@I@Z
    virtual long Begin(int, unsigned short const *, IPropertyStore * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginInstall@CPackageInstallStateStore@@UEAAJPEBG0@Z
    virtual long BeginInstall(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginUninstall@CPackageInstallStateStore@@UEAAJPEBG@Z
    virtual long BeginUninstall(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPackageInstallStateStore@@QEAA@XZ
    CPackageInstallStateStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearInstallState@CPackageInstallStateStore@@UEAAJPEBG0@Z
    virtual long ClearInstallState(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePreviewTilesForPackage@CPackageInstallStateStore@@UEAAJPEBG0IPEAPEBG@Z
    virtual long CreatePreviewTilesForPackage(unsigned short const *, unsigned short const *, unsigned int, unsigned short const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CPackageInstallStateStore@@UEAAJW4__MIDL_IWindowsStoreInstallProgress_0002@@PEBG@Z
    virtual long End(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndInstall@CPackageInstallStateStore@@UEAAJPEBG0J@Z
    virtual long EndInstall(unsigned short const *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndUninstall@CPackageInstallStateStore@@UEAAJPEBGH@Z
    virtual long EndUninstall(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstallState@CPackageInstallStateStore@@UEAAKPEBG@Z
    virtual unsigned long GetInstallState(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@CPackageInstallStateStore@@UEAAJW4__MIDL_IWindowsStoreInstallProgress_0002@@PEBG@Z
    virtual long OnCancel(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnError@CPackageInstallStateStore@@UEAAJW4__MIDL_IWindowsStoreInstallProgress_0002@@PEBGW4__MIDL_IWindowsStoreInstallProgress_0001@@J@Z
    virtual long OnError(int, unsigned short const *, int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPause@CPackageInstallStateStore@@UEAAJW4__MIDL_IWindowsStoreInstallProgress_0002@@PEBGW4__MIDL_IWindowsStoreInstallProgress_0001@@@Z
    virtual long OnPause(int, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPendingQueuedInstall@CPackageInstallStateStore@@UEAAJPEBG@Z
    virtual long OnPendingQueuedInstall(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProgress@CPackageInstallStateStore@@UEAAJW4__MIDL_IWindowsStoreInstallProgress_0002@@PEBGW4__MIDL_IWindowsStoreInstallProgress_0001@@II@Z
    virtual long OnProgress(int, unsigned short const *, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResume@CPackageInstallStateStore@@UEAAJW4__MIDL_IWindowsStoreInstallProgress_0002@@PEBGW4__MIDL_IWindowsStoreInstallProgress_0001@@@Z
    virtual long OnResume(int, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PurgeTemporaryStates@CPackageInstallStateStore@@UEAAJXZ
    virtual long PurgeTemporaryStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetToPreviewTile@CPackageInstallStateStore@@UEAAJPEBG@Z
    virtual long ResetToPreviewTile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCategory@CPackageInstallStateStore@@UEAAJPEBGI@Z
    virtual long UpdateCategory(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTemporaryLogos@CPackageInstallStateStore@@UEAAJPEBGPEAPEAUIPropertyStore@@I@Z
    virtual long UpdateTemporaryLogos(unsigned short const *, IPropertyStore * *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTemporaryImages@CPackageInstallStateStore@@AEAAJPEAUIPropertyStore@@PEBGW4__MIDL_IWindowsStoreInstallProgress_0002@@@Z
    long _CreateTemporaryImages(IPropertyStore *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentInstallationState@CPackageInstallStateStore@@AEAAKPEBG0@Z
    unsigned long _GetCurrentInstallationState(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageExtension@CPackageInstallStateStore@@AEAAJPEAG0_K@Z
    long _GetImageExtension(unsigned short *, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInstallationError@CPackageInstallStateStore@@AEAAJJ@Z
    long _GetInstallationError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogUninstallStateChange@CPackageInstallStateStore@@AEAAXPEBGJ_N@Z
    void _LogUninstallStateChange(unsigned short const *, long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInstallationComplete@CPackageInstallStateStore@@AEAAJPEBG_N@Z
    long _OnInstallationComplete(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResourceIDForInstallState@CPackageInstallStateStore@@AEAAIW4PACKAGE_INSTALLATION_STATE@@W4STATE_CHANGE_REASON@1@@Z
    unsigned int _ResourceIDForInstallState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteInstallationState@CPackageInstallStateStore@@AEAAJPEBG0W4PACKAGE_INSTALLATION_STATE@@JI_NW4STATE_CHANGE_REASON@1@@Z
    long _WriteInstallationState(unsigned short const *, unsigned short const *, int, long, unsigned int, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteInstallationState@CPackageInstallStateStore@@AEAAJPEBGW4PACKAGE_INSTALLATION_STATE@@JI_NW4STATE_CHANGE_REASON@1@@Z
    long _WriteInstallationState(unsigned short const *, int, long, unsigned int, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteInstallationStateOnlyIfInstall@CPackageInstallStateStore@@AEAAJW4__MIDL_IWindowsStoreInstallProgress_0002@@PEBGW4PACKAGE_INSTALLATION_STATE@@I_NW4STATE_CHANGE_REASON@1@@Z
    long _WriteInstallationStateOnlyIfInstall(int, unsigned short const *, int, unsigned int, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteUninstallationState@CPackageInstallStateStore@@AEAAJPEBG_NPEA_N@Z
    long _WriteUninstallationState(unsigned short const *, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TilesAlreadyExistForPackage@CPackageInstallStateStore@@CA_NPEBG@Z
    static bool s_TilesAlreadyExistForPackage(unsigned short const *);
};
