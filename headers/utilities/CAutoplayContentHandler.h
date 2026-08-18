#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 26 member(s).
class CAutoplayContentHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAutoplayContentHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoplayContentHandler@@QEAA@XZ
    CAutoplayContentHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAutoplayContentHandler@@SAJPEAPEAUIAutoplayContentHandler@@KPEBG@Z
    static long Create(IAutoplayContentHandler * *, unsigned long, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfigHandlerList@CAutoplayContentHandler@@UEAAJPEAPEAUIAutoplayHandlerList@@@Z
    virtual long GetConfigHandlerList(IAutoplayHandlerList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultHandler@CAutoplayContentHandler@@UEAAJW4AUTOPLAY_DEFAULT_TYPE@@PEBGPEAPEAG@Z
    virtual long GetDefaultHandler(int, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultHandlerLastWriteTime@CAutoplayContentHandler@@UEAAJW4AUTOPLAY_DEFAULT_TYPE@@PEBGPEAU_FILETIME@@PEAPEAG@Z
    virtual long GetDefaultHandlerLastWriteTime(int, unsigned short const *, _FILETIME *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CAutoplayContentHandler@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID@CAutoplayContentHandler@@UEAAJPEAPEAG@Z
    virtual long GetID(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CAutoplayContentHandler@@UEAAJHPEAPEAUHICON__@@@Z
    virtual long GetIcon(int, HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@CAutoplayContentHandler@@UEAAJPEAH@Z
    virtual long GetIndex(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLabel@CAutoplayContentHandler@@UEAAJPEAPEAG@Z
    virtual long GetLabel(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewlyInstalledHandlerList@CAutoplayContentHandler@@UEAAJPEBGPEAPEAUIAutoplayHandlerList@@@Z
    virtual long GetNewlyInstalledHandlerList(unsigned short const *, IAutoplayHandlerList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPromptHandlerList@CAutoplayContentHandler@@UEAAJPEAPEAUIAutoplayHandlerList@@@Z
    virtual long GetPromptHandlerList(IAutoplayHandlerList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemDefaultHandler@CAutoplayContentHandler@@UEAAJW4AUTOPLAY_DEFAULT_TYPE@@PEAPEAG@Z
    virtual long GetSystemDefaultHandler(int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTooltip@CAutoplayContentHandler@@UEAAJPEAPEAG@Z
    virtual long GetTooltip(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CAutoplayContentHandler@@UEAAJPEAK@Z
    virtual long GetType(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromType@CAutoplayContentHandler@@SAHK@Z
    static int IndexFromType(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAutoplayContentHandler@@UEAAJKPEBG@Z
    virtual long Initialize(unsigned long, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAutoplayContentHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutoplayContentHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultHandler@CAutoplayContentHandler@@UEAAJW4AUTOPLAY_DEFAULT_TYPE@@PEBG1@Z
    virtual long SetDefaultHandler(int, unsigned short const *, unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAutorunHandlerToList@CAutoplayContentHandler@@AEAAJPEAVCAutoplayHandlerList@@PEBU_FILETIME@@@Z
    long _AddAutorunHandlerToList(CAutoplayHandlerList *, _FILETIME const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddLegacyHandlerToList@CAutoplayContentHandler@@AEAAJPEAVCAutoplayHandlerList@@KPEBU_FILETIME@@@Z
    long _AddLegacyHandlerToList(CAutoplayHandlerList *, unsigned long, _FILETIME const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAutoplayHandlerList@CAutoplayContentHandler@@AEAAJHPEBU_FILETIME@@PEAPEAUIAutoplayHandlerList@@@Z
    long _GetAutoplayHandlerList(int, _FILETIME const *, IAutoplayHandlerList * *);
};
