#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
namespace DirectUI {
class ElementProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ElementProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseEventAdded@ElementProvider@DirectUI@@UEAAJHPEAUtagSAFEARRAY@@@Z
    virtual long AdviseEventAdded(int, tagSAFEARRAY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseEventRemoved@ElementProvider@DirectUI@@UEAAJHPEAUtagSAFEARRAY@@@Z
    virtual long AdviseEventRemoved(int, tagSAFEARRAY *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@ElementProvider@DirectUI@@UEAAPEDVElement@2@XZ
    virtual ::DirectUI::Element const volatile * GetElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedFragmentRoots@ElementProvider@DirectUI@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@ElementProvider@DirectUI@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@ElementProvider@DirectUI@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@ElementProvider@DirectUI@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ElementProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ElementProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@ElementProvider@DirectUI@@UEAAJXZ
    virtual long SetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenu@ElementProvider@DirectUI@@UEAAJXZ
    virtual long ShowContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TossElement@ElementProvider@DirectUI@@UEAAXXZ
    virtual void TossElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangle@ElementProvider@DirectUI@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FragmentRoot@ElementProvider@DirectUI@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@ElementProvider@DirectUI@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@ElementProvider@DirectUI@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
};
} // namespace DirectUI
