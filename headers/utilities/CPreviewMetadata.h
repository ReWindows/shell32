#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
// Base evidence: CFrameModule (likely; classinfo-template-instantiation).
class CPreviewMetadata {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInnerObject@CPreviewMetadata@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long CreateInnerObject(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CPreviewMetadata@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?NullSelectPropertyStringProp@CPreviewMetadata@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * NullSelectPropertyStringProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?NullSelectTitlePropertyStringProp@CPreviewMetadata@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * NullSelectTitlePropertyStringProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ReadOnlyProp@CPreviewMetadata@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ReadOnlyProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?VerticalProp@CPreviewMetadata@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * VerticalProp();
};
