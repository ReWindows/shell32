#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 47 member(s).
class CTravelLog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEntry@CTravelLog@@UEAAJPEAUIUnknown@@H@Z
    virtual long AddEntry(IUnknown *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTravelLog@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTravelLog@@QEAA@XZ
    CTravelLog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CTravelLog@@UEAAJPEAPEAUITravelLog@@@Z
    virtual long Clone(ITravelLog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountEntries@CTravelLog@@UEAAKPEAUIUnknown@@@Z
    virtual unsigned long CountEntries(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountEntryNodes@CTravelLog@@UEAAJPEAUIUnknown@@KPEAK@Z
    virtual long CountEntryNodes(IUnknown *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEnumEntry@CTravelLog@@UEAAJPEAUIUnknown@@PEAPEAUIEnumTravelLogEntry@@K@Z
    virtual long CreateEnumEntry(IUnknown *, IEnumTravelLogEntry * *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteEntry@CTravelLog@@UEAAJPEAUIUnknown@@PEAUITravelLogEntry@@@Z
    virtual long DeleteEntry(IUnknown *, ITravelLogEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteIndexEntry@CTravelLog@@UEAAJPEAUIUnknown@@H@Z
    virtual long DeleteIndexEntry(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteUrlEntry@CTravelLog@@UEAAJPEAUIUnknown@@IPEAG@Z
    virtual long DeleteUrlEntry(IUnknown *, unsigned int, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FastBack@CTravelLog@@UEAAJPEAUIUnknown@@@Z
    virtual long FastBack(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTravelEntry@CTravelLog@@UEAAJPEAUIUnknown@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAUITravelEntry@@@Z
    virtual long FindTravelEntry(IUnknown *, _ITEMIDLIST_ABSOLUTE const *, ITravelEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTravelEntryWithUrl@CTravelLog@@UEAAJPEAUIUnknown@@IPEAGPEAPEAUITravelEntry@@@Z
    virtual long FindTravelEntryWithUrl(IUnknown *, unsigned int, unsigned short *, ITravelEntry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFastBackEntry@CTravelLog@@UEAAJPEAPEAUITravelEntry@@@Z
    virtual long GetFirstFastBackEntry(ITravelEntry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetJourneyOffset@CTravelLog@@UEAAJPEAH@Z
    virtual long GetJourneyOffset(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTipText@CTravelLog@@UEAAJPEAUIUnknown@@HHPEAGK@Z
    virtual long GetToolTipText(IUnknown *, int, int, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTravelEntry@CTravelLog@@UEAAJPEAUIUnknown@@HPEAPEAUITravelEntry@@@Z
    virtual long GetTravelEntry(IUnknown *, int, ITravelEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertEntry@CTravelLog@@UEAAJPEAUIUnknown@@PEAUITravelLogEntry@@H0PEAPEAU3@@Z
    virtual long InsertEntry(IUnknown *, ITravelLogEntry *, int, IUnknown *, ITravelLogEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertMenuEntries@CTravelLog@@UEAAJPEAUIUnknown@@PEAUHMENU__@@HHHK@Z
    virtual long InsertMenuEntries(IUnknown *, HMENU__*, int, int, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateTravelLogUI@CTravelLog@@UEAAJPEAUIUnknown@@0HHK@Z
    virtual long PopulateTravelLogUI(IUnknown *, IUnknown *, int, int, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTravelLog@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTravelLog@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetJourneyState@CTravelLog@@UEAAJXZ
    virtual long ResetJourneyState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CTravelLog@@UEAAJXZ
    virtual long Revert();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTypedNavigationPending@CTravelLog@@UEAAJH@Z
    virtual long SetTypedNavigationPending(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Travel@CTravelLog@@UEAAJPEAUIUnknown@@H@Z
    virtual long Travel(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TravelToEntry@CTravelLog@@UEAAJPEAUIUnknown@@PEAUITravelLogEntry@@@Z
    virtual long TravelToEntry(IUnknown *, ITravelLogEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TravelToUrl@CTravelLog@@UEAAJPEAUIUnknown@@IPEAG@Z
    virtual long TravelToUrl(IUnknown *, unsigned int, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEntry@CTravelLog@@UEAAJPEAUIUnknown@@HH@Z
    virtual long UpdateEntry(IUnknown *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEntry@CTravelLog@@UEAAJPEAUIUnknown@@H@Z
    virtual long UpdateEntry(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExternal@CTravelLog@@UEAAJPEAUIUnknown@@0@Z
    virtual long UpdateExternal(IUnknown *, IUnknown *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteFrameSetEntry@CTravelLog@@IEAAXPEAUIUnknown@@PEAVCTravelEntry@@@Z
    void _DeleteFrameSetEntry(IUnknown *, CTravelEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindEntryByOffset@CTravelLog@@IEAAJPEAUIUnknown@@HPEAPEAVCTravelEntry@@@Z
    long _FindEntryByOffset(IUnknown *, int, CTravelEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindEntryByPidl@CTravelLog@@IEAAJPEAUIUnknown@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAVCTravelEntry@@@Z
    long _FindEntryByPidl(IUnknown *, _ITEMIDLIST_ABSOLUTE const *, CTravelEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindEntryByPunk@CTravelLog@@IEAAJPEAUIUnknown@@PEAUITravelLogEntry@@PEAPEAVCTravelEntry@@@Z
    long _FindEntryByPunk(IUnknown *, ITravelLogEntry *, CTravelEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFirstFastBackEntry@CTravelLog@@IEAAJPEAPEAVCTravelEntry@@@Z
    long _GetFirstFastBackEntry(CTravelEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertTravelLogItem@CTravelLog@@IEAAJPEAUHMENU__@@PEAUIShellTravelLogUI@@HHPEBGK@Z
    long _InsertTravelLogItem(HMENU__*, IShellTravelLogUI *, int, int, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateTravelLogUI@CTravelLog@@IEAAJPEAUIUnknown@@PEAUHMENU__@@PEAUIShellTravelLogUI@@HHHK@Z
    long _PopulateTravelLogUI(IUnknown *, HMENU__*, IShellTravelLogUI *, int, int, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Prune@CTravelLog@@IEAAXXZ
    void _Prune();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TravelToEntryInternal@CTravelLog@@IEAAJPEAUIUnknown@@PEAVCTravelEntry@@@Z
    long _TravelToEntryInternal(IUnknown *, CTravelEntry *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTravelLog@@IEAA@XZ
    ~CTravelLog();
};
