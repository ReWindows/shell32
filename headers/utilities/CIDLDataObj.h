#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 34 member(s).
class CIDLDataObj {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CIDLDataObj@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DAdvise@CIDLDataObj@@UEAAJPEAUtagFORMATETC@@KPEAUIAdviseSink@@PEAK@Z
    virtual long DAdvise(tagFORMATETC *, unsigned long, IAdviseSink *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DUnadvise@CIDLDataObj@@UEAAJK@Z
    virtual long DUnadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndOperation@CIDLDataObj@@UEAAJJPEAUIBindCtx@@K@Z
    virtual long EndOperation(long, IBindCtx *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumDAdvise@CIDLDataObj@@UEAAJPEAPEAUIEnumSTATDATA@@@Z
    virtual long EnumDAdvise(IEnumSTATDATA * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumFormatEtc@CIDLDataObj@@UEAAJKPEAPEAUIEnumFORMATETC@@@Z
    virtual long EnumFormatEtc(unsigned long, IEnumFORMATETC * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsyncMode@CIDLDataObj@@UEAAJPEAH@Z
    virtual long GetAsyncMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalFormatEtc@CIDLDataObj@@UEAAJPEAUtagFORMATETC@@0@Z
    virtual long GetCanonicalFormatEtc(tagFORMATETC *, tagFORMATETC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@CIDLDataObj@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long GetData(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataHere@CIDLDataObj@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long GetDataHere(tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstItemInSelection@CIDLDataObj@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetFirstItemInSelection(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellItemArray@CIDLDataObj@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetShellItemArray(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InOperation@CIDLDataObj@@UEAAJPEAH@Z
    virtual long InOperation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryGetData@CIDLDataObj@@UEAAJPEAUtagFORMATETC@@@Z
    virtual long QueryGetData(tagFORMATETC *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CIDLDataObj@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CIDLDataObj@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAsyncMode@CIDLDataObj@@UEAAJH@Z
    virtual long SetAsyncMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@CIDLDataObj@@UEAAJPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@H@Z
    virtual long SetData(tagFORMATETC *, tagSTGMEDIUM *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSafeFlush@CIDLDataObj@@UEAAJXZ
    virtual long SetSafeFlush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellItemArrayWeakRef@CIDLDataObj@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetShellItemArrayWeakRef(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOperation@CIDLDataObj@@UEAAJPEAUIBindCtx@@@Z
    virtual long StartOperation(IBindCtx *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIDLDataObj@@IEAA@PEBU_ITEMIDLIST_ABSOLUTE@@IPEBQEFBU_ITEMIDLIST_RELATIVE@@PEAUIDataObject@@@Z
    CIDLDataObj(_ITEMIDLIST_ABSOLUTE const *, unsigned int, _ITEMIDLIST_RELATIVE & volatile * const *, IDataObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIDLDataObj@@MEAA@XZ
    virtual ~CIDLDataObj();
};
