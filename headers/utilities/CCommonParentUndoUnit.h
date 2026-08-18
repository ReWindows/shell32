#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 56 member(s).
class CCommonParentUndoUnit {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CCommonParentUndoUnit@@UEAAJPEAUIOleUndoUnit@@@Z
    virtual long Add(IOleUndoUnit *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCommonParentUndoUnit@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommonParentUndoUnit@@QEAA@XZ
    CCommonParentUndoUnit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CCommonParentUndoUnit@@UEAAJPEAUIOleParentUndoUnit@@H@Z
    virtual long Close(IOleParentUndoUnit *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardFrom@CCommonParentUndoUnit@@QEAAJPEAUIOleUndoUnit@@@Z
    long DiscardFrom(IOleUndoUnit *);
    // Category: Method | Source: PE Export
    // Symbol: ?DisconnectObject@CCommonParentUndoUnit@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Do@CCommonParentUndoUnit@@UEAAJPEAUIOleUndoManager@@@Z
    virtual long Do(IOleUndoManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoAll@CCommonParentUndoUnit@@QEAAJPEAUIOleUndoManager@@PEAH@Z
    long DoAll(IOleUndoManager *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumDoableWithOwner@CCommonParentUndoUnit@@QEAAJPEAUIUnknown@@PEAPEAUIEnumOleUndoUnits@@@Z
    long EnumDoableWithOwner(IUnknown *, IEnumOleUndoUnits * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindUnit@CCommonParentUndoUnit@@UEAAJPEAUIOleUndoUnit@@@Z
    virtual long FindUnit(IOleUndoUnit *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildUnitCount@CCommonParentUndoUnit@@UEAAJPEAK@Z
    virtual long GetChildUnitCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CCommonParentUndoUnit@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastDoDescription@CCommonParentUndoUnit@@QEAAJPEAPEAG@Z
    long GetLastDoDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@CCommonParentUndoUnit@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMemoryUsage@CCommonParentUndoUnit@@UEAAJPEAK@Z
    virtual long GetMemoryUsage(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameAt@CCommonParentUndoUnit@@UEAAJKPEAPEAG@Z
    virtual long GetNameAt(unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCount@CCommonParentUndoUnit@@UEAAJPEAK@Z
    virtual long GetNameCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedValue@CCommonParentUndoUnit@@UEAAJPEBGPEAUtagPROPVARIANT@@@Z
    virtual long GetNamedValue(unsigned short const *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentState@CCommonParentUndoUnit@@UEAAJPEAK@Z
    virtual long GetParentState(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUndoText@CCommonParentUndoUnit@@UEAAXPEAGIH@Z
    virtual void GetUndoText(unsigned short *, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnitType@CCommonParentUndoUnit@@UEAAJPEAU_GUID@@PEAJ@Z
    virtual long GetUnitType(_GUID *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@CCommonParentUndoUnit@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@CCommonParentUndoUnit@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNextAdd@CCommonParentUndoUnit@@UEAAJXZ
    virtual long OnNextAdd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CCommonParentUndoUnit@@UEAAJPEAUIOleParentUndoUnit@@@Z
    virtual long Open(IOleParentUndoUnit *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopItem@CCommonParentUndoUnit@@QEAAJPEAPEAUIOleUndoUnit@@@Z
    long PopItem(IOleUndoUnit * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCommonParentUndoUnit@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCommonParentUndoUnit@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ReleaseMarshalData@CCommonParentUndoUnit@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLongText@CCommonParentUndoUnit@@UEAAJPEBG@Z
    virtual long SetLongText(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNamedValue@CCommonParentUndoUnit@@UEAAJPEBGAEBUtagPROPVARIANT@@@Z
    virtual long SetNamedValue(unsigned short const *, tagPROPVARIANT const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetShortText@CCommonParentUndoUnit@@UEAAJPEBG@Z
    virtual long SetShortText(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CCommonParentUndoUnit@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommonParentUndoUnit@@QEAA@XZ
    ~CCommonParentUndoUnit();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureNamedPropertyStore@CCommonParentUndoUnit@@AEAAJXZ
    long _EnsureNamedPropertyStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMemoryUsage@CCommonParentUndoUnit@@AEAAKPEAUIOleUndoUnit@@@Z
    unsigned long _GetMemoryUsage(IOleUndoUnit *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStackSize@CCommonParentUndoUnit@@AEAAHXZ
    int _GetStackSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PeekStack@CCommonParentUndoUnit@@AEAAPEAUIOleUndoUnit@@XZ
    IOleUndoUnit * _PeekStack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopStack@CCommonParentUndoUnit@@AEAAPEAUIOleUndoUnit@@XZ
    IOleUndoUnit * _PopStack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PushStack@CCommonParentUndoUnit@@AEAAJPEAUIOleUndoUnit@@@Z
    long _PushStack(IOleUndoUnit *);
};
