#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 36 member(s).
// Base evidence: CFrameModule (likely; classinfo-template-instantiation).
class CPreviewThumbnail {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CPreviewThumbnail@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?AlwaysGetIconFromViewProp@CPreviewThumbnail@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * AlwaysGetIconFromViewProp();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPreviewThumbnail@@QEAA@XZ
    CPreviewThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInnerObject@CPreviewThumbnail@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long CreateInnerObject(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?FixedThumbSizeProp@CPreviewThumbnail@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * FixedThumbSizeProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ForceUseIconProp@CPreviewThumbnail@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ForceUseIconProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlwaysGetIconFromView@CPreviewThumbnail@@QEAA_NXZ
    bool GetAlwaysGetIconFromView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CPreviewThumbnail@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFixedThumbSize@CPreviewThumbnail@@QEAAHXZ
    int GetFixedThumbSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForceUseIcon@CPreviewThumbnail@@QEAA_NXZ
    bool GetForceUseIcon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxThumbSize@CPreviewThumbnail@@QEAAHXZ
    int GetMaxThumbSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVertical@CPreviewThumbnail@@QEAA_NXZ
    bool GetVertical();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HidePropertyProp@CPreviewThumbnail@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * HidePropertyProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CPreviewThumbnail@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?MaxThumbSizeProp@CPreviewThumbnail@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * MaxThumbSizeProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CPreviewThumbnail@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CPreviewThumbnail@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PE Export
    // Symbol: ?OnNavigateAway@CPreviewThumbnail@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPreviewThumbnail@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ReadingPaneProp@CPreviewThumbnail@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ReadingPaneProp();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CPreviewThumbnail@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ThumbnailIdProp@CPreviewThumbnail@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ThumbnailIdProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?VerticalProp@CPreviewThumbnail@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * VerticalProp();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateLayoutPos@CPreviewThumbnail@@AEAAJXZ
    long _UpdateLayoutPos();
};
