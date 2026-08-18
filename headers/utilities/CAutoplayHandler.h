#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 50 member(s).
class CAutoplayHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateForDeviceAutoPlayThreadProc@CAutoplayHandler@@SAKPEAX@Z
    static unsigned long ActivateForDeviceAutoPlayThreadProc(void *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAutoplayHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoplayHandler@@QEAA@XZ
    CAutoplayHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareCommand@CAutoplayHandler@@UEAAJPEBGPEAH@Z
    virtual long CompareCommand(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareID@CAutoplayHandler@@UEAAJPEBGPEAH@Z
    virtual long CompareID(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAction@CAutoplayHandler@@UEAAJPEAPEAG@Z
    virtual long GetAction(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActionAndProvider@CAutoplayHandler@@UEAAJPEAPEAG@Z
    virtual long GetActionAndProvider(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUserModelId@CAutoplayHandler@@UEAAJPEAPEAG@Z
    virtual long GetAppUserModelId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCLSID@CAutoplayHandler@@UEAAJPEAU_GUID@@@Z
    virtual long GetCLSID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommand@CAutoplayHandler@@UEAAJPEAPEAG@Z
    virtual long GetCommand(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEventHandler@CAutoplayHandler@@UEAAJPEAPEAG@Z
    virtual long GetEventHandler(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandlerTypeInformation@CAutoplayHandler@@UEAAJPEAH00@Z
    virtual long GetHandlerTypeInformation(int *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID@CAutoplayHandler@@UEAAJPEAPEAG@Z
    virtual long GetID(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CAutoplayHandler@@UEAAJPEAPEAG@Z
    virtual long GetIconLocation(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitCmdLine@CAutoplayHandler@@UEAAJPEAPEAG@Z
    virtual long GetInitCmdLine(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastWriteTime@CAutoplayHandler@@UEAAJPEAU_FILETIME@@@Z
    virtual long GetLastWriteTime(_FILETIME *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageId@CAutoplayHandler@@UEAAJPEAPEAG@Z
    virtual long GetPackageId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProvider@CAutoplayHandler@@UEAAJPEAPEAG@Z
    virtual long GetProvider(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAutoplayHandler@@UEAAJPEBG@Z
    virtual long Initialize(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAutorun@CAutoplayHandler@@UEAAJPEBGK@Z
    virtual long InitializeAutorun(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDynamic@CAutoplayHandler@@UEAAJPEBG0K@Z
    virtual long InitializeDynamic(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeLegacy@CAutoplayHandler@@UEAAJK@Z
    virtual long InitializeLegacy(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeStatic@CAutoplayHandler@@UEAAJPEBG@Z
    virtual long InitializeStatic(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CAutoplayHandler@@UEAAJPEAUHWND__@@@Z
    virtual long Invoke(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeVerb@CAutoplayHandler@@UEAAJPEBGKH@Z
    virtual long InvokeVerb(unsigned short const *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeVerbThreadProc@CAutoplayHandler@@SAKPEAX@Z
    static unsigned long InvokeVerbThreadProc(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDuplicateImmersive@CAutoplayHandler@@UEAAJPEAUIAutoplayHandler@@PEAH@Z
    virtual long IsDuplicateImmersive(IAutoplayHandler *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDynamicInfo@CAutoplayHandler@@UEAAJPEBGKPEAPEAGPEAH@Z
    virtual long QueryDynamicInfo(unsigned short const *, unsigned long, unsigned short * *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAutoplayHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutoplayHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAction@CAutoplayHandler@@UEAAJPEBG@Z
    virtual long SetAction(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContainerGuid@CAutoplayHandler@@UEAAJAEBU_GUID@@@Z
    virtual long SetContainerGuid(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDevicePath@CAutoplayHandler@@UEAAJPEBG@Z
    virtual long SetDevicePath(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayObjectID@CAutoplayHandler@@UEAAJPEBG@Z
    virtual long SetDisplayObjectID(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventHandler@CAutoplayHandler@@QEAAJPEBG@Z
    long SetEventHandler(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconLocation@CAutoplayHandler@@UEAAJPEBG@Z
    virtual long SetIconLocation(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CAutoplayHandler@@AEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHandlerQuerySource@CAutoplayHandler@@AEAAJPEAPEAUIQuerySource@@PEAPEAUHKEY__@@@Z
    long _GetHandlerQuerySource(IQuerySource * *, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHandlerQuerySourceEx@CAutoplayHandler@@AEAAJPEAUHKEY__@@PEAPEAUIQuerySource@@@Z
    long _GetHandlerQuerySourceEx(HKEY__*, IQuerySource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellRegKey@CAutoplayHandler@@AEAAJPEBGKPEAPEAUHKEY__@@@Z
    long _GetShellRegKey(unsigned short const *, unsigned long, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitAction@CAutoplayHandler@@AEAAJPEAUIQuerySource@@@Z
    long _InitAction(IQuerySource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitAutorunAction@CAutoplayHandler@@AEAAJPEAVCMtPtLocal@@PEBG@Z
    long _InitAutorunAction(CMtPtLocal *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitAutorunProvider@CAutoplayHandler@@AEAAJPEBG@Z
    long _InitAutorunProvider(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitClsidAndInitCmdLine@CAutoplayHandler@@AEAAJPEAUIQuerySource@@@Z
    long _InitClsidAndInitCmdLine(IQuerySource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDesktopAppX@CAutoplayHandler@@AEAAJPEAUIQuerySource@@@Z
    long _InitDesktopAppX(IQuerySource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitImmersive@CAutoplayHandler@@AEAAJPEAUIQuerySource@@@Z
    long _InitImmersive(IQuerySource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitImmersiveProperties@CAutoplayHandler@@AEAAJPEAUIQuerySource@@@Z
    long _InitImmersiveProperties(IQuerySource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitInvokeProgIdAndVerb@CAutoplayHandler@@AEAAJPEAUIQuerySource@@@Z
    long _InitInvokeProgIdAndVerb(IQuerySource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitProvider@CAutoplayHandler@@AEAAJPEAUIQuerySource@@@Z
    long _InitProvider(IQuerySource *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoplayHandler@@AEAA@XZ
    ~CAutoplayHandler();
};
