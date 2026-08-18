#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 41 member(s).
class COpenControlPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEnumFlag@COpenControlPanel@@UEAAJK@Z
    virtual long AddEnumFlag(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COpenControlPanel@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustIDListToAllItemsView@COpenControlPanel@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU2@@Z
    virtual long AdjustIDListToAllItemsView(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@COpenControlPanel@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentView@COpenControlPanel@@UEAAJPEAW4CPVIEW@@@Z
    virtual long GetCurrentView(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPath@COpenControlPanel@@UEAAJPEBGPEAGI@Z
    virtual long GetPath(unsigned short const *, unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWowCplInfo@COpenControlPanel@@UEAAJPEBGPEAPEAUHICON__@@PEAH@Z
    virtual long GetWowCplInfo(unsigned short const *, HICON__* *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@COpenControlPanel@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@COpenControlPanel@@UEAAJPEBG0PEAUIUnknown@@@Z
    virtual long Open(unsigned short const *, unsigned short const *, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COpenControlPanel@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COpenControlPanel@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopLoggingRecentItems@COpenControlPanel@@UEAAJXZ
    virtual long StopLoggingRecentItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWowCache@COpenControlPanel@@UEAAJK@Z
    virtual long UpdateWowCache(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddtoRecentDocs@COpenControlPanel@@AEAAJPEBG_N@Z
    long _AddtoRecentDocs(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindAppletMatchingId@COpenControlPanel@@AEAA_NPEBG_NPEAUIShellFolder2@@PEAUIEnumIDList@@PEAPEAU_ITEMID_CHILD@@@Z
    bool _FindAppletMatchingId(unsigned short const *, bool, IShellFolder2*, IEnumIDList *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppletPathAndPrimaryCategory@COpenControlPanel@@AEAAJPEBG_NPEAUIShellFolder2@@PEAUIEnumIDList@@PEAGI4IPEAW4tagCPCAT@@PEA_N@Z
    long _GetAppletPathAndPrimaryCategory(unsigned short const *, bool, IShellFolder2*, IEnumIDList *, unsigned short *, unsigned int, unsigned short *, unsigned int, int *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLegacyCplCommand@COpenControlPanel@@AEAA_NPEBGPEAGI@Z
    bool _GetLegacyCplCommand(unsigned short const *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPath@COpenControlPanel@@AEAAJPEBGPEAGI_N@Z
    long _GetPath(unsigned short const *, unsigned short *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPathWithLegacyCheck@COpenControlPanel@@AEAAJPEBGPEAGI_NPEA_N3@Z
    long _GetPathWithLegacyCheck(unsigned short const *, unsigned short *, unsigned int, bool, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapLegacyName@COpenControlPanel@@AEAA_NPEBGPEAGIPEA_N@Z
    bool _MapLegacyName(unsigned short const *, unsigned short *, unsigned int, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenControlPanel@@EEAA@XZ
    virtual ~COpenControlPanel();
};
