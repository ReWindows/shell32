#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
class CUserNotification {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUserNotification@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaySoundW@CUserNotification@@UEAAJPEBG@Z
    virtual long PlaySoundW(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUserNotification@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUserNotification@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBalloonInfo@CUserNotification@@UEAAJPEBG0K@Z
    virtual long SetBalloonInfo(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBalloonRetry@CUserNotification@@UEAAJKKI@Z
    virtual long SetBalloonRetry(unsigned long, unsigned long, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconInfo@CUserNotification@@UEAAJPEAUHICON__@@PEBG@Z
    virtual long SetIconInfo(HICON__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CUserNotification@@UEAAJPEAUIQueryContinue@@K@Z
    virtual long Show(IQueryContinue *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CUserNotification@@UEAAJPEAUIQueryContinue@@KPEAUIUserNotificationCallback@@@Z
    virtual long Show(IQueryContinue *, unsigned long, IUserNotificationCallback *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindow@CUserNotification@@AEAAJXZ
    long _GetWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveNotifyIcon@CUserNotification@@AEAAXXZ
    void _RemoveNotifyIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncIcon@CUserNotification@@AEAAHXZ
    int _SyncIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncInfo@CUserNotification@@AEAAHXZ
    int _SyncInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Timeout@CUserNotification@@AEAAXXZ
    void _Timeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WndProc@CUserNotification@@AEAA_JI_K_J@Z
    int64_t _WndProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CUserNotification@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUserNotification@@AEAA@XZ
    ~CUserNotification();
};
