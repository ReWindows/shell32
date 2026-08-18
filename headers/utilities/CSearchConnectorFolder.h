#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
class CSearchConnectorFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchConnectorFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CSearchConnectorFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CSearchConnectorFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CSearchConnectorFolder@@UEAAJPEAW4SEARCHBOX_FLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFolderTargetInfo@CSearchConnectorFolder@@UEAAJPEAU_PERSIST_FOLDER_TARGET_INFO@@@Z
    virtual long GetFolderTargetInfo(_PERSIST_FOLDER_TARGET_INFO *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMRULocation@CSearchConnectorFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetMRULocation(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSuggestPopupSetting@CSearchConnectorFolder@@UEAAJPEAW4SEARCH_BOX_SUGGEST_POPUP_SETTING@@@Z
    virtual long GetSuggestPopupSetting(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTimerDelay@CSearchConnectorFolder@@UEAAJPEAI@Z
    virtual long GetTimerDelay(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSearchConnectorFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEx@CSearchConnectorFolder@@UEAAJPEAUIBindCtx@@PEBU_ITEMIDLIST_ABSOLUTE@@PEBU_PERSIST_FOLDER_TARGET_INFO@@@Z
    virtual long InitializeEx(IBindCtx *, _ITEMIDLIST_ABSOLUTE const *, _PERSIST_FOLDER_TARGET_INFO const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchConnectorFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchConnectorFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CSearchConnectorFolder@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(IUnknown *, _GUID const &, void * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InternalQueryInterface@CSearchConnectorFolder@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_InternalQueryInterface(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeFromLocation@CSearchConnectorFolder@@AEAAJPEAUILocationDescription@@@Z
    long _InitializeFromLocation(ILocationDescription *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchConnectorFolder@@EEAA@XZ
    virtual ~CSearchConnectorFolder();
};
