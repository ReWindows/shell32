#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CMVPRichEditOleCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMVPRichEditOleCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMVPRichEditOleCallback@@QEAA@PEAVCMVPEditControl@@@Z
    CMVPRichEditOleCallback(CMVPEditControl *);
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CMVPRichEditOleCallback@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PE Export
    // Symbol: ?DeleteObject@CMVPRichEditOleCallback@@UEAAJPEAUIOleObject@@@Z
    virtual long DeleteObject(IOleObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipboardData@CMVPRichEditOleCallback@@UEAAJPEAU_charrange@@KPEAPEAUIDataObject@@@Z
    virtual long GetClipboardData(_charrange *, unsigned long, IDataObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenu@CMVPRichEditOleCallback@@UEAAJGPEAUIOleObject@@PEAU_charrange@@PEAPEAUHMENU__@@@Z
    virtual long GetContextMenu(unsigned short, IOleObject *, _charrange *, HMENU__* *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDragDropEffect@CMVPRichEditOleCallback@@UEAAJHKPEAK@Z
    virtual long GetDragDropEffect(int, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInPlaceContext@CMVPRichEditOleCallback@@UEAAJPEAPEAUIOleInPlaceFrame@@PEAPEAUIOleInPlaceUIWindow@@PEAUtagOIFI@@@Z
    virtual long GetInPlaceContext(IOleInPlaceFrame * *, IOleInPlaceUIWindow * *, tagOIFI *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewStorage@CMVPRichEditOleCallback@@UEAAJPEAPEAUIStorage@@@Z
    virtual long GetNewStorage(IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAcceptData@CMVPRichEditOleCallback@@UEAAJPEAUIDataObject@@PEAGKHPEAX@Z
    virtual long QueryAcceptData(IDataObject *, unsigned short *, unsigned long, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInsertObject@CMVPRichEditOleCallback@@UEAAJPEAU_GUID@@PEAUIStorage@@J@Z
    virtual long QueryInsertObject(_GUID *, IStorage *, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMVPRichEditOleCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CMVPRichEditOleCallback@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ShowContainerUI@CMVPRichEditOleCallback@@UEAAJH@Z
    virtual long ShowContainerUI(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableMenuItem@CMVPRichEditOleCallback@@AEAAXPEAUHMENU__@@HH@Z
    void _EnableMenuItem(HMENU__*, int, int);
};
