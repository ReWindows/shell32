#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 38 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CXElementModuleInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CXElementModuleInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CXElementModuleInner@@QEAA@XZ
    CXElementModuleInner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CXElementModuleInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CXElementModuleInner@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CXElementModuleInner@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CXElementModuleInner@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentsChanged@CXElementModuleInner@@UEAAJXZ
    virtual long OnContentsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFolderChanged@CXElementModuleInner@@UEAAJXZ
    virtual long OnFolderChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInnerElementDestroyed@CXElementModuleInner@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAway@CXElementModuleInner@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemChanged@CXElementModuleInner@@UEAAJXZ
    virtual long OnSelectedItemChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CXElementModuleInner@@UEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OptionallyTakeInitialFocus@CXElementModuleInner@@UEAAJPEAH@Z
    virtual long OptionallyTakeInitialFocus(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CXElementModuleInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CXElementModuleInner@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CXElementModuleInner@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CXElementModuleInner@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CXElementModuleInner@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FailGracefully@CXElementModuleInner@@IEAAXPEAVElement@DirectUI@@@Z
    void _FailGracefully(::DirectUI::Element *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXElementModuleInner@@MEAA@XZ
    virtual ~CXElementModuleInner();
};
