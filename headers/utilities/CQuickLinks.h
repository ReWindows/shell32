#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 74 member(s).
class CQuickLinks {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CQuickLinks@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CQuickLinks@@QEAA@XZ
    CQuickLinks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDW@CQuickLinks@@UEAAJK@Z
    virtual long CloseDW(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CQuickLinks@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandInfo@CQuickLinks@@UEAAJKKPEAUDESKBANDINFO@@@Z
    virtual long GetBandInfo(unsigned long, unsigned long, DESKBANDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CQuickLinks@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CQuickLinks@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDDT@CQuickLinks@@UEAAJPEAUIDropTarget@@PEAUIDataObject@@PEAKU_POINTL@@2@Z
    virtual long OnDropDDT(IDropTarget *, IDataObject *, unsigned long *, _POINTL, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CQuickLinks@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CQuickLinks@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CQuickLinks@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CQuickLinks@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDW@CQuickLinks@@UEAAJH@Z
    virtual long ShowDW(int);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?_AllowDropOnTitle@CQuickLinks@@EEAAHXZ
    virtual int _AllowDropOnTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateQuickLinksFolder@CQuickLinks@@AEAAJPEAGK@Z
    long _CreateQuickLinksFolder(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIEnumIDList@CQuickLinks@@EEAAJKPEAPEAUIEnumIDList@@@Z
    virtual long _GetIEnumIDList(unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLocalizedLinksFolder@CQuickLinks@@AEAAXPEAGK@Z
    void _GetLocalizedLinksFolder(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTitleW@CQuickLinks@@EEAAJPEAGK@Z
    virtual long _GetTitleW(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalInit@CQuickLinks@@AEAAJXZ
    long _InternalInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadOrderStream@CQuickLinks@@EEAAJXZ
    virtual long _LoadOrderStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveOrderStream@CQuickLinks@@EEAAJXZ
    virtual long _SaveOrderStream();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CQuickLinks@@EEAA@XZ
    virtual ~CQuickLinks();
};
