#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
// Base evidence: CFrameModule (likely; classinfo-template-instantiation).
class CPreviewTitleArea {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInnerObject@CPreviewTitleArea@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long CreateInnerObject(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CPreviewTitleArea@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?NullSelectTitlePropertyStringProp@CPreviewTitleArea@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * NullSelectTitlePropertyStringProp();
};
