#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
class CAppSuggestedLocationsFolderEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppSuggestedLocationsFolderEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CAppSuggestedLocationsFolderEnum@@UEAAJPEAPEAUIEnumIDList@@@Z
    virtual long Clone(IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CAppSuggestedLocationsFolderEnum@@UEAAJKPEAPEAU_ITEMID_CHILD@@PEAK@Z
    virtual long Next(unsigned long, _ITEMID_CHILD * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppSuggestedLocationsFolderEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppSuggestedLocationsFolderEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Reset@CAppSuggestedLocationsFolderEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CAppSuggestedLocationsFolderEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConvertAndAddItems@CAppSuggestedLocationsFolderEnum@@AEAAJPEAUIEnumUnknown@@PEAI@Z
    long _ConvertAndAddItems(IEnumUnknown *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CAppSuggestedLocationsFolderEnum@@AEAAJXZ
    long _Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertItemIntoDSA@CAppSuggestedLocationsFolderEnum@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@AEBUtagPROPVARIANT@@PEAIH@Z
    long _InsertItemIntoDSA(_ITEMIDLIST_ABSOLUTE const *, tagPROPVARIANT const &, unsigned int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsItemInDSA@CAppSuggestedLocationsFolderEnum@@AEAAHPEAUIShellItem@@@Z
    int _IsItemInDSA(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DestroyDPFEITEM@CAppSuggestedLocationsFolderEnum@@CAHPEAUCPFEITEM@1@PEAX@Z
    static int s_DestroyDPFEITEM(WindissectOpaque *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppSuggestedLocationsFolderEnum@@EEAA@XZ
    virtual ~CAppSuggestedLocationsFolderEnum();
};
