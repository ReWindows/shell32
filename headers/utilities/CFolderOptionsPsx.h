#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
class CFolderOptionsPsx {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPages@CFolderOptionsPsx@@UEAAJP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPages(int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFolderOptionsPsx@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CFolderOptionsPsx@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFolderOptionsPsx@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFolderOptionsPsx@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ReplacePage@CFolderOptionsPsx@@UEAAJIP6AHPEAU_PSP@@_J@Z1@Z
    virtual long ReplacePage(unsigned int, int ( *)(_PSP *, int64_t), int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDefFolderSettings@CFolderOptionsPsx@@QEAAJXZ
    long ResetDefFolderSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSyncRootIdIndexMap@CFolderOptionsPsx@@QEAAXHPEBG@Z
    void SetSyncRootIdIndexMap(int, unsigned short const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFolderOptionsPsx@@AEAA@XZ
    CFolderOptionsPsx();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropCallback@CFolderOptionsPsx@@CAIPEAUHWND__@@IPEAU_PROPSHEETPAGEW@@@Z
    static unsigned int PropCallback(HWND__*, unsigned int, _PROPSHEETPAGEW *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFolderOptionsPsx@@EEAA@XZ
    virtual ~CFolderOptionsPsx();
};
