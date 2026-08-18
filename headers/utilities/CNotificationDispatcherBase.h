#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CNotificationDispatcherBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueNotification@CNotificationDispatcherBase@@UEAAJPEAUIDispatchNotification@@@Z
    virtual long QueueNotification(IDispatchNotification *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBackReferences@CNotificationDispatcherBase@@UEAAJXZ
    virtual long RemoveBackReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProcessingNotifications@CNotificationDispatcherBase@@UEAAXXZ
    virtual void StartProcessingNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopProcessingNotifications@CNotificationDispatcherBase@@UEAAXXZ
    virtual void StopProcessingNotifications();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanProcessWork@CNotificationDispatcherBase@@MEAA_NXZ
    virtual bool CanProcessWork();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNotificationDispatcherBase@@MEAA@XZ
    virtual ~CNotificationDispatcherBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CNotificationDispatcherBase@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
