#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 38 member(s).
class CExtractConstIcon {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExtractConstIcon@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?Extract@CExtractConstIcon@@UEAAJPEBGIPEAPEAUHICON__@@1I@Z
    virtual long Extract(unsigned short const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CExtractConstIcon@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CExtractConstIcon@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CExtractConstIcon@@UEAAJIPEAGIPEAHPEAI@Z
    virtual long GetIconLocation(unsigned int, unsigned short *, unsigned int, int *, unsigned int *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitNew@CExtractConstIcon@@UEAAJXZ
    virtual long InitNew();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CExtractConstIcon@@UEAAJPEAUIShellItem@@K@Z
    virtual long Initialize(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CExtractConstIcon@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExtractConstIcon@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExtractConstIcon@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CExtractConstIcon@@UEAAJPEAUIPropertyBag@@HH@Z
    virtual long Save(IPropertyBag *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultIcon@CExtractConstIcon@@UEAAJPEBGH@Z
    virtual long SetDefaultIcon(unsigned short const *, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFlags@CExtractConstIcon@@UEAAJI@Z
    virtual long SetFlags(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIDList@CExtractConstIcon@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetKey@CExtractConstIcon@@UEAAJPEAUHKEY__@@@Z
    virtual long SetKey(HKEY__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetNormalIcon@CExtractConstIcon@@UEAAJPEBGH@Z
    virtual long SetNormalIcon(unsigned short const *, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetOpenIcon@CExtractConstIcon@@UEAAJPEBGH@Z
    virtual long SetOpenIcon(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOplockProvider@CExtractConstIcon@@UEAAJPEAUIOplockProvider@@@Z
    virtual long SetOplockProvider(IOplockProvider *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetShortcutIcon@CExtractConstIcon@@UEAAJPEBGH@Z
    virtual long SetShortcutIcon(unsigned short const *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyIconLocation@CExtractConstIcon@@AEAAJPEAGIHPEAHPEAI@Z
    long _CopyIconLocation(unsigned short *, unsigned int, int, int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryGetIconPathWithStreamName@CExtractConstIcon@@AEAAJPEAUIShellItem2@@PEAG@Z
    long _TryGetIconPathWithStreamName(IShellItem2*, unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExtractConstIcon@@AEAA@XZ
    ~CExtractConstIcon();
};
