#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class SecureBootToastHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndSendSecureBootNotification@SecureBootToastHelper@@SAXXZ
    static void CheckAndSendSecureBootNotification();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSecureBootDisabledToastBeenSentInSession@SecureBootToastHelper@@CA_NXZ
    static bool HasSecureBootDisabledToastBeenSentInSession();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNotifyingUserSecureBootOff@SecureBootToastHelper@@CA_NXZ
    static bool IsNotifyingUserSecureBootOff();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendNonSecureBootToast@SecureBootToastHelper@@CAXXZ
    static void SendNonSecureBootToast();
};
