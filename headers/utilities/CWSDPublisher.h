#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 29 member(s).
class CWSDPublisher {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWSDPublisher@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalPublishedItems@CWSDPublisher@@UEAAJAEBU_GUID@@PEAPEAUIObjectCollection@@@Z
    virtual long GetLocalPublishedItems(_GUID const &, IObjectCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@CWSDPublisher@@UEAAJAEBU_GUID@@PEAPEAG@Z
    virtual long GetName(_GUID const &, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWSDPublisher@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPublished@CWSDPublisher@@UEAAJPEAUIShellItem@@@Z
    virtual long IsPublished(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?Publish@CWSDPublisher@@UEAAJPEAUIShellItemArray@@@Z
    virtual long Publish(IShellItemArray *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWSDPublisher@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CWSDPublisher@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWSDPublisher@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepublishItems@CWSDPublisher@@UEAAJAEBU_GUID@@PEAUIObjectCollection@@@Z
    virtual long RepublishItems(_GUID const &, IObjectCollection *);
    // Category: Method | Source: PE Export
    // Symbol: ?RepublishItemsFromOfflineCache@CWSDPublisher@@UEAAJAEBU_GUID@@@Z
    virtual long RepublishItemsFromOfflineCache(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CWSDPublisher@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long Resolve(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@CWSDPublisher@@UEAAJAEBU_GUID@@PEBG@Z
    virtual long SetName(_GUID const &, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?Unpublish@CWSDPublisher@@UEAAJPEAUIShellItemArray@@@Z
    virtual long Unpublish(IShellItemArray *);
    // Category: Method | Source: PE Export
    // Symbol: ?UnpublishAll@CWSDPublisher@@UEAAJAEBU_GUID@@W4UNPUBLISH_ALL_FLAGS@@@Z
    virtual long UnpublishAll(_GUID const &, int);
    // Category: Method | Source: PE Export
    // Symbol: ?UnpublishAllForUser@CWSDPublisher@@UEAAJAEBU_GUID@@PEBGW4UNPUBLISH_ALL_FLAGS@@@Z
    virtual long UnpublishAllForUser(_GUID const &, unsigned short const *, int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWSDPublisher@@AEAA@XZ
    ~CWSDPublisher();
};
