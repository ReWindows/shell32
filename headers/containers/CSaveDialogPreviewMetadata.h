#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
// Base evidence: CPreviewMetadata (likely; classinfo-template-instantiation).
class CSaveDialogPreviewMetadata {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CSaveDialogPreviewMetadata@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInnerObject@CSaveDialogPreviewMetadata@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long CreateInnerObject(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CSaveDialogPreviewMetadata@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSaveDialogPreviewMetadata@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CSaveDialogPreviewMetadata@@UEAAKXZ
    virtual unsigned long Release();
};
