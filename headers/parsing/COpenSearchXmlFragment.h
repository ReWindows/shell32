#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class COpenSearchXmlFragment {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COpenSearchXmlFragment@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@COpenSearchXmlFragment@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetData(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStore@COpenSearchXmlFragment@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStore(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COpenSearchXmlFragment@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COpenSearchXmlFragment@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@COpenSearchXmlFragment@@UEAAJPEAUIUnknown@@@Z
    virtual long SetData(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@COpenSearchXmlFragment@@SAJAEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(_GUID const &, void * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenSearchXmlFragment@@AEAA@XZ
    ~COpenSearchXmlFragment();
};
