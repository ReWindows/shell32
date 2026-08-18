#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 21 member(s).
class CReadingPaneCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CReadingPaneCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CReadingPaneCallback@@SAJPEAUHWND__@@PEAPEAUIPreviewHostCallback@@@Z
    static long CreateInstance(HWND__*, IPreviewHostCallback * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnError@CReadingPaneCallback@@UEAAJPEBUNotifyError@@@Z
    virtual long OnError(NotifyError const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoad@CReadingPaneCallback@@UEAAJJ@Z
    virtual long OnLoad(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShow@CReadingPaneCallback@@UEAAJJ@Z
    virtual long OnShow(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTranslateAccelerator@CReadingPaneCallback@@UEAAJPEBUtagMSG@@PEAJ@Z
    virtual long OnTranslateAccelerator(tagMSG const *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnload@CReadingPaneCallback@@UEAAJJ@Z
    virtual long OnUnload(long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CReadingPaneCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CReadingPaneCallback@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreviewTest@CReadingPaneCallback@@UEAAXU_GUID@@@Z
    virtual void SetPreviewTest(_GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CReadingPaneCallback@@UEAA@XZ
    virtual ~CReadingPaneCallback();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CReadingPaneCallback@@AEAA@PEAUHWND__@@@Z
    CReadingPaneCallback(HWND__*);
};
